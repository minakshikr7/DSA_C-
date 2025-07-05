// 1.Search element in an array 
// 2.Reverse an array 
// 3.Second highest in array 
// 4.Missing number

// Search element in an array
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int k; 
//     cout<<"Enter the element to be searched : ";
//     cin>>k;
//     int index = 0;
//     for(int i=0;i<n;i++) {
//         if(arr[i] == k) {
//             index = i;
//         }
//     }
//     cout<<"The element is found at index : "<<index;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int k; 
//     cout<<"Enter the element to be searched : ";
//     cin>>k;
//     int index = -1;
//     for(int i=0;i<n;i++) {
//         if(arr[i] == k) {
//             index = i;
//             cout<<"The element is found at index : "<<index;
//         }
//     }
    
//     return index;
// }



//2. Reverse an array 
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n/2;i++) {
//         swap(arr[i],arr[n-i-1]);
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }


// Solve using while loop 
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[5] = {2,9,12,13,6};
//     int start = 0;
//     int end = 4;
//     while(start<end) {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0;i<5;i++) {
//         cout<<arr[i]<<" ";
//     }
// }


// Second highest in an array 
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main () {
//     int n ;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements in the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int max = INT_MIN;
//     for(int i=0;i<n;i++) {
//         if(arr[i]>max) {
//             max = arr[i];
//         }
//     }
//     int second_max = INT_MIN;
//     for(int i=0;i<n;i++) {
//         if(arr[i]>second_max && arr[i] != max) {
//             second_max = arr[i];
//         }
//     }
//     cout<<"The second largest element is : "<<second_max;
//     return 0;
// }

// Missing number 
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of array : ";
//     for(int i=1;i<=n;i++) {
//         cin>>arr[i];
//     }
//     int ans = -1;
//     for(int i=1;i<n;i++) {
//         if(arr[i] != i) {
//             ans = i;
//             break;
//         }
//     }
//     cout<<"The missing value is  :"<<ans;
// }


//Fibonacci series 
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the number till which the fibonacci series will be printed : ";
//     cin>>n;
//     int first = 0;
//     int second = 1;
//     int next;
//     for(int i=0;i<n;i++) {
//         cout<<first<<endl;
//         next = first + second;
//         first = second;
//         second = next;
//     }
// }


// Through function 
// #include<iostream>
// using  namespace std;
// void fibonacci(int n) {
//     int a =0, b=1;
//     cout<<"The fibonacci series is "<<a<<" "<<b<<" ";
//     for(int i=2;i<n;i++) {
//     int c = a+b;
//     cout<<c<<" ";
//     a = b;
//     b = c;
//     }
// }
// int main () {
//     int n;
//     cout<<"Enter the no of terms till which you want to print : ";
//     cin>>n;
//     fibonacci(n);
//     return 0;
// }



//Rotate the array by 1 position 
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the size of the array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int temp = arr[n-1];
//     for(int i=n-2;i>=0;i--) {
//         arr[i+1] = arr[i];
//     }
//     arr[0] = temp;
//     cout<<"The array after rotation by 1 : ";
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }



// Rotate the array by 2 position 
