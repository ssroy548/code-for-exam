import java.awt.FlowLayout;

import javax.swing.JFrame;

public class ColorSelectTest 
{
	public static void main(String[] args) 
	{
		ColorSelect colorSelect = new ColorSelect();
		colorSelect.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
		colorSelect.setSize( 250, 150);
		colorSelect.setVisible( true );
	}

}
