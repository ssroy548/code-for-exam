import java.awt.FlowLayout;

import javax.swing.JFrame;


public class PrinterTest {

	public static void main(String[] args) {
		Printer test = new Printer();
		test.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		test.setLayout(new FlowLayout( FlowLayout.LEFT, 5 , 5));
		test.setSize(500, 210);
		test.setVisible(true);
	}

}
