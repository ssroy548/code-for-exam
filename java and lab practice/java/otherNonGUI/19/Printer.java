import java.awt.FlowLayout;
import java.awt.GridLayout;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JComboBox;
import java.awt.event.ItemListener;
import java.awt.event.ItemEvent;
import javax.swing.JCheckBox;
import javax.swing.JButton;
import javax.swing.JTextArea;
import javax.swing.JRadioButton;

public class Printer extends JFrame
{
	private JLabel label1;
	private JLabel label2;
	private JLabel label3;
	private JTextArea area1;
	private JTextArea area2;
	private JTextArea area3;
	private JCheckBox imageBox;
	private JCheckBox textBox;
	private JCheckBox codeBox;
	private JCheckBox printToFileBox;
	private JPanel panel1;
	private JPanel panel2;
	private JPanel panel3;
	private JPanel panel4;
	private JRadioButton selectionButton;
	private JRadioButton allButton;
	private JRadioButton appletButton;
	private JButton okButton;
	private JButton cancelButton;
	private JButton setupButton;
	private JButton helpButton;
	private JComboBox printBox;
	
	private static final String[] names = { "High", "Medium", "Low"};
	
	public Printer()
	{
		super( " Printer " );
	
		
		// build first label
		label1 = new JLabel( " Printer: My Printer ");
		setLayout( new FlowLayout() );
		
		
		// build first area
		area1 = new JTextArea(4, 4);
		setLayout( new FlowLayout() );
		
		add( area1 );
		
		// build Check Boxes
		imageBox = new JCheckBox( " Image " );
		textBox = new JCheckBox( " Text " );
		codeBox = new JCheckBox ( " Code" );
		panel1 = new JPanel();
		panel1.setLayout( new GridLayout ( 4, 1));
		panel1.add(label1);
		panel1.add(imageBox);
		panel1.add(textBox);
		panel1.add(codeBox);
		add(panel1);
		
		// build second area
		area2 = new JTextArea(4, 3);
		setLayout( new FlowLayout() );
		add( area2 );
		
		// build Radio Button
		selectionButton = new JRadioButton(" Selection ");
		allButton = new JRadioButton(" All ");
		appletButton = new JRadioButton(" Applet");
		panel2 = new JPanel();
		panel2.setLayout(new GridLayout (3, 1));
		panel2.add(selectionButton);
		panel2.add(allButton);
		panel2.add(appletButton);
		add(panel2);
		
		// build third area
		area3 = new JTextArea(4, 4);
		panel4 = new JPanel();
		panel4.setLayout( new GridLayout(1, 1, 10, 10) );
		panel4.add( area3 );
		add(panel4);
		
		// build JButton
		okButton = new JButton(" Ok ");
		cancelButton = new JButton( " Cancel ");
		setupButton = new JButton(" Setup...");
		helpButton = new JButton(" Help ");
		panel3 = new JPanel();
		panel3.setLayout(new GridLayout (4, 1, 10, 10));
		panel3.add(okButton);
		panel3.add(cancelButton);
		panel3.add(setupButton);
		panel3.add(helpButton);
		add(panel3);
		
		// build second label
		label2 = new JLabel(" Print Quality: ");
		setLayout( new FlowLayout() );
		add(label2);
		
		// build combo box
		printBox = new JComboBox( names);
		printBox.setMaximumRowCount(3);
		printBox.addItemListener(
				new ItemListener()
				{
					public void itemStateChanged( ItemEvent event )
					{
						// determine whether item is selected
						if( event.getStateChange() == ItemEvent.SELECTED );
					}
				}
			);
		add( printBox ); // add combobox to JFrame
		label3 = new JLabel();
		add( label3 );
		
		// build 4th check box
		printToFileBox = new JCheckBox("Print to File");
		setLayout(new FlowLayout() );
		add(printToFileBox);
	}
}
