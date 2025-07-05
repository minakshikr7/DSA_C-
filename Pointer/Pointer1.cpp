// Swap using function 
// #include<iostream>
// using namespace std;
// void swap (int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     return;
// }
// int main () {
//     int a,b;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b;
// }


// Finding the size of datatype
// #include<iostream>
// using namespace std;
// int main () {
//     cout<<sizeof(int)<<endl;
//     cout<<sizeof(long long);
// }


// Printing the address of variable 
// #include<iostream>
// using namespace std;
// int main () {
//     char x = 's';
//     cout<<&x;
// }



//Storing address in a pointer
// For integer  
// #include<iostream>
// using namespace std;
// int main () {
//     int x = 4;
//     int* p = &x;
//     cout<<&x<<endl;
//     cout<<p<<endl;
// }




// For float 
// #include<iostream>
// using namespace std;
// int main () {
//     float x = 4;
//     float *p = &x;
//     cout<<&x<<endl;
//     cout<<p<<endl;
// }



// For bool
// #include<iostream>
// using namespace std;
// int main () {
//     bool x = true;
//     bool *p = &x;
//     cout<<&x<<endl;
//     cout<<p<<endl;
// }



// Deference operator 
// #include<iostream>
// using namespace std;
// int main () {
//     int  x= 122;
//     int* p = &x;
//     cout<<*p;
// }

// Updating the value of x without using x (with using star operator)
// #include<iostream>
// using namespace std;
// int main () {
//     int x = 5;
//     int *p = &x;
//     cout<<x<<endl;
//     *p = 8;
//     cout<<x;
// }


// WAP to calculate sum of two numbers using pointer 
// #include<iostream>
// using namespace std;
// int main () {
//     int x = 5;
//     int* p1 = &x;
//     int y = 10;
//     int* p2 = &y;
//     int sum = *p1 + *p2;
//     cout<<"sum : "<<sum;
//     return 0;

// }

// Try the same code by taking input from the user 
// #include<iostream>
// using namespace std;
// int main () {
//     int x,y;
//     int* p1 = &x;
//     int* p2 = &y;
//     cout<<"Enter the first number : ";
//     cin>>*p1;
//     cout<<"Enter the second number : ";
//     cin>>*p2;
//     int sum = *p1 + *p2;
//     cout<<"Sum : "<<sum;
//     return 0;
// }




// Swapping by pass by value 
// #include<iostream>
// using namespace std;
// void swap (int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     return;

// }
// int main () {
//     int a,b;
//     cin>>a,b;
//     swap(a,b);
//     cout<<a<<" "<<b;
// } 



//Swapping by pass by reference 
// #include<iostream>
// using namespace std;
// void swap (int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     return;

// }
// int main () {
//     int a,b;
//     cin>>a>>b;
//     swap(&a,&b);
//     cout<<a<<" "<<b;
// } 


// #include<iostream>
// using namespace std;
// void swap (int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     return;

// }
// int main () {
//     int a = 8,b = 6;
//     int* x= &a;
//     int* y= &b;
//     swap(x,y);
//     cout<<a<<" "<<b;
// }



// Pass by reference (using alias) 
// alias names using & operator 
// #include<iostream>
// using namespace std;
// void swap (int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     return;

// }
// int main () {
//     int a,b;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b;
// }



// Arithmetic pointer 
// #include<iostream>
// using namespace std;
// int main () {
//     int x = 7;
//     int* ptr= &x;
//     cout<<&x<<endl;
//     cout<<ptr<<endl;//0x61ff08 
//     ptr = ptr + 1;
//     cout<<ptr;//0x61ff08
//     return 0;
// }




// Pointer arithmetic 
//correct approach of addition 
// #include<iostream>
// using namespace std;
// int main () {
//     int x = 4;
//     int *ptr = &x;
//     cout<<*ptr<<endl;
//     //*ptr = *ptr + 1;
//     (*ptr)++;
//     cout<<*ptr;
// }



// Write a function to find out the first and last digit of a number 
// without returning anything 
#include<iostream>
using namespace std;
void find (int n , int* ptr1, int* ptr2){
    *ptr2 = n%10; // last digit
    while(n>9) {
        n/=10;
    }
    *ptr1 = n;
    return;
}
int main () {
    int n;
    cin>>n;
    int firstDigit , lastDigit;
    int* ptr1 = &firstDigit;
    int* ptr2 = &lastDigit;
    find(n, ptr1, ptr2);
    cout<<firstDigit<<" "<<lastDigit;
}



// Null pointer
// #include<iostream>
// using namespace std;
// int main () {
//     int *ptr;
//     cout<<*ptr;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     // int *ptr = '\0';
//     char ch = '\0';
//     cout<<(int)ch;
//     cout<<endl;
//     int *ptr = NULL; // reserved address 
//     cout<<ptr;
// }



// #include<iostream>
// using namespace std;
// int main () {
//     int x = 5;
//     int* ptr = &x;
//     int** p = &ptr;
//     cout<<x<<endl;
//     cout<<ptr<<endl;
//     cout<<p;
// }



// #include<iostream>
// using namespace std;
// int main () {
//     int x = 5;
//     int* ptr = &x;
//     int** p = &ptr;
//     cout<<x<<endl;
//     cout<<*ptr<<endl;
//     cout<<**p;
// }



