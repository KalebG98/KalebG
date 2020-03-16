#include <iostream>
#include <vector>
import java.util.Vector;
import java.util.Scanner;

 class Inventory {
	public 
		void main(String[]args) {
		Vector<String> vct = new Vector<String>();
		int choice = 2, count = 0, i, rem;
		String inventory;
		Scanner sc = new Scanner(System.in);

		// only if choice is either 1/2/3
		while (choice == 1 || choice == 2 || choice == 3)
		{
			System.out.print("\nEnter\n1-See Inventory\n2-Add to inventory\n3-Remove from inventory\n");
			choice = sc.nextInt();

			// Show vector
			
			if (choice == 1)
			{
				for (i = 0; i<count; i++)
				{
					System.out.println(vct.elementAt(i));
				}
			}

			// Add to vector
			else if (choice == 2)
			{
				System.out.print("what will you want to add ");
				count++;
				inventory = sc.next();
				vct.add(inventory); // to add to vector
			}

			// remove from vector
			else if (choice == 3)
			{
				System.out.print("Which do you want to drop ");
				rem = sc.nextInt();
				vct.remove(rem - 1); 
				count--;
			}
		}
	}
}