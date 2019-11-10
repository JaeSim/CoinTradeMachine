package core;

public class Message {
	public int what;
	public Object[] objs;
	
	public Message(int what) {
		this.what = what;
		this.objs = null;
	}
	
	public Message(int what, Object[] objs) {
		this.what = what;
		this.objs = objs;
	}
}
