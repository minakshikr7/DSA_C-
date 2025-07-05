// Print an increasing-decreasing sequence using recursion
// Example:
// If n = 5, the output should be:
// 1 2 3 4 5 4 3 2 1
// #include<iostream>
// using namespace std;
// void sequence (int i,int n){
//     if(i>n) return;
//     cout<<i<<" ";
//     sequence(i+1,n);
//     if(i<n) 
//     cout<<i<<" ";
// }
// int main () {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     sequence(1,n);
    
// }




// Write a program to print the sum of all odd numbers from a to b (inclusive) using
// recursion.
// iterative approach 
// #include<iostream>
// using namespace std;
// int sum(int a, int b) {
//     int total = 0;
//     for(int i =a;i<=b;i++) {
//         if(i%2==1) {
//             total = total+ i;
//         }
//     }
//     cout<<"The sum is : "<<total;
// }
// int main () {
//     int a, b;
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;
//     sum (a,b);
// }



// Recursive approach 
// #include<iostream>
// using namespace std;
// int sumOdd (int a,int b) {
//     if(a>b) return 0;
//     if(a % 2 == 1) 
//     return a + sumOdd(a+1,b);
//     else 
//     return 
//     sumOdd(a+1,b);
// }   
// int main () {
//     int a,b;
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;
//     cout<<"The sum is : "<< sumOdd(a,b);
// }




// 3. Given a positive integer, return true if it is a power of 2 using recursion

