// 1. Which of the following(s) is/are true about bubble sort:
// (i) It is stable sort
// (ii) It has a worst case space complexity of O(n)
// (iii) It involves swapping of adjacent elements
// (iv) After each iteration, the greatest element is placed at the end of the array.

// Ans = (i),(ii),(iv)


// 2.What will the following array look like after one iteration of bubble sort [1,6,2,5,4,3].
// [1,3,2,4,5,6]
// [1,2,3,4,5,6]
// [1,2,5,4,3,6]
// [1,2,4,5,3,6]

// Ans = (iii)




// 3.In which case does bubble sort works in the most efficient way:
// When the array is sorted in increasing order
// When the array is sorted partially
// When the array is sorted in decreasing order.
// When the array is nearly sorted.

// Ans = (i),(iv)




//4.Sort the array in descending order using Bubble Sort.
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
//     // Bubble sort optimised
//     for(int i=0;i<n-1;i++){ // n-1 passes
//         // traverse
//         bool flag = true;
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]<arr[j+1]){ //swap
//                 swap(arr[j],arr[j+1]);
//                 flag = false;
//             }
//         }
//         if(flag == true) { //swap didn't happen
//             break;
//         }
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }




//5.Check if the given array is almost sorted. (elements are at-most one position away)
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++) {
        if(arr[i] == i+1 ||arr[i] == i || arr[i] == i-1){
            cout<<"The array is nearly sorted";
            break;
        } 
        else {
            cout<<"The array is not nearly sorted";
        }
    }
    return 0;
}
