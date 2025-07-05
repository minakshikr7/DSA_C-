// 1. Calculate the product of all the elements in the given array.
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of arrray : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int product = 1;
//     for(int i=0;i<n;i++) {
//         product *= arr[i];
//     }
//     cout<<"Product is : "<<product;
// }



//2. Find the second largest element in the given array in one pass.
// #include<iostream>
// #include<algorithm>
// #include<climits>
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
//     int max_value = INT_MIN;
//     int sec_max = INT_MIN;
//     for(int i=0;i<n;i++) {
//         if(arr[i] > max_value) {
//             sec_max = max_value;
//             max_value = arr[i];
//         }
//         else {
//             sec_max = max(sec_max,arr[i]);
//         }
//     }
//     cout<<"The maximum element is : "<<max_value<<endl;
//     if (sec_max == INT_MIN) {
//         cout<<"No second largest exist";
//     }
//     else {
//     cout<<"The second maximum element is : "<<sec_max;
//     }

// }





//3. Find the minimum value out of all elements in the array.
// #include<iostream>
// #include<climits>
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
//     int min = INT_MAX;
//     for(int i=0;i<n;i++) {
//         if(arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     cout<<"The minimum element is : "<<min<<endl;
// }



//4. Given an array, predict if the array contains duplicates or not.
// #include<iostream>
// #include<climits>
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
//     bool flag = false; // contain duplicate
//     for(int i=0; i<n-1; i++) {
//         for(int j=i+1; j<n; j++) {
//             if(arr[i] == arr[j]) {
//                 flag = true;
//                 break;
//             }
//         }
//         if(flag == true) break;
//     }
//     if(flag == true) cout<<"Contains Duplicate";
//     else cout<<"All elements are unique";
// }





//5. Find the smallest missing positive element in the sorted array that 
// contains only positive elements.
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    bool flag = false; // no missing
    for(int i=0; i<n; i++) {
        if(arr[i] != i+1) {
            flag = true;
            cout<<i+1;
            break;
        }
    }
    if(flag == true) cout<<"Contains Duplicate";
    else cout<<"All elements are unique";
}

