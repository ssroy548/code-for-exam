import java.util.Scanner;


public class RegionMatchs {
	static Scanner mik = new Scanner(System.in);
	public static void main(String[] args) {
		String s1=new String();
		String s2=new String();
		System.out.println("Enter first string: ");
		s1=mik.nextLine();
		System.out.println("Enter second string: ");
		s2=mik.nextLine();
		System.out.println("Enter first string index: ");
		int a=mik.nextInt();
		System.out.println("Enter second string index: ");
		int b=mik.nextInt();
		
		System.out.println("Enter the number of word");
		int c=mik.nextInt();
		
		boolean f= s1.regionMatches(true,a,s2,b,c);
		System.out.println(""+f);

	}

}
