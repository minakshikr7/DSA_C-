
// Q1 : Write a program to find the product of two numbers using pointers.
// #include<iostream>
// using namespace std;
// int main () {
//     int x = 5;
//     int y = 6;
//     int *ptr1 = &x;
//     int *ptr2 = &y;
//     int z = (*ptr1) * (*ptr2);
//     cout << "Product : "<<z;
//  }


// Q2 : int *p, q;
// 1. p is a pointer and q is an integer.
// 2. p and q both are pointers.
// 3. P and q both are integers.
// 4. Syntax is incorrect.
// Ans : 1. p is a pointer and q is an integer.



// Q3: Find the output of the following code snippet.
// int a = 10, b = 20;
// int *ptr = &a;
// b = *ptr + 1;
// ptr = &b;
// cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;
// 11 11 10
// 10 10 10
// 11 10 11
// 10 11 10
// Ans : 11 10 11



// Q4: Find the output of the following code snippet.
// int a = 15, b = 20;
// int *ptr = &a;
// int *ptr2 = &b;
// *ptr = *ptr2;
// ptr now points to b
// ptr2 now points to a
// a gets value of b
// b gets value of a
// Ans : a gets value of b




// Q5: Is the following program snippet correct?
// int a = 10, b = 20;
// int *ptr;
// *ptr = 5;
// Ans : yes 