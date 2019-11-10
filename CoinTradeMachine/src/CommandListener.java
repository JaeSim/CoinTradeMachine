import java.util.LinkedList;
import java.util.Queue;

public class CommandListener {
	private Queue<String> queue = new LinkedList<String>(); 
	public void push(String []cmds) {
		if (cmds != null) {
			for (int i = 0; i < cmds.length; i++)
				queue.add(cmds[i]);
		}
	}
}
