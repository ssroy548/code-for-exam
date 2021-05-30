import java.util.Scanner;


public class CompareString {
	static Scanner mik = new Scanner(System.in);

	public static void main(String[] args) {
		String s1=new String();
		String s2=new String();
		System.out.println("Enter first string: ");
		s1=mik.nextLine();
		System.out.println("Enter second string: ");
		s2=mik.nextLine();
		
		int i=s1.compareTo(s2);
		
		if(i==0)
		{
			System.out.println("The strings are same");
		}
		else if(i<0){
			System.out.println("first string is less than second");
		}
		else {
			System.out.println("first string is greater than second");
		}
		

	}

}
