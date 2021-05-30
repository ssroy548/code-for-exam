import java.util.Scanner;


public class firslLabtest {
		static Scanner mik = new Scanner(System.in);
	public static void main(String[] args) {
		int k,i=0;
		int[] a = new int[5];
		
		System.out.println("Enter a five digit number");
		int number = mik.nextInt();
		try {
			while(number!=0){
				k=number%10;
				number=number/10;
				a[i]=k;
				i++;
			}
			
			for (int j = i-1; j>=0; j--) {
				System.out.print(a[j]+"   ");
			}
		} 
		catch (ArrayIndexOutOfBoundsException e) {
			System.out.println("your number exceeds five digit");
		}
		
	}

}
