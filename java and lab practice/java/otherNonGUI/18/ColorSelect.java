import java.awt.FlowLayout;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JComboBox;
import java.awt.event.ItemListener;
import java.awt.event.ItemEvent;
import javax.swing.JCheckBox;
import javax.swing.JButton;

public class ColorSelect extends JFrame
{
	private JComboBox colorsJComboBox; // holds the name of the colors
	private JLabel label;
	private JCheckBox backCheckBox;
	private JCheckBox foreCheckBox;
	private JButton okButton;
	private JButton cancelButton;
	private static final String[] names = { "RED", "GREEN", "PINK", "BLUE", "BLACK", "WHITE", "ORANGE", "GREENISH YELLOW"};
	
	
	public ColorSelect()
	{
		super( "Color Select" );
		setLayout( new FlowLayout() );
		
		// build combo box
		colorsJComboBox = new JComboBox( names );
		colorsJComboBox.setMaximumRowCount(7);
		
		colorsJComboBox.addItemListener(
				new ItemListener()
				{
					public void itemStateChanged( ItemEvent event )
					{
						// determine whether item is selected
						if( event.getStateChange() == ItemEvent.SELECTED );
					}
				}
			);
		add( colorsJComboBox ); // add combobox to JFrame
		label = new JLabel();
		add( label );
		
		// build check box
		backCheckBox = new JCheckBox(" Background ");
		foreCheckBox = new JCheckBox(" Foreground ");
		setLayout( new FlowLayout() );
		add( backCheckBox );
		add( foreCheckBox );
		
		// build Buttons
		okButton = new JButton(" Ok ");
		cancelButton = new JButton(" Cancel ");
		setLayout( new FlowLayout() );
		add ( okButton );
		add ( cancelButton );
	}
}
