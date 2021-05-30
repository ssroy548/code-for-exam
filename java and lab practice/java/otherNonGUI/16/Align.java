import java.awt.GridLayout;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class Align extends JFrame
{
	private JButton cancelJButton;
	private JButton okJButton;
	private JButton helpJButton;
	private JTextField inputJTextField1;
	private JTextField inputJTextField2;
	private JLabel nameJLabel1;
	private JLabel nameJLabel2;
	private JCheckBox snapToGridJCheckBox;
	private JCheckBox showGridJCheckBox;
	private JPanel checkJPanel;
	private JPanel buttonJPanel;
	private JPanel nameJPanel;
	
	// constructor sets up GUI
	public Align()
	{
		super("Align" );
		
		// build checkJPanel
		snapToGridJCheckBox = new JCheckBox( "Snap to Grid" );
		showGridJCheckBox = new JCheckBox( "Show Grid" );
		checkJPanel = new JPanel();
		checkJPanel.setLayout( new GridLayout( 2, 2 ) );
		checkJPanel.add( snapToGridJCheckBox );
		checkJPanel.add( showGridJCheckBox );
		add( checkJPanel );
		
		// build nameJPanel
		nameJLabel1 = new JLabel( "X:" );
		nameJLabel2 = new JLabel( "Y:" );
		inputJTextField1 = new JTextField ( 3 );
		inputJTextField2 = new JTextField ( 3 );
		nameJPanel = new JPanel();
		nameJPanel.setLayout ( new GridLayout(2, 3, -20, 20 ) );
		nameJPanel.add( nameJLabel1);
		nameJPanel.add( inputJTextField1 );
		nameJPanel.add( nameJLabel2 );
		nameJPanel.add( inputJTextField2 );
		add( nameJPanel );
		
		// build buttonJPanel
		okJButton = new JButton( "Ok" );
		cancelJButton = new JButton( "Cancel" );
		helpJButton = new JButton( "Help" );
		buttonJPanel = new JPanel();
		buttonJPanel.setLayout(new GridLayout( 3, 1, 0, 10 ) );
		buttonJPanel.add( okJButton );
		buttonJPanel.add( cancelJButton);
		buttonJPanel.add( helpJButton );
		add( buttonJPanel );
	} // end programming output constructor
} // end class programming output
