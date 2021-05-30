import java.util.Scanner;

 

class Invoice
{
	String partnumber;
	String partdescription;
	int quantity;
	double priceperitem;
	
	Invoice() {
		partnumber="Null";
		partdescription="Null";
		quantity=0;
		priceperitem=0.0;
	}
	
	void setPartNumber(String partnumber)
	{
		this.partnumber=partnumber;
	}
	String getPartNumberString()
	{
		return partnumber;
	}
	
	void setPartDescriprtion(String partdescription)
	{
		this.partdescription=partdescription;
	}
	String getPartDescriprtion()
	{
		return partdescription;
	}
	
	void setQuantity(int quantity)
	{
		this.quantity=quantity;
	}
	int  getQuantity()
	{
		if(quantity>0)
			return quantity;
		else {
			quantity=0;
			return quantity;
		}
	}
	
	void setPricePerItem(double priceperitem)
	{
		this.priceperitem=priceperitem;
	}
	double getPricePerItem()
	{
		if(priceperitem>0)
			return priceperitem;
		else {
			 priceperitem=0.0;
			 return priceperitem;
		}
	}
	
	double getInvoiceAmount()
	{
		return quantity*priceperitem;
	}
}


public class InvoiceTest {
	static Scanner in=new Scanner(System.in);
	public static void main(String[] args) {
		Invoice n=new Invoice();
		System.out.print("Enter part number: ");
		String P=in.nextLine();
		n.setPartNumber(P);
		System.out.print("Enter parts description: ");
		String D=in.nextLine();
		n.setPartDescriprtion(D);
		System.out.print("Enter parts quantity: ");
		int Q=in.nextInt();
		n.setQuantity(Q);
		System.out.print("Enter price of per Item: ");
		double I=in.nextDouble();
		n.setPricePerItem(I);
		System.out.println("Part number: "+n.getPartNumberString());
		System.out.println("Part description: "+n.getPartDescriprtion());
		System.out.println("Part Quantity: "+n.getQuantity());
		System.out.println("Part price per item: "+n.getPricePerItem());
		System.out.println("Get Invoice Ammount: "+n.getInvoiceAmount());

	}

}
