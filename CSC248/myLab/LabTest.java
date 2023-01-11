import java.util.ArrayList;
import java.util.Scanner;

public class LabTest {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Integer> numberArr = new ArrayList<Integer>(); // Using arraylist

        System.out.print("\n\tWelcome to Sorting and Searching Program\n");
        System.out.print("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

        // Insert 10 data into an array
        System.out.println("Enter 10 integer numbers:");
        for (int i = 0; i < 10; i++) {
            numberArr.add(input.nextInt());
        }

        // Display the array values before sorting
        System.out.print("Values before sorting: " + numberArr);

        // Call method bubble sort
        BubbleSort(numberArr);

        // Display the array value after sorting
        System.out.print("\nValues after sorting: " + numberArr);
        // Call method binary search
        int searchNum;
        System.out.print("\nEnter a value to search: ");
        searchNum = input.nextInt();

        int index = binarySearch(numberArr, searchNum);
        if (index != -1)
            System.out.println("The value " + searchNum + " is found at index " + index);
        else
            System.out.println("Not found!");

        // Ends

        System.out.print("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        System.out.print("\n\tThank you and see you again!\n");
        input.close(); // Close Scanner
    }

    // Functions
    // Bubble sort method to sort the array numbers
    public static void BubbleSort(ArrayList<Integer> list) {
        int temp;
        boolean sorted = false;

        while (!sorted) {
            sorted = true;
            for (int i = 0; i < list.size() - 1; i++) {
                if (list.get(i).compareTo(list.get(i + 1)) > 0) {
                    temp = list.get(i);
                    list.set(i, list.get(i + 1));
                    list.set(i + 1, temp);
                    sorted = false;
                }
            }
        }
    }

    // Binary search method to find specific number
    // Returns index of x if it is present in arr[], else return -1
    public static int binarySearch(ArrayList<Integer> array, int x) {
        int left = 0, right = array.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check if x is present at mid
            if (array.get(mid) == x)
                return mid; // Mid is index

            // If x greater, ignore left half
            if (array.get(mid) < x)
                left = mid + 1;

            // If x is smaller, ignore right half
            else
                right = mid - 1;
        }
        // Element was not present
        return -1;
    }
}
