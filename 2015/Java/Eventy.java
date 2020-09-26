package iwent;

import javax.swing.*;

import java.awt.Color;
import java.awt.event.*;
public class huehueivent implements ActionListener
{

	JFrame f;
	JPanel p;
	JButton b1;
	JButton b2;
	JLabel l1;
	JLabel l2;
	JTextField t;
	huehueivent()
	{
		f = new JFrame();
		p = new JPanel();
		b1 = new JButton("HUEHUE");
		//b2 = new JButton("BEKA");
		l1 = new JLabel("hue");
		//l2 = new JLabel("smiesznie");
		t= new JTextField(20);
		f.add(p);
		p.add(t);
		//t.setPreferredSize(null);

		p.add(b1);
		//p.add(b2);
		p.add(l1);
		//p.add(l2);
		
		b1.addActionListener(this);
		//b2.addActionListener(this);
		f.setSize(300, 300);
		f.setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		b1.setBackground(Color.YELLOW);
		b1.setText("OHHHHHHHHHHHHHHHHHHHHHH");
		if(e.getSource()==b1)
		{
			l1.setText(t.getText());
		}
		if(e.getSource()==b2)
		{
			//l2.setText("kliknieto button2");
		}
	}
	public static void main(String[] args) {
		
		huehueivent okieneczko = new huehueivent();
		
	}

}