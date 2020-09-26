package oboze;

import java.awt.Color;

import javax.swing.*;

public class heheklasa2 {

	public static void main(String[] args) 
	{
		JFrame f=new JFrame();
		JPanel p=new JPanel();
		JButton b=new JButton("OK");
		JLabel l=new JLabel();
		p.setBackground(Color.RED);
		f.add(p);
		p.add(b);
		f.setSize(300, 300);
		f.setVisible(true);
		
	}

}