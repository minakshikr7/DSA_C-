
// 1.Count the number of elements strictly greater than x.
// #include<iostream>
// using namespace std;
// void Count_greater(int n, int arr[], int x) {
//     int count = 0;
//     for(int i=0;i<n;i++) {
//         if(arr[i] > x) {
//             count++;
//         }
//     }
//     cout<< "Number of elements greater than "<<x<<" is: "<<count<<endl;
// }
// int main() {
//     int n;
//     cout<<"Enter the no of elements : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"Enter X  : ";
//     cin>>x;
//     Count_greater(n,arr,x);

// }



// 2. WAP to find the largest three elements in the array.
// #include<iostream>
// #include<algorithm>
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
//     sort(arr,arr+n);
//     cout<<"The largest three elements are : "<<arr[n-1]<<","<<arr[n-2]<<","<<arr[n-3];
//     return 0;
// }



//3. Check if the given array is sorted or not.
// #include<iostream>
// #include<algorithm>
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
//     bool flag = true;
//     for(int i=0;i<n-1;i++) {
//         if(arr[i] > arr[i+1]) {
//             flag = false;
//             break;
//         }
//     }
//     if(flag) {
//         cout <<"Array is sorted";
//     }
//     else {
//         cout<<"Array is not sorted";
//     }
//     return 0;
// }




// 4. Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.
// #include<iostream>
// #include<algorithm>
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
//     int even_sum = 0;
//     int odd_sum = 0;
//     for(int i=0;i<n;i++) {
//         if(i%2 == 0) {
//             even_sum += arr[i]; 
//             }
//         else {
//             odd_sum += arr[i];
//         }
//     }
//     int difference = even_sum - odd_sum;
//     cout<<"Difference is equal to : "<<difference;
//     return 0;
// }




// 5. Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.
// #include<iostream>
// #include<algorithm>
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
//     for(int i=0;i<n;i++) {
//         if(i%2 == 0) {
//             arr[i] += 10; 
//             }
//         else {
//             arr[i] *= 2;
//         }
//     }
//     cout<<"Modified array : ";
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }





// 6. Find the unique number in a given array where all the elements are 
// being repeated twice with one value being unique.
#include<iostream>
#include<algorithm>
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
    for(int i=0; i<n; i++) {
        bool flag = true;
        for(int j=0; j<n; j++) {
            if(j==i) continue;
            if(arr[i] == arr[j]) {
                flag = false;
                break;
            }
        }
        if(flag == true) {
            cout<<arr[i]<<endl;
            break;
        }
    }
}




//7. If an array arr contains n elements, then check if
// the given array is a palindrome or not .
// #include<iostream>
// #include<algorithm>
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
//     bool flag = true;
//     int i=0;
//     int j=n-1;
//     while(i<=j) {
//         if(arr[i] != arr[j]){
//             flag = false;
//             break;
//         } 
//         i++;
//         j--;
//     }
//     if(flag) {
//         cout<<"Palindrome";
//     }
//     else {
//         cout<<"Not Palindrome";
//     }
// }