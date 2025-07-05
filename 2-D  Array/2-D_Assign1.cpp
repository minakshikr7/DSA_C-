//  Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the no of rows/columns : ";
//     cin>>n;
//     int arr[n][n];
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     // Replacing it with zeroes 
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             arr[i][j] = 10;
//         }
//     }
//     // Printing 
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//2.Write a program to add two matrices and save the result in one of the given matrices
// #include<iostream>
// using namespace std;
// int main () {
//     // 1st matrix
//     int m;
//     cout<<"Enter the no of rows : ";
//     cin>>m;
//     int n;
//     cout<<"Enter the no of columns : ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     // Printing the first matrix 
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     // 2nd matrix
//     int a;
//     cout<<"Enter the no of rows : ";
//     cin>>a;
//     int b;
//     cout<<"Enter the no of columns : ";
//     cin>>b;
//     int brr[a][b];
//     for(int i=0;i<a;i++) {
//         for(int j=0;j<b;j++) {
//             cin>>brr[i][j];
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<a;i++) {
//         for(int j=0;j<b;j++) {
//             cout<<brr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     // sum of martices 
//     cout<<"Final matrix : "<<endl;
//     for(int i=0;i<a;i++) {
//         for(int j=0;j<b;j++) {
//             brr[i][j] += arr[i][j];
//         }
//     }
//     // printing the final matrix
//     for(int i=0;i<a;i++) {
//         for(int j=0;j<b;j++) {
//             cout<<brr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }




//3. Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the 
// rectangle from (l1,r1) to (l2, r2).
// #include<iostream>
// using namespace std;
// int main () {
//     // 1st matrix
//     int m;
//     cout<<"Enter the no of rows : ";
//     cin>>m;
//     int n;
//     cout<<"Enter the no of columns : ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     // Printing the first matrix 
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     int l1;
//     cout<<"Enter l1 : ";
//     cin>>l1;
//     int r1;
//     cout<<"Enter r1 : ";
//     cin>>r1;
//     int l2;
//     cout<<"Enter l2 : ";
//     cin>>l2;
//     int r2;
//     cout<<"Enter r2 : ";
//     cin>>r2;
//     int sum = 0;
//     for(int i=l1;i<=l2;i++) {
//         for(int j=r1;j<=r2;j++) {
//             sum += arr[i][j];
//         }
//     }
//     cout<<"The sum is : "<<sum;
//     return 0;
// }



//4. Write a C++ program to find the largest element of a given 2D array of integers
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main () {
//     int m;
//     cout<<"Enter the number of rows : ";
//     cin>>m;
//     int n;
//     cout<<"Enter the number of columns : ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++) {
//         for(int j=0; j<n; j++) {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     // print
//     for(int i=0;i<m;i++) {
//         for(int j=0; j<n; j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     // Finding the largest element 
//     int max = INT_MIN;
//     for(int i=0;i<m;i++) {
//         for(int j=0; j<n; j++) {
//             if(arr[i][j] > max) {
//                 max = arr[i][j];
//             }
//         }
//     }
//     cout<<"The maximum element in the 2D array is : "<<max;
// }



//5. Write a program to print the row number having the maximum sum in a given matrix.
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main() {
//     int m;
//     cout<<"Enter the number of rows : ";
//     cin>>m;
//     int n;
//     cout<<"Enter the number of columns : ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     // Print
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     // Print the row with max sum
//     int maxSum = INT_MIN; 
//     int maxRow = -1;
//     for(int i=0;i<m;i++) {
//         int rowSum = 0;
//         for(int j=0;j<n;j++) {
//             rowSum += arr[i][j];
//         }
//         if(rowSum > maxSum) {
//             maxSum = rowSum;
//             maxRow = i;
//         }
//     }
//     cout<<"The row with the maximum sum is : "<<maxRow<<" with the sum : "<<maxSum;
// }




//6.Write a function which accepts a 2D array of integers and its size as arguments and displays the 
//elements of middle row and the elements of middle column.
#include<iostream>
#include<limits.h>
using namespace std;
int main() {
    int m;
    cout<<"Enter the number of rows/columns : ";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            cin>>arr[i][j];
        }
    }
    // Printing middle row and column
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            if (i==m/2 or j==m/2) {
                cout<<arr[i][j]<<" ";
            }
            else {
                cout<<" "<<" ";
            }
            cout<<endl;
        }
    }
}

