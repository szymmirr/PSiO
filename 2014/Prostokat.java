package prostokat;

public class Prostokat {
	
	public static int a,b,obwod,pole;
	
	Prostokat (int a, int b)
	{
		this.a=a;
		this.b=b;
	}
	
	public static int liczObwod(int a,int b)
	{
		return 2*a+2*b;
	}
	
	public static int liczPole(int a,int b)
	{
		return a*b;
	}
	
	public static void main (String[] args)
	{
		Prostokat prost1= new Prostokat(5,6);
		obwod=liczObwod(prost1.a,prost1.b);
		pole=liczPole(prost1.a,prost1.b);
		System.out.println(obwod+" "+pole);
	}
}
