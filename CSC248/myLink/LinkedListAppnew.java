package myLink;

import javax.swing.JOptionPane;

public class LinkedListAppnew {

   public static void main(String[] args) {

      LinkedList list = new LinkedList();
      Student NewStudent = new Student();

      // to input 5 students into the list

      for (int i = 0; i < 2; i++) {
         String sIdStd = JOptionPane.showInputDialog("Enter student id");
         String nameStd = JOptionPane.showInputDialog("Enter name");
         String sPart = JOptionPane.showInputDialog("Enter part");
         String sCgpa = JOptionPane.showInputDialog("Enter cgpa");
         int iIdStd = Integer.parseInt(sIdStd);
         int iPart = Integer.parseInt(sPart);
         double dCgpa = Double.parseDouble(sCgpa);
         Student stud = new Student(iIdStd, nameStd, iPart, dCgpa);
         list.insertAtFront(stud);
      }
      // to display all students in the linked list
      System.out.println("LIST OF STUDENTS:");
      Student S = null;
      Object data = list.getFirst();

      while (data != null) {
         S = (Student) data;
         System.out.println(S.toString());
         data = list.getNext();
      } // while

      // to find the best student
      // to count the number of students in part 4
      // to count the number of students who reach cgpa 3.0

      data = list.getFirst();

      double cg = 0.0;
      int part4 = 0;

      while (data != null) {
         S = (Student) data;
         if (S.getCgpa() > cg) {
            cg = S.getCgpa();
            NewStudent = S;
         }
         if (S.getPart() == 4)
            part4++;
         data = list.getNext();
      }
      System.out.println();
      System.out.println("The best student is :");
      System.out.println(NewStudent.toString());
      System.out.println();
      System.out.println("There are " + part4 + " part 4 students");

   }
}
