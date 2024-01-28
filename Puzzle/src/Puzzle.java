import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;
import java.util.Collections;

public class Puzzle extends JFrame implements ActionListener {
    private ArrayList<Icon> puzzlePicture = new ArrayList<>();
    private ArrayList<JButton> puzzleButton = new ArrayList<>();
    private boolean firstClick = false;

    private JPanel panel;
    private JButton first;
    private JButton second;

    public Puzzle() {
        setTitle("MindScape Puzzles");
        loadPuzzle();
        setBounds(400, 60, 399, 600);

        panel = new JPanel();
        panel.setLayout(new GridLayout(4, 3));
        getContentPane().add(panel, BorderLayout.CENTER);
        createButtons();

        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
    }

    public void loadPuzzle() {
        for (int i = 1; i <= 12; i++) {
            Icon icon = new ImageIcon("Easy/"+ "2/" + i + ".jpg");
            System.out.println("loded");
            puzzlePicture.add(icon);
        }
    }

    public void createButtons() {
        for (int i = 0; i < 12; i++) {
            JButton button = new JButton(puzzlePicture.get(i));
            ImageIcon icon = (ImageIcon) button.getIcon();
            icon.setDescription(String.valueOf(i));

            button.setPreferredSize(new Dimension(100, 100));
            button.addActionListener(this);

            puzzleButton.add(button);
            System.out.println("created");
            panel.add(button);
        }
        Collections.shuffle(puzzleButton);
        for (int j = 0; j < 12; j++) {
            panel.add(puzzleButton.get(j));
            System.out.println("shuffled");
        }
    }
    
    
    @Override
    public void actionPerformed(ActionEvent e) {
        if (!firstClick) {
            firstClick = true;
            first = (JButton) e.getSource();
        } else {
            firstClick = false;
            second = (JButton) e.getSource();

            if (second != first) {
                swap();
            }

          
            boolean result = checkWin();
           
            if (result) {
                JOptionPane.showMessageDialog(panel, "Congratulations! You Win.");
                puzzleButton.clear();
                getContentPane().removeAll();
                new Puzzle();
            }
        }
    }

    public void swap() {
        Icon ic = first.getIcon();
        Icon ic2 = second.getIcon();

        first.setIcon(ic2);
        second.setIcon(ic);
    }

    public boolean checkWin() {
        
        for (int i = 0; i < 12; i++) {
            JButton currentButton = puzzleButton.get(i);
            ImageIcon currentIcon = (ImageIcon) currentButton.getIcon();
            String currentDescription = currentIcon.getDescription();

            if (!currentDescription.equals(String.valueOf(i))) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        new Puzzle();
    }

 
}