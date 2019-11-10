import core.CoreService;
import core.EventConstants;
import core.Message;
import profile.Exchanges;

public class CoinTradeMachine {
    private static CommandListener mCommandListner;
    
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		initialize(args);
	}
	
	private static void initialize(String[] args) {
		CoreService coreService = CoreService.getInstance();

		coreService.sendMessage(new Message(
				EventConstants.LOAD_PROFILE, new Object[] {Exchanges.Type.bitthume, "test", "testtest" } ));
		coreService.sendMessage(new Message(EventConstants.START ));
		coreService.start();
		
		mCommandListner = new CommandListener();
		mCommandListner.push(args);  // TODO::  list. push args > to coreService.
		
	}

}
