//Write  a program to print the multiplication of two matrices given by the user.
// #include<iostream>
// using namespace std;
// int main () {
//     int m;
//     cout<<"Enter rows of 1st matrix : ";
//     cin>>m;
//     int n;
//     cout<<"Enter columns of 1st matrix : ";
//     cin>>n;

//     int p;
//     cout<<"Enter rows of 2nd matrix : ";
//     cin>>p;
//     int q;
//     cout<<"Enter columns of 2nd matrix : ";
//     cin>>q;
//     if(n==p) {
//         int a[m][n];
//         cout<<"Enter elements of 1st matrix : "<<endl;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cin>>a[i][j];
//             }
//         }
//         int b[p][q];
//         cout<<"Enter elements of 2nd matrix : "<<endl;
//         for(int i=0;i<p;i++){
//             for(int j=0;j<q;j++){
//                 cin>>b[i][j];
//             }
//         }
//         //resultant matrix
//         int res[m][q];
//         for(int i=0;i<m;i++) {
//             for(int j=0;j<q;j++) {
//                 res[i][j] = 0;
//                 // res[i][j] = a[i][0]*b[0][j] + a[i][1] * b[1][j] + .....
//                 for(int k = 0;k<p;k++) {
//                     res[i][j] += a[i][k]*b[k][j];
//                 }
//             }
//         }
//         cout<<endl;
//         //print
//         for(int i=0;i<m;i++) {
//             for(int j=0;j<q;j++) {
//                 cout<<res[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     else{// n!=p
//         cout<<"The matrices cannot be multiplied";

//     }
// }





// WAP to print the matrix in wave form 
// #include<iostream>
// using namespace std;
// int main () {
//     int m;
//     cout<<"Enter rows of matrix : ";
//     cin>>m;
//     int n;
//     cout<<"Enter columns of matrix : ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     // wave print 
//     for(int i=0;i<m;i++){
//         if(i%2==0){
//             for(int j=0;j<n;j++) {
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else {
//             for(int j=n-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
    
// }



// #include<iostream>
// using namespace std;
// int main () {
//     int m;
//     cout<<"Enter rows of matrix : ";
//     cin>>m;
//     int n;
//     cout<<"Enter columns of matrix : ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     // wave print 
//     for(int i=m-1;i>=0;i--){
//         if(i%2==0){
//             for(int j=0;j<n;j++) {
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else {
//             for(int j=n-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
    
// }





// Spiral printing 
#include<iostream>
using namespace std;
int main () {
    int m;
    cout<<"Enter rows of matrix : ";
    cin>>m;
    int n;
    cout<<"Enter columns of matrix : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
   // spiral
   int minr = 0, minc = 0;
   int maxr = m-1, maxc = n-1;
   while(minr <= maxr && minc <= maxc) {
    // right 
    for(int j=minc;j<=maxc;j++) {
        cout<<arr[minr][j]<<" ";
    }
    minr++;
    if(minr>maxr || minc>maxc) break;
    //down
    for(int i=minr;i<=maxr;i++) {
        cout<<arr[i][maxc]<<" ";
    }
    maxc--;
    if(minr>maxr || minc>maxc) break;
    // left
    for(int j=maxc;j>=minc;j--){
        cout<<arr[maxr][j]<<" ";
    }
    maxr--;
    if(minr>maxr || minc>maxc) break;
    //up
    for(int i=maxr;i>=minr;i--){
        cout<<arr[i][minc]<<" ";
    }
    minc++;
   } 
}