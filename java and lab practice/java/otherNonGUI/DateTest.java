import java.util.Scanner;

class Date
{
	private int day;
	private int  month;
	private int year;
	
	public Date() {
		day=0;
		month=0;
		year=0;
	}
	
	void setDay(int day)
	{
		this.day=day;
	}
	
	int getDay()
	{
		return day;
	}
	
	void setMonth(int month)
	{
		this.month=month;
	}
	
	int getMonth()
	{
		return month;
	}

	void setYear(int year)
	{
		this.year=year;
	}
	
	int getYear()
	{
		return year;
	}
	public void displayDate(Date date) {
		System.out.println("date is: "+date.getDay()+"/"+date.getMonth()+"/"+date.getYear());
	}
	
	
}
public class DateTest {
	static Scanner mik = new Scanner(System.in);
	public static void main(String[] args) {
		Date n=new Date();
		System.out.print("Enter day: ");
		int d=mik.nextInt();
		n.setDay(d);
		System.out.print("Enter month: ");
		int m=mik.nextInt();
		n.setMonth(m);
		System.out.print("Enter year: ");
		int y=mik.nextInt();
		n.setYear(y);
		n.displayDate(n);
	}

}
