package frejmsy;
import java.awt.FlowLayout;
import javax.swing.*;
public class klasa {
	public static void main(String[] args) {
		JFrame f = new JFrame();
		JButton b1=new JButton("OK");
		JButton b2=new JButton("Cancel");
		f.setSize(300,  300);
		f.setVisible(true);
		f.getContentPane().setLayout(new FlowLayout());
		f.add(b1);
		f.add(b2);
	}
}
