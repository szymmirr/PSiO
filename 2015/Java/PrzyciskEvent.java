package iwent;

import javax.swing.*;

import java.awt.Color;
import java.awt.event.*;
public class huehueivent implements ActionListener
{

	JFrame f;
	JPanel p;
	JButton b;
	huehueivent()
	{
		f = new JFrame();
		p = new JPanel();
		b = new JButton("HUEHUE");
		f.add(p);
		p.add(b);
		b.addActionListener(this);
		f.setSize(300, 300);
		f.setVisible(true);
	}
	public void actionPerformed(ActionEvent evt)
	{
		b.setBackground(Color.RED);
	}
	public static void main(String[] args) {
		
		huehueivent okieneczko = new huehueivent();
		
	}

}