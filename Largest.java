public class Main{
	public static void main(String[] args) {
		int a = 25, b = 30, c = 35;
		int largest= 0;
		
		if (a >= b && a >= c)
		    largest = a;
		else if (b >= a && b >= c)
		    largest = b;
		else if (c >= a && c >= b)
		    largest = c;
		    
		System.out.println("Largest Number is " + largest);
	}
}