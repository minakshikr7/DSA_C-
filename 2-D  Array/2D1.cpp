// Initialization and declaration of 2-D array 
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     // rows -> 3   0-2
//     // columns -> 3   0-2
//     cout<<arr[0][0];
// } 


// Another way of initialising the array
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     // rows -> 3   0-2
//     // columns -> 3   0-2
//     cout<<arr[0][0];
// }



// Traversal through the 2-D array 
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<=2;i++) { // i for rows
//         for(int j=0;j<=2;j++){ // j is column
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



// Taking 2D array as input from the user
// #include<iostream>
// using namespace std;
// int main() {
//     int m;
//     cout<<"Enter the no of rows : ";
//     cin>>m;
//     int n ;
//     cout<<"Enter the no of columns : ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
            
//         }
        
//     }
//     cout<<endl;
//     //Printing
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cout<<arr[i][j]<< " ";
//         }
//         cout<<endl;
//     }
// }




// WAP to store the roll number and marks of 4 students side by side in a matrix.
// #include<iostream>
// using namespace std;
// int main() {
    
//     int arr[2][4];
//     for(int i=0;i<2;i++) {
//         for(int j=0;j<4;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     //Printing
//     for(int i=0;i<2;i++) {
//         for(int j=0;j<4;j++) {
//             cout<<arr[i][j]<< " ";
//         }
//         cout<<endl;
//     }
// }




// WAP to find the largest element of a given 2D array of integers.
// #include<iostream>
// #include<climits> // for max
// using namespace std;
// int main() {
//     int m;
//     cout<<"Enter the no of rows : ";
//     cin>>m;
//     int n ;
//     cout<<"Enter the no of columns : ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     int max = INT_MIN;
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             if(max < arr[i][j]) {
//                 max = arr[i][j];
//             }
//         }
//     }
//     cout<<"The largest element in the 2D array is : "<<max;
// }





// WAP to print sum of all the elements od a 2D matrix.
// #include<iostream>
// #include<climits>
// using namespace std;
// int main() {
//     int m;
//     cout<<"Enter the no of rows : ";
//     cin>>m;
//     int n ;
//     cout<<"Enter the no of columns : ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     int sum = 0;
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             sum = sum + arr[i][j];
//         }
//     }
//     cout<<"The sum of all the elements in the array is : "<<sum;
//     return 0;
// }



// WAP to add two matrices 
// #include<iostream>
// #include<climits>
// using namespace std;
// int main() {
//     cout<<"For 1st matrix"<<endl;
//     int m;
//     cout<<"Enter the no of rows : ";
//     cin>>m;
//     int n ;
//     cout<<"Enter the no of columns : ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
//         }
//     }

//     cout<<"For 2nd matrix"<<endl;
//     int o;
//     cout<<"Enter the no of rows : ";
//     cin>>o;
//     int p ;
//     cout<<"Enter the no of columns : ";
//     cin>>p;
//     int brr[o][p];
//     for(int i=0;i<o;i++) {
//         for(int j=0;j<p;j++) {
//             cin>>brr[i][j];
//         }
//     }
//     // Resultant matrix
//     int q = m;
//     int r = n;
//     int res[q][r];
//     for(int i=0;i<q;i++) {
//         for(int j=0;j<r;j++) {
//             res[i][j] = arr[i][j] + brr[i][j];
//         }
//     }
//     // Printing the resultant matrix 
//     cout<<"The resultant matrix : "<<endl;
//     for(int i=0;i<q;i++) {
//         for(int j=0;j<r;j++) {
//             cout<<res[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Another method 
// #include<iostream>
// using namespace std;
// int main () {
//     int a[2][3] = {{1,2,3},{4,5,6}};
//     int b[2][3] = {{7,8,9},{10,11,12}};
//         for(int i=0;i<2;i++) {
//         for(int j=0;j<3;j++) {
//             cout<<a[i][j] + b[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }




// Transpose of a matrix
// #include<iostream>
// using namespace std;
// int main() {
//     int m;
//     cout<<"Enter the no of rows : ";
//     cin>>m;
//     int n ;
//     cout<<"Enter the no of columns : ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//            cout<<arr[i][j]<<" "; 
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     // Transpose (column wise printing)
//     for(int j=0;j<n;j++) {
//         for(int i=0;i<m;i++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }




// WAP to print the transpose of the matrix entered by the user and store it in a new matrix.
// #include<iostream>
// using namespace std;
// int main() {
//     int m;
//     cout<<"Enter the no of rows : ";
//     cin>>m;
//     int n ;
//     cout<<"Enter the no of columns : ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//            cout<<arr[i][j]<<" "; 
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     //Storing the transpose (column wise printing)
//     int t[n][m];
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<m;j++) {
//             t[i][j] = arr[j][i];
//         }
//     }
//     // Printing
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<m;j++) {
//             cout<<t[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



// You are given a matrix/ 2-D array of size (n x n) . change this matrix into its transpose.
//code with error 
// #include<iostream>
// using namespace std;
// int main () {
//     int m;
//     cout<<"Enter the no of rows/columns : ";
//     cin>>m;
//     int arr[m][m];
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<m;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     // Print 
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<m;j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;

//     //transpose in the same matrix 
//     for(int i=0;i<m;i++) { //rows
//         for(int j=0;j<m;j++) { //columns
//             //Swapping of i,j and j,i
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     // print 
//     for(int i=0;i<m;i++) { //rows
//         for(int j=0;j<m;j++) { //columns
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// corrected code 
#include<iostream>
using namespace std;
int main () {
    int m;
    cout<<"Enter the no of rows/columns : ";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // Print 
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //transpose in the same matrix 
    for(int i=0;i<m;i++) { //rows
        for(int j=i+1;j<m;j++) { //columns
            //Swapping of i,j and j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // print 
    for(int i=0;i<m;i++) { //rows
        for(int j=0;j<m;j++) { //columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}




