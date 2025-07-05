
//1. Sort the array of 0's and 1's
// Using in build sort method 
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main () {
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     for(int i=0; i<v.size(); i++) {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     sort(v.begin(),v.end());
//      for(int i=0; i<v.size(); i++) {
//         cout<<v[i]<<" ";
//     }
// }


// Another method for the same question 
// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01(vector<int> &v) {
//     int n = v.size();
//     int noo = 0; // it is counting no of ones
//     int noz = 0; // it is counting no of ones
//     for(int i=0; i<n; i++) {
//         if(v[i] == 0) noz++;
//         else noo++;
//     }
//     // filling the elements
//     for(int i=0; i<n; i++) {
//         if (i<noz) v[i] = 0;
//         else v[i] = 1;
//     }
// }
// int main () {
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     for(int i=0; i<v.size(); i++) {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     sort01(v);
//      for(int i=0; i<v.size(); i++) {
//         cout<<v[i]<<" ";
//     }
// }



// Another method
// Travelling through the array only once (two pointer)
// There is small error in the code when input is taken as  1 1 0 1 0 1 1 0
// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01(vector<int> &v) {
//     int n = v.size();
//     int i = 0;
//     int j = n-1;
//     while(i<j) {
//         if (v[j] == 1) j--;
//         if (v[i] == 0) i++;
//         if(v[i] == 1 && v[j] == 0) {
//             v[i] = 0;
//             v[j] = 1;
//             i++;
//             j--;
//         } 
//     }
// }
// int main () {
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     for(int i=0; i<v.size(); i++) {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     sort01(v);
//      for(int i=0; i<v.size(); i++) {
//         cout<<v[i]<<" ";
//     }
// }



// Final code 
// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01(vector<int> &v) {
//     int n = v.size();
//     int i = 0;
//     int j = n-1;
//     while(i<j) {
//         if (v[j] == 1) j--;
//         else if (v[i] == 0) i++;
//         else if(v[i] == 1 && v[j] == 0) {
//             v[i] = 0;
//             v[j] = 1;
//             i++;
//             j--;
//         } 
//     }
// }
// int main () {
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     for(int i=0; i<v.size(); i++) {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     sort01(v);
//      for(int i=0; i<v.size(); i++) {
//         cout<<v[i]<<" ";
//     }
// }




// Move all negative numbers to beginning and positive to end with 
// constant extra space.
// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01(vector<int> &v) {
//     int n = v.size();
//     int i = 0;
//     int j = n-1;
//     while(i<j) {
//         if (v[j] > 0) j--;
//         else if (v[i] < 0) i++;
//         else if(v[i] > 0 && v[j] < 0) {
//             swap(v[i],v[j]);
//             i++;
//             j--;
//         } 
//     }
// }
// int main () {
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(-2);
//     v.push_back(3);
//     v.push_back(-4);
//     v.push_back(-5);
//     v.push_back(6);
//     v.push_back(8);
//     v.push_back(-3);
//     for(int i=0; i<v.size(); i++) {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     sort01(v);
//      for(int i=0; i<v.size(); i++) {
//         cout<<v[i]<<" ";
//     }
// }



// Merge two sorted array
#include<iostream>
#include<vector>
using namespace std;
vector<int> merge (vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m+n);
    int i = 0; // arr1
    int j = 0; // arr2
    int k = 0; // res
    while (i<n && j<m) {
        if(arr1[i]<arr2[j]) {
            res[k] = arr1[i];
            i++;
           // k++;
        }
        else { //arr2[j] < arr1[i]
             res[k] = arr2[j];
             j++;
             //k++;         
        }
        k++;
    }
    // for remaining 
    if(i==n) { // arr1 ke saare elements utha chuka hoon
        while(j<=m-1) {
            res[k] = arr2[j];
            k++;
            j++;
        }
    }
    if(j==m) { // arr2 ke saare elements utha chuka hoon
        while(i<=n-1) {
            res[k] = arr1[i];
            k++;
            i++;
        }
    }
    return res;
}
int main() {
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    for(int i=0; i<arr1.size(); i++) {
        cout<<arr1[i]<<" ";
    }
    cout<<" ";
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    for(int i=0; i<arr2.size(); i++) {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    vector<int> v = merge(arr1 , arr2);

    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
}