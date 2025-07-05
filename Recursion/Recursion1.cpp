// Function call 
// #include<iostream>
// using namespace std;
// int product (int a, int b) {
//     return a*b;
// }
// int main () {
//     cout<<product(2,3);
// }




// Example of function 
// #include<iostream>
// using namespace std;
// void greet() {
//     cout<<"Good Morning";
// }
// int product (int a, int b){
//     return a*b;
// }
// int main () {
//     cout<<product(2,4)<<endl;
//     greet();
// }


// Inbuild functions in c++
// #include<iostream>
// using namespace std;
// int main () {
//     int a = 6;
//     int b = 8;
//     cout<<a<<" "<<b<<endl;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
//     int m = min(a,b);
//     cout<<m;
// }



// Calling one function in another function 
// #include<iostream>
// using namespace std;
// void gun() {
//     cout<<"Hello Dica";
//     return;
// }
// void fun() {
//     cout<<"Hello Mina"<<endl;
//     gun();
//     return;
// }
// int main() {
//     fun();
// }


// what happen when return is executed before the code 
// #include<iostream>
// using namespace std;
// void gun() {
//     return; // khatam
//     cout<<"Hello Dica";
    
// }
// void fun() {
//     cout<<"Hello Mina"<<endl;
//     gun();
//     return;
// }
// int main() {
//     fun();
// }



// Function calling itself 
// when code is stuck under infinite loop or we can say segmentation fault 
// #include<iostream>
// using namespace std;
// void fun() {
//     cout<<"Hello Mina"<<endl;
//     fun();
// }
// int main() {
//     fun();
// }


// Overcoming this problem by applying base case
// #include<iostream>
// using namespace std;
// void fun(int n) {
//     if (n==0) return;
//     cout<<"Hello Mina"<<endl;
//     fun(n-1);
// }
// int main() {
//     fun(3);
// }



// Print good morning 'n' no of times, where 'n' is user input.
// #include<iostream>
// using namespace std;
// void fun(int n) {
//     if (n==0) return;
//     cout<<"Good morning"<<endl;
//     fun(n-1);
// }
// int main() {
//     int n;
//     cin>>n;
//     fun(n);
// } 




// Factorial 
// #include<iostream>
// using namespace std;
// int fact (int n) {
//     int f = 1;
//     for(int i=2;i<=n;i++) {
//         f *= i;
//     }
//     return f;
// }
// int main() {
//     cout<<fact(0);
// }


// // Another method to find factorial 
// // T.C = O(n^2)
// #include<iostream>
// using namespace std;
// int fact (int n) {
//     for(int j=1;j<=n;j++) {
//     int f = 1;
//     for(int i=2;i<=j;i++) {
//         f *= i;
//     }
//     cout<<f<<endl;
// }
// }
// int main() {
//     fact(5);
// }
 


// Another method to find factorial 
// T.C = O(n)
// #include<iostream>
// using namespace std;
// int fact (int n) {
//     int f = 1;
//     for(int i=1;i<=n;i++) {
//         f *= i;
//         cout<<f<<endl;
//     }
// }
// int main() {
//     fact(5);
// }



// Recursively calculating factorial 
// #include<iostream>
// using namespace std;
// int fact (int n) {
//     // base case
//     if(n==1 || n==0) return 1;
//     // recursive call
//     return n*fact(n-1);
// }
// int main() {
//     cout<<fact(5);
// }




// Print n to 1.
// solving through while loop 
// #include<iostream>
// using namespace std;
// void print(int n) {
//     while(n>0) {
//         cout<<n<<endl;
//         n--;
//     }
// }
// int main () {
//     print (6);
// }
 

// Solving through recursion 
// #include<iostream>
// using namespace std;
// void print(int n) {
//     // base case 
//     if(n==0) return;
//     cout<<n<<endl;
//     print(n-1);
// }
// int main () {
//     print (6);
// }
 


// Print 1 to n (extra parameter)
// #include<iostream>
// using namespace std;
// void print(int i,int n) {
//     // base case 
//     if(i>n) return;
//     cout<<i<<endl;
//     print(i+1,n);
// }
// int main () {
//     int n ;
//     cin>>n;
//     cout<<endl;
//     print(1,n);
// }




// Recursion after call (after recursive call)
// print 1 to n
// #include<iostream>
// using namespace std;
// void print(int n) {
//     // base case 
//     if(n==0) return;
    
//     print(n-1);
//     cout<<n<<endl;
// }
// int main () {
//     print (6);
// }
 



// Print sum from 1 to n (Parametrised)
// #include<iostream>
// using namespace std;
// void sum1toN(int sum,int n) {
//     if(n==0) {
//         cout<<sum<<endl;
//         return;
//     }
//     sum1toN(sum + n, n - 1);
// }
// int main () {
//     sum1toN(0,4);
// }




//Print sum from 1 to n (return type)
// #include<iostream>
// using namespace std;
// int sum1toN(int n) {
//     if(n==0) return 0;
//     return n + sum1toN(n-1);
    
// }
// int main () {
//     cout<<sum1toN(20);
// }




// Make a function which calculates 'a' raised to the power 'b'
// using recursion.
// By using for loop 
// Iterative solution
// #include<iostream>
// using namespace std;
// int power(int a,int b) {
//     int  p = 1;
//     for(int i=1; i<=b; i++) {
//         p *= a;
//     }
//     return p;
// }
// int main () {
//     cout<<power(20,0);
// }


// Solving by recursion 
// Recursive solution 
// #include<iostream>
// using namespace std;
// int power(int a,int b) {
//     if(b==0) return 1;
//     return a *power(a,b-1);
// }
// int main () {
//     int a;
//     cout<<"Enter base : ";
//     cin>>a;
//     int b;
//     cout<<"Enter exponent : ";
//     cin>>b;
//     cout<<a<<" raised to the power "<<b<<" "<<"is "<<power(a,b);
// }