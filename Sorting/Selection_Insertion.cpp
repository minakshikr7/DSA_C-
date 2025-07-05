// For each loop 
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {5,3,1,4,2};
//     // printing through for each loop
//     for(int ele : arr) {
//         cout<<ele<<" ";
//     }
// }



// Using it in vector 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int arr[] = {5,3,1,4,2};
//     // printing through for each loop
//     vector<int> v(5);
//     for(int i=0;i<5;i++) {
//         v[i] = arr[i];
//     }
//     for(int ele : v) {
//         cout<<ele<<" ";
//     }
// }





// Selection sort 
// #include<iostream>
// #include<climits>
// #include<vector>
// using namespace std;
// int main() {
//     int n ; 
//     cout<<"Enter the size of vector : ";
//     cin>>n;
//     // printing through for each loop
//     vector<int> v(n);
//     for(int i=0;i<5;i++) {
//         cin>>v[i];
//     }
//     for(int ele : v) {
//         cout<<ele<<" ";
//     }
//     cout<<endl;
//     // selection sort 
//     for(int i=0;i<n-1;i++) {
//         int min = INT_MAX;
//         int mindx = -1;
//         // minimun element calculation
//         for(int j=i;j<n;j++) {
//             if(v[j]<min){
//                 min = v[j];
//                 mindx = j;
//             }
//         }
//         swap(v[i],v[mindx]);
//     }
//     for(int ele : v) {
//         cout<<ele<<" ";
//     }
// }




// Insertion Sort 
#include<iostream>
using namespace std;
int main() {
    int n ;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    // insertion sort 
    for(int i=1;i<n;i++) {
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]) {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}