import java.io.*;
public class lab23 {
public static void main(String arg[]) throws IOException{
	
	DataInputStream indata=new DataInputStream(System.in);
	String name=new String();
	System.out.println("Enter a String ");
	name=indata.readLine();
	System.out.println("Real Words is "+name);
	String name1,name2;
	name1=name.toUpperCase();
	System.out.println("Uppercase is "+ name1);
	name2=name.toLowerCase();
	System.out.println("Lowercase is "+name2);
	
	
	
	
	
}
}
