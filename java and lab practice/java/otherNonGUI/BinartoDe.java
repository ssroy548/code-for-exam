import java.util.Scanner;


public class BinartoDe {

	public static void main(String[] args) {
		Scanner m= new Scanner(System.in);
		int i,k=0,c=0;
		int n = m.nextInt();
		int value =n;
		while(n!=0)
		{
			i=n%10;
			n=n/10;
			c++;
			k=k*10+i;
		}
		if(value==k){
			System.out.println("palindrom");
			
		}
		else {
			System.out.println("not");
		}
		
		
		System.out.println("again bin");
		int p=0,s,a,j=0;
		a=m.nextInt();
		for(int f=0;f<5;f++)
		{
			s=a%10;
			a=a/10;
			s*=Math.pow(2,p);
			j+=s;
			p++;
		}	System.out.println(j);
		
	}

}
