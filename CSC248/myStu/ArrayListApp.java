import javax.swing.JOptionPane;
import java.util.ArrayList;

public class ArrayListApp {
    public static void main(String[] args) {
        ArrayList<Object> theList = new ArrayList<>();
        // to input 5 students into the list
        for (int i = 0; i < 5; i++) {

            String sIdStd = JOptionPane.showInputDialog("Enter student id");
            String nameStd = JOptionPane.showInputDialog("Enter name");
            String sPart = JOptionPane.showInputDialog("Enter part");
            String sCgpa = JOptionPane.showInputDialog("Enter cgpa");
            int iIdStd = Integer.parseInt(sIdStd);
            int iPart = Integer.parseInt(sPart);
            double dCgpa = Double.parseDouble(sCgpa);
            Student stud = new Student(iIdStd, nameStd, iPart, dCgpa);
            theList.add(stud);
        }
        Student S = null;
        for (int i = 0; i < theList.size(); i++) {
            S = (Student) theList.get(i);
            System.out.println(S.toString());
        }

        int part4 = 0, scorer = 0, ind = 0;
        double cg = 0.0;
        for (int j = 0; j < theList.size(); j++) {
            S = (Student) theList.get(j);
            if (S.getCgpa() > cg) {
                cg = S.getCgpa();
                ind = j;
            }
            if (S.getPart() == 4)
                part4++;
            if (S.getCgpa() > 3.00)
                scorer++;
        }
        System.out.println("The best student is :");
        S = (Student) theList.get(ind);
        System.out.println(S.toString());
        System.out.println("There are " + part4 + " part 4 students");
        System.out.println("There are " + scorer + " students whose cgpa 3.0 and above");
    } // main
} // ArrayListApp
