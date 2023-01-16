
/*
Matrix :    2020450636
Name :      MUHAMMAD HARITH IQBAL BIN MOHD HANIZUN
Group :     KCS1103D
Lecturer :  DR TANIZA BINTI TAJUDDIN
*/
import java.util.Scanner;

public class ProgramApp {
    public static void main(String[] args) {
        System.out.println("\tWelcome to Sorting and Searching Program \n");
        System.out.println("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n");

        Scanner sc = new Scanner(System.in);
        int[] arrNum = new int[10];
        int key = 0;
        System.out.println("Enter 10 integer numbers: ");
        for (int i = 0; i < 10; i++) {
            arrNum[i] = sc.nextInt();
        }

        System.out.println("Values before sorting : ");
        for (int i = 0; i < arrNum.length; i++) {
            System.out.print(arrNum[i] + " ");
        }

        bubbleSort(arrNum);

        System.out.println("\nValues after sorting : ");
        for (int i = 0; i < arrNum.length; i++) {
            System.out.print(arrNum[i] + " ");
        }

        System.out.println("\nEnter a value to search: ");
        key = sc.nextInt();

        int ind = binarySearch(arrNum, key);
        int find = findIndex(arrNum, key);
        if (ind != -1)
            System.out.println("The value " + key + " is found at index " + find);
        else
            System.out.println("The value " + key + " is not found!");

        System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        System.out.println("\tThank You and See You Again!");
        sc.close();
    }

    public static int binarySearch(int[] arrNum, int key) {
        int low = 0, high = arrNum.length - 1;
        while (high >= low) {
            int mid = (low + high) / 2;
            if (key < arrNum[mid])
                high = mid - 1;
            else if (key == arrNum[mid])
                return mid;
            else
                low = mid + 1;
        }
        return -1;
    }

    public static int findIndex(int[] array, int t) {
        if (array == null)
            return -1;

        int len = array.length;
        int i = 0;

        while (i < len) {
            if (array[i] == t)
                return i;
            else
                i = i + 1;
        }
        return -1;
    }

    public static void bubbleSort(int[] newArray) {
        int temp = 0;
        for (int i = 0; i < newArray.length; i++) {
            for (int j = 0; j < newArray.length - (i + 1); j++) {
                if (newArray[j] > newArray[j + 1]) {
                    temp = newArray[j];
                    newArray[j] = newArray[j + 1];
                    newArray[j + 1] = temp;
                }
            }
        }
    }
}