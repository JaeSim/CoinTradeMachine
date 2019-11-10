package core;
import java.util.LinkedList;
import java.util.Queue;

import machine.Machine;
import profile.Exchanges;
import profile.UserAgent;

public class CoreService extends Thread {
	private Queue<Message> messageQueue = new LinkedList<Message>();
	private Machine machine;
	private boolean isStarted = false;
	private UserAgent mUser;

	public static CoreService getInstance() {
		return LazyHolder.INSTANCE;
	}
	  
	private static class LazyHolder {
		private static final CoreService INSTANCE = new CoreService();  
	}
	  
	public void sendMessage(Message message) {
		messageQueue.add(message);
	}
	
	private int performJob() {
		Message msg = messageQueue.poll(); 
		if (msg == null) {  // no message
			return -1;
		}
		switch (msg.what) {
		case EventConstants.LOAD_PROFILE:
			if (isStarted) {
				System.out.println("before load profile, reset SERVICE");
			}
			
			// mUser = new UserAgent(Exchange.bitthume, "test", "testtest");
			mUser = new UserAgent((Exchanges.Type) msg.objs[0], (String) msg.objs[1], (String) msg.objs[2]);
			
			System.out.println("load Profile " + mUser.toStringName());
			
			break;
		case EventConstants.START:
			if (mUser == null) {
				System.out.println("before start machine, load profile");
				return 0;
			}
			machine = new Machine();
			machine.setUserAgent(mUser);
			System.out.println("start Machine");
			machine.start();
			break;
		case EventConstants.STOP:
			if (isStarted) {
				machine.interrupt();
			}
			break;
		default:
			break;
		}
		return 0;
	}
	
	public void run() {
		int prevRet = 0;
		while(true) {
			int ret = performJob();
			if (ret == -1) {
				try {
					if (prevRet != ret) {
						System.out.println("MessageQueue is empty. wait next job");
					}
					sleep(3000);
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
			prevRet = ret;
		}
	}
}
