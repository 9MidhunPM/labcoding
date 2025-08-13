public class Main{
    static String isEvenOdd(int n){
        if (n % 2 == 0)
            return "Even";
        else
            return "Odd";
    }
    
	public static void main(String[] args) {
		int n =27;
		
        System.out.println("The Number is " + isEvenOdd(n));
	}
}