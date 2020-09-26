package iwent;

import javax.swing.*;

import java.awt.Color;
import java.awt.event.*;
public class huehueivent implements ActionListener
{

JFrame f;
JPanel p;
JPanel p2;
JButton b1;
JButton b2;
JButton b3;
JButton b4;
JLabel l1;
JLabel l2;
JLabel l0;
JTextField t1;
JTextField t2;
huehueivent()
{
f = new JFrame();
p = new JPanel();
p2 = new JPanel();
b1 = new JButton("dodej");
b2 = new JButton("odejmij");
b3 = new JButton("pomnoz");
b4 = new JButton("podziel");
//b2 = new JButton("BEKA");
l1 = new JLabel("hue");
l0 = new JLabel("Armia Polcyn Casual Coding");
//l2 = new JLabel("smiesznie");
t1= new JTextField(20);
t2= new JTextField(20);
p.add(l0);
f.add(p);
p.add(t1);
p.add(t2);
//t.setPreferredSize(null);

p.add(b1);
p.add(b2);
p.add(b3);
p.add(b4);
//p.add(b2);
p.add(l1);
//p.add(l2);
b1.addActionListener(this);
b2.addActionListener(this);
b3.addActionListener(this);
b4.addActionListener(this);
//b2.addActionListener(this);
f.setSize(300, 300);
f.setVisible(true);
}
public void actionPerformed(ActionEvent e)
{
b1.setBackground(Color.YELLOW);
//b1.setText("OHHHHHHHHHHHHHHHHHHHHHH");
if(e.getSource()==b1)
{
//l1.setText(t1.getText());
double liczba1 = Double.parseDouble(t1.getText());
double liczba2 = Double.parseDouble(t2.getText());
l1.setText(Double.toString(liczba1+liczba2));
}
if(e.getSource()==b2)
{
//l1.setText(t1.getText());
double liczba1 = Double.parseDouble(t1.getText());
double liczba2 = Double.parseDouble(t2.getText());
l1.setText(Double.toString(liczba1-liczba2));
}
if(e.getSource()==b3)
{
//l1.setText(t1.getText());
double liczba1 = Double.parseDouble(t1.getText());
double liczba2 = Double.parseDouble(t2.getText());
l1.setText(Double.toString(liczba1*liczba2));
}
if(e.getSource()==b4)
{
//l1.setText(t1.getText());
double liczba1 = Double.parseDouble(t1.getText());
double liczba2 = Double.parseDouble(t2.getText());
if(liczba2!=0)
{
	l1.setText(Double.toString(liczba1/liczba2));
}
else
{
	l1.setText("No szanujmy siê");
}
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