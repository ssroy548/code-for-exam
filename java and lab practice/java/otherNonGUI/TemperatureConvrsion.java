import javax.swing.JOptionPane;

public class TemperatureConvrsion {
	public static void main(String[] args) {
		
		String fer = JOptionPane.showInputDialog("Enter Fahrenheit Temperature:");
		//int far=Integer.parseInt(fer);
		double far= Double.parseDouble(fer);
	
		
		double cells= (5*(far-32))/9;
		JOptionPane.showMessageDialog(null,"The Celsius Temperature is: "+cells,
				"MIK",JOptionPane.PLAIN_MESSAGE );	
		
	}
}
