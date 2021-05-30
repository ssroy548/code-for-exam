import java.awt.FlowLayout;

public class CalculatorTest 
{
	// execute application
	public static void main(String[] args) {
		Calculator application = new Calculator();
		application.setDefaultCloseOperation(javax.swing.JFrame.EXIT_ON_CLOSE);
		application.setSize(240, 200);
		application.setLayout( new FlowLayout( FlowLayout.LEFT, 10, 5 ) );
		application.setVisible(true);
	} // end main
} // end class ProgrammingOutputTest
