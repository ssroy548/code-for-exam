import java.awt.FlowLayout;

public class AlignTest 
{
	// execute application
	public static void main(String[] args) {
		Align application = new Align();
		application.setDefaultCloseOperation(javax.swing.JFrame.EXIT_ON_CLOSE);
		application.setSize(275, 150);
		application.setLayout( new FlowLayout( FlowLayout.LEFT, 10, 5 ) );
		application.setVisible(true);
	} // end main
} // end class ProgrammingOutputTest
