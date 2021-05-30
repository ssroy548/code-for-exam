import java.awt.GridLayout;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class Calculator extends JFrame
{
	private JButton oneJButton;
	private JButton twoJButton;
	private JButton threeJButton;
	private JButton fourJButton;
	private JButton fiveJButton;
	private JButton sixJButton;
	private JButton sevenJButton;
	private JButton eightJButton;
	private JButton nineJButton;
	private JButton zeroJButton;
	private JButton addJButton;
	private JButton subJButton;
	private JButton mulJButton;
	private JButton divJButton;
	private JButton pointJButton;
	private JButton equalsJButton;
	private JTextField inputJTextField;
	
	private JPanel checkJPanel;
	private JPanel buttonJPanel;
	private JPanel nameJPanel;
	
	// constructor sets up GUI
	public Calculator()
	{
		super("Calculator" );
		
		
		
		// build nameJPanel
		inputJTextField = new JTextField ( 18 );
		
		nameJPanel = new JPanel();
		nameJPanel.setLayout ( new GridLayout( 1, 1, 0, 20) );
		nameJPanel.add( inputJTextField );	
		add( nameJPanel );
		
		// build buttonJPanel
		
		sevenJButton = new JButton( " 7 " );
		eightJButton = new JButton( " 8 " );
		nineJButton = new JButton( " 9 " );
		divJButton = new JButton( " / ");
		fourJButton = new JButton( " 4 " );
		fiveJButton = new JButton( " 5 " );
		sixJButton = new JButton( " 6 " );
		mulJButton = new JButton( " * " );
		oneJButton = new JButton( " 1 " );
		twoJButton = new JButton( " 2 " );
		threeJButton = new JButton( " 3 " );
		subJButton = new JButton( " - " );
		zeroJButton = new JButton( " 0 " );
		pointJButton = new JButton( " . " );
		equalsJButton = new JButton( " = " );
		addJButton = new JButton( " + " );
		
		buttonJPanel = new JPanel();
		buttonJPanel.setLayout(new GridLayout( 4, 4, 5, 5 ) );
		buttonJPanel.add( sevenJButton );
		buttonJPanel.add( eightJButton );
		buttonJPanel.add( nineJButton );
		buttonJPanel.add( divJButton );
		buttonJPanel.add( fourJButton );
		buttonJPanel.add( fiveJButton );
		buttonJPanel.add( sixJButton );
		buttonJPanel.add( mulJButton );
		buttonJPanel.add( oneJButton );
		buttonJPanel.add( twoJButton );
		buttonJPanel.add( threeJButton );
		buttonJPanel.add( subJButton );
		buttonJPanel.add( zeroJButton );
		buttonJPanel.add( pointJButton );
		buttonJPanel.add( equalsJButton );
		buttonJPanel.add( addJButton );
		add( buttonJPanel );
	} // end programming output constructor
} // end class programming output
