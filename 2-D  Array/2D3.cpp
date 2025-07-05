//2D Vector 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     //vector<int> v;
//     vector< vector<int> > v;
//     vector<int> v1; // 1 2 3
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
    
//     vector<int> v2; // 4 5
//     v2.push_back(4);
//     v2.push_back(5);
    
//     vector<int> v3; // 6 7 8 9 10
//     v3.push_back(6);
//     v3.push_back(7);
//     v3.push_back(8);
//     v3.push_back(9);
//     v3.push_back(10);
//     cout<<v3[4];
// }



// Printing elements inside 2D vector 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector<int> v1; // 1 2 3
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
    
//     vector<int> v2; // 4 5
//     v2.push_back(4);
//     v2.push_back(5);
    
//     vector<int> v3; // 6 7 8 9 10
//     v3.push_back(6);
//     v3.push_back(7);
//     v3.push_back(8);
//     v3.push_back(9);
//     v3.push_back(10);
    

//     vector< vector<int> > v; // { {1,2,3}, {4,5}, {6,7,8,9,10}}
//     v.push_back(v1);
//     v.push_back(v2);
//     v.push_back(v3);
//     cout<<v[0][1];
// }




// Array into function 
// #include<iostream>
// using namespace std;
// void change(int a[]) { //will run without giving size 
//     a[0] = 9;
// }
// int main() {
//     int a[3] = {1,2,3};
//     cout<<a[0]<<endl;
//     change(a);
//     cout<<a[0];
// } 



// #include<iostream>
// using namespace std;
// void change2D(int arr[3][3]) { //will not run without giving size 
//     arr[0][0] = 9;
// }
// int main() {
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     cout<<arr[0][0]<<endl;
//     change2D(arr);
//     cout<<arr[0][0]<<endl;
// }




// Vector to functions 
// #include<iostream>
// #include<vector>
// using namespace std;
// void change2DVector(vector< vector<int> >&v){
//     v[0][1] = 100;
// }
// int main () {
//     vector<int> v1; // 1 2 3
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
    
//     vector<int> v2; // 4 5
//     v2.push_back(4);
//     v2.push_back(5);
    
//     vector<int> v3; // 6 7 8 9 10
//     v3.push_back(6);
//     v3.push_back(7);
//     v3.push_back(8);
//     v3.push_back(9);
//     v3.push_back(10);
    

//     vector< vector<int> > v; // { {1,2,3}, {4,5}, {6,7,8,9,10}}
//     v.push_back(v1);
//     v.push_back(v2);
//     v.push_back(v3);
//     cout<<v[0][1]<<endl;
//     change2DVector(v);
//     cout<<v[0][1];
// }




// Finding the length of vector 
// #include<iostream>
// #include<vector>
// using namespace std;
// void length(vector< vector<int> >&v){
//     cout<<v.size();
// }
// int main () {
//     vector<int> v1; // 1 2 3
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
    
//     vector<int> v2; // 4 5
//     v2.push_back(4);
//     v2.push_back(5);
    
//     vector<int> v3; // 6 7 8 9 10
//     v3.push_back(6);
//     v3.push_back(7);
//     v3.push_back(8);
//     v3.push_back(9);
//     v3.push_back(10);
    

//     vector< vector<int> > v; // { {1,2,3}, {4,5}, {6,7,8,9,10}}
//     v.push_back(v1);
//     v.push_back(v2);
//     v.push_back(v3);
//     length(v);
// }




// Declaration of vector 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> v(5);
//     cout<<v[0];

// }



// Declaration of 2D vector 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector< vector<int> >v(3,vector<int> (4,2));
//     cout<<v.size()<<endl; // row size
//     cout<<v[1].size()<<endl;
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<4;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }




//Pascals triangle 
#include<iostream>
#include<vector>
using namespace std;
int main() {
    int m = 5;
    vector< vector<int> >v;
    for(int i=1;i<=5;i++) {
        vector<int> a(i);
        v.push_back(a);
    }
    // generate
    for(int i=0;i<5;i++) {
        for(int j=0;j<=i;j++) {
            if(j==0 || j==i){
            v[i][j] = 1;
            }
            else {
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }

    // print
    for(int i=0;i<m;i++) {
        for(int j=0;j<=i;j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}