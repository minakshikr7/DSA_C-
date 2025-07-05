// Lower Bound (Linear Search)
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[9] = {1,2,4,5,9,15,18,21,24};
//     int n = 9;
//     int x = 20;
//     for(int i=0;i<n;i++) {
//         if(arr[i] > x) {
//             cout<<arr[i-1];
//             break;
//         }
//     }
// }




//Lower Bound (Binary Search)
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[9] = {1,2,4,5,9,15,18,21,24};
//     int target = 20;
//     int n = 9;
//     int lo = 0;
//     int hi = n-1;
//     bool flag = false;
//     while(lo<=hi){
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid] == target) {
//             // flag = true;
//             cout<<arr[mid-1];
//             flag = true;
//             break;
//         }
//         else if(arr[mid] < target) {
//             lo = mid + 1;
//         }
//         else {
//             hi = mid - 1;
//         }
        
//     }
//     if(flag == false) cout<<arr[hi];
// }






//Given a sorted array of n elements and a target 'X' . Find the first occurence of 'X' in the array. 
// If 'X' does not exist return -1.
// #include<iostream>
// using namespace std;
// int main () {
//     int arr []= {1,2,2,3,3,3,3,3,4,4,5,8,9};
//     int x = 3;
//     int n = 13;
//     int lo = 0;
//     int  hi = n-1;
//     bool flag = false ;
//     while (lo<=hi) {
//         int mid = lo + (hi - lo)/2;
//         if(arr[mid] == x) {
//         if(arr[mid-1] != x) {
//             flag = true;
//             cout<<mid;
//             break;
//         }
//         else {
//             hi = mid - 1;
//         }
//     }
//     else if(arr[mid] < x) {
//           lo = mid + 1;
//     }
//     else {
//         hi = mid - 1;
//     }
//     }
//     if(flag == false) {
//         cout<<-1;
//     }

// }





// Smallest missing non-negative element 
// Linear Search 
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[] = {0,1,2,3,4,8,9,12};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++) {
//         if(i != arr[i]) {
//             cout<<i;
//             break;
//         }
//     }
// }



// Binary Search 
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while(lo <= hi) {
        int mid;
        mid = lo + (hi-lo)/2;
        if(arr[mid]==mid) {
            lo = mid + 1;
        }
        else {
            ans = mid;
            hi = mid - 1;
        }
    }
    cout<<"The smallest mising non negative integer is : "<<ans;
    return 0;
}