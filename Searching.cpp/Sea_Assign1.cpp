//1. Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
// does not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6
// #include<iostream>
// using namespace std;
// int main() {
//     int n ;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"Enter the no for which the last occurence need to be searched : ";
//     cin>>x;
//     int lo = 0;
//     int hi = n-1;
//     bool flag = false;
//     while(lo<=hi) {
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid] == x) {
//             if(arr[mid + 1] != x) {
//                 flag = true;
//                 cout<<mid;
//                 break;
//             }
//             else {
//                 lo = mid + 1 ;
//             }
//         }
//         else if (arr[mid] < x) {
//             lo = mid + 1;
//         }
//         else {
//             hi = mid - 1;
//         }
//      }
//      if(flag == false) {
//         cout<<-1;
//      }
// }




// 2. Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2
// #include<iostream>
// using namespace std;
// int main() {
//     int n ;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int first_index = -1;
//     int lo = 0;
//     int hi = n-1;
//     // bool flag = false;
//     while(lo<=hi) {
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid] == 1) {
//             first_index = mid;
//             hi = mid - 1;
//         }
//         else if (arr[mid] < 1) {
//             lo = mid + 1;
//         }
//         else {
//             hi = mid - 1;
//         }
//      }
// //      if(flag == false) {
// //         cout<<-1;
// //      }
// cout<<"count is : "<<n - first_index;
// }






// 3. Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
// maximum number of 1’s.
// Input matrix : 0 1 1 1
// 0 0 1 1
// 1 1 1 1 // this row has maximum 1s
// 0 0 0 0
// Output: 2
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the no of rows : ";
//     cin>>n;
//     int m;
//     cout<<"Enter the no of columns : ";
//     cin>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<m;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<m;j++) {
//             int lo = 0;
//             int hi = n-1;
//             int max_row = -1;
//             int count = 0;
//             while(lo<=hi) {
//                 mid = lo + (hi -lo)/2;
//                 if(arr[mid] == 1)
//                 count ++;
                
//             }
//         }
//     }
// }






// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2: 2








// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// Input 2: n = 45
// Output 2: no

#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    bool flag = false;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi) {
        if(arr[i]*arr)
    }
}
