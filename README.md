Aim: To study and implement calling functions in C++

#Program a: This C++ program attempts to swap the values of two integer variables a and b using a function named swap. The function takes two integer arguments x and y, swaps their values locally within the function, and prints the swapped values of x and y. However, the original variables a and b in main() remain unchanged because the swap function works with copies of the arguments (call by value). After the function call, the program prints the values of a and b in main() which remain the same as before.  So, the program illustrates the concept of pass-by-value in C++, where changes made to parameters inside a function do not affect the original arguments.


Algorithm:

Step-1: Start

Step-2: Declare and initialize two integers a = 5 and b = 2 in the main() function.

Step-3: Call the function swap(a, b):

Step-4: Inside the swap function:

Step-5: Receive two parameters x and y (copies of a and b).

Step-6: Create a temporary variable swap to hold the value of x.

Step-7: Assign the value of y to x.

Step-8: Assign the value of swap (original x) to y.

Step-9: Print the swapped values of x and y.

Step-10: End the function.

Step-11: Back in main(), print the values of a and b.

Step-12: End.

#Program b: In this C++ program, the swap function uses pointers to swap the values of two integers. Instead of passing values directly, it receives the memory addresses of the variables (int *x, int *y). Inside the function, it dereferences these pointers (*x and *y) to access and modify the original variables' values. Because the actual memory locations of the variables are passed, the swap changes the original variables in the main() function. After the swap, the program prints the swapped values of x and y.

Algorithm:

Step-1: Start

Step-2: Declare and initialize two integers x = 500 and y = 100 in main().

Step-3: Call the function swap(&x, &y):

Step-4: Pass the addresses of x and y to the function.

Step-5: Inside the swap function:

Step-6: Create a temporary variable swap.

Step-7: Assign the value at address x (*x) to swap.

Step-8: Assign the value at address y (*y) to the location pointed by x (*x).

Step-9: Assign the value in swap to the location pointed by y (*y).

Step-10: This effectively swaps the values stored at the two memory addresses.

Step-11: Return to the main() function.

Step-12: Print the swapped values of x and y.

Step-13: End.

#Program c: This program demonstrates the concept of passing arguments by reference in C++. The function increment takes an integer reference parameter, meaning it operates directly on the original variable rather than a copy. Inside the function, the value of the passed variable is increased by 5000, and a message indicating the salary increment is printed. In the main function, an integer variable sal is initialized with the value 27000. When increment(sal) is called, the function modifies the actual sal variable because it was passed by reference. As a result, the updated salary value, 32000, is printed in the main function, demonstrating how changes made within the function affect the original variable outside of it.

Algorithm:

Step-1: Start

Step-2: Declare an integer variable sal and initialize it with 27000.

Step-3: Call the function increment(sal):

Step-4: Inside increment:

Step-5: Increase the value of S (which references sal) by 5000.

Step-6: Print "Salary incremented".

Step-7: End increment.

Step-8: Back in main(), print the updated value of sal.

Step-9: End.

