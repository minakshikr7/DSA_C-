
// Printing array through for loop
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[7] = {1,5,9,4,6,3,0};
//     for (int i=0;i<=6;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// Given an array of marks of student , if the marks of any student
// is less than 35 print its roll number. [roll number here refers to the index of the array]
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[7] = {45, 34, 56, 60, 29, 10, 7};
//     for(int i=0;i<7;i++) {
//         if(arr[i] < 35) {
//             cout<<i<<" ";
//         }
//     }
// }



// Memory allocation in array 
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[5];
//     cout<<&arr[0]<<endl;
//     cout<<&arr[1]<<endl;
//     cout<<&arr[2]<<endl;
//     cout<<&arr[3]<<endl;
//     cout<<&arr[4]<<endl;
// }





// Calculate the sum of all the elements in the given array 
// #include<iostream>
// using namespace std;
// int main () {
//     int n ;
//     cout<<"Enter the size of the array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int sum = 0;
//     for(int i=0;i<n;i++) {
//         sum += arr[i];
//     }
//     cout<<"Sum is : "<<sum;
//     return 0;
// }




// Linear search 
// Find the element x in the array. Take array and x 
// as input. 
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of the array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"Enter the element to be searched : ";
//     cin>>x;
//     bool flag = false;
//     for(int i=0;i<n;i++) {
//         if(arr[i] == x) {
//         flag = true;
//     }
// }
//     if(flag == true) {
//         cout<<"Element found";
//     }
//     else {
//         cout<<"Element not found";
//     }

// }





// Find the maximum value out of all the elements in the array.
// #include<iostream>
// #include<climits>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i=0; i<n; i++) {
//         cin>>arr[i];
//     }
//     int max = INT_MIN;
//     for(int i=0; i<n; i++) {
//         if(arr[i] > max) {
//             max = arr[i];
//         }
//     } 
//     cout<<"The maximum element in the array is : "<<max;
//     return 0;
// }




// Find the second largest element in the given array.
#include<iostream>
#include<climits>
using namespace std;
int main () {
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int max = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    } 
    cout<<"The maximum element in the array is : "<<max<<endl;
    int second_max = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    } 
    cout<<"The second maximum element in the array is : "<<second_max;
    return 0;
}


// To find the number of elements 
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[6] = {1,2,3,4,5,6};
//     cout<<sizeof(arr)/sizeof(arr[0])<<" ";
//     return 0;
     
// }


// To check the size of datatype 
// #include<iostream>
// using namespace std;
// int main () 
// {
//     int a = 5;
//     cout<<sizeof(a)<<endl;
//     char b;
//     cout<<sizeof(b)<<endl;
//     char c;
//     cout<<sizeof(c)<<endl;
// }



// To check the size of array 
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[5] = {1,2,3,4,5};
//     cout<<sizeof(arr)<<endl;
//     return 0;
// }


// To calcualte number of elements  
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[5] = {1,2,3,4,5};
//     cout<<sizeof(arr)/sizeof(arr[0]);
//     return 0;

// }



// To calculate the minimum element in an array 
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main () {
//     int arr[5] = {2,3,1,7,8};
//     int ans = INT_MAX;
//     for(int i=0; i<5; i++) {
//         if(arr[i]<ans)
//         ans = arr[i];
//     }
//     cout<<ans;
//     return 0;

// }


// To calculate the maximum element 
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main () {
//     int arr[5] = {2,3,1,7,8};
//     int ans = INT_MIN;
//     for(int i=0; i<5; i++) {
//         if(arr[i]>ans)
//         ans = arr[i];
//     }
//     cout<<ans;
//     return 0;

// }


// Sum of n elements using user input 
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements in the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int sum = 0;
//     for(int i=0;i<n;i++) {vbh
//         sum += arr[i];
//     }
//     cout<<"The sum is : "<<sum;
//     return 0;

// }