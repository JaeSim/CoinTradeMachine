package machine;

import java.time.LocalTime;

import profile.UserAgent;

public class Machine extends Thread {
	private UserAgent mUser;
	private int timeDiff = 3;
	public void setUserAgent(UserAgent userAgent) {
		mUser = userAgent;
	}
	
	public void run() {
		System.out.println("run Machine :" + mUser.toStringName());
		while(true) {  // this loop should be end under 3sec
			LocalTime jobTriggerTime = LocalTime.now();
			System.out.println("TIME : " + jobTriggerTime);
			LocalTime jobLimitTime = jobTriggerTime.plusSeconds(timeDiff);
			
			// do job
			
			LocalTime jobFinishTime = LocalTime.now();
			if (jobLimitTime.compareTo(jobFinishTime) > 0 ) {
				// limit time > finish time
				int diff = jobLimitTime.toSecondOfDay() - jobFinishTime.toSecondOfDay();
				try {
					sleep(diff * 1000);
				} catch (InterruptedException e) {
					return;
				}
			} else {
				// no next job
			}
		}
	}
}
