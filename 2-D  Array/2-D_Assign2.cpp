//1.Write a program to print the elements of both the diagonals in a square matrix
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of matrix : ";
//     cin>>n;
    
//     int arr[n][n];
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
//         }
//     }
    
//     // print the diagonal matrix
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             if(i==j) {
//                 cout<<arr[i][j]<<" ";
//             }
//             else if (i+j == n-1){
//                 cout<<arr[i][j]<<" ";
//             }
//             else {
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
//     }

// }



// Write a program to rotate the matrix by 90 degrees anti-clockwise.
#include<iostream>
using namespace std;
int main() {
    int m;
    cout<<"Enter the size of row : ";
    cin>>m;
    int n;
    cout<<"Enter the size of column : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[m][n];
        }
    }
    
}