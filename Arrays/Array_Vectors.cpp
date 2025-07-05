
// Vectors 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector <int> v;
//     v.push_back(6);
//     v.push_back(1);
//     v.push_back(9);
//     v.push_back(0);
//     cout<<v[0]<<" ";
//     cout<<v[1]<<" ";
//     cout<<v[2]<<" ";
//     cout<<v[3]<<" ";
// }



// Difference between size and capacity in vector 
// Size
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector <int> v;
//     v.push_back(6);
//     cout<<v.size()<<endl;
//     v.push_back(1);
//     cout<<v.size()<<endl;
//     v.push_back(9);
//     cout<<v.size()<<endl;
//     v.push_back(0);
//     cout<<v.size()<<endl;
//     cout<<v[0]<<" ";
//     cout<<v[1]<<" ";
//     cout<<v[2]<<" ";
//     cout<<v[3]<<" ";
// }



// Capacity 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector <int> v;
//     v.push_back(6);
//     cout<<v.capacity()<<endl;
//     v.push_back(1);
//     cout<<v.capacity()<<endl;
//     v.push_back(9);
//     cout<<v.capacity()<<endl;
//     v.push_back(0);
//     cout<<v.capacity()<<endl;
//     v.push_back(0);
//     cout<<v.capacity()<<endl;
//     cout<<v[0]<<" ";
//     cout<<v[1]<<" ";
//     cout<<v[2]<<" ";
//     cout<<v[3]<<" ";
// }




// pop_back
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector <int> v;
//     v.push_back(6);
//     v.push_back(6);
//     v.push_back(1);
//     v.push_back(6);
//     v.push_back(9);
//     v.push_back(6);
//     v.push_back(0);
//     v.push_back(6);
//     v.push_back(0);
//     for(int i=0;i<v.size();i++) {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     v.pop_back();
//     v.pop_back();
//     for(int i=0;i<v.size();i++) {
//         cout<<v[i]<<" ";
//     }
// }



// Size changes but the capacity remains same even when 
// we pop_back the elements 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector <int> v;
//     v.push_back(6); //1 1
//     v.push_back(6); // 2 2 
//     v.push_back(1); // 3 4
//     v.push_back(6); // 4 4
//     v.push_back(9); // 5 8
//     v.push_back(6); // 6 8
//     v.push_back(0); // 6 8
//     v.push_back(6); // 7 8
//     v.push_back(0); // 8 8
//     v.push_back(0); // 9 16
//     v.push_back(10);
//     v.push_back(11);
//     v.push_back(4);
//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity : "<<v.capacity();
//     cout<<endl;
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity : "<<v.capacity();
// }




// Vector with size 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector<int> v(5);
//     cout<<v[4]<<endl;
//     vector<int> m(5,7);
//     cout<<m[1];
// }



//Taking input and printing output in vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector <int> v(5);
//     for(int i=0;i<5;i++) {
//         cin>>v[i];
//     }
//     for(int i=0;i<5;i++) {
//         cout<<v[i]<<" ";
//     }
// }

// When size is not given.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector <int> v;
//     for(int i=0;i<5;i++) {
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i=0;i<5;i++) {
//         cout<<v[i]<<" ";
//     }
// }


// at
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     cout<<v[2]<<endl;
//     cout<<v.at(2)<<endl;
//     // Updation using at 
//     v.at(2) = 90;
//     cout<<v.at(2);
// }



// sort 
// #include<iostream>
// #include<algorithm>  // for sort()
// #include<vector>
// using namespace std;
// int main () {
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(6);
//     v.push_back(3);
//     v.push_back(4);
//     for(int i=0;i<v.size();i++) {
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
//     sort(v.begin(),v.end());
//     for(int i=0;i<v.size();i++) {
//         cout<<v.at(i)<<" ";
//     }
// }




// Passing vector to function
// // vectors are pass by value
// #include<iostream>
// #include<vector>
// using namespace std;
// void change(vector <int> a) {
//     a[0] = 100; 
//     for(int i=0;i<a.size();i++) {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main () {
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(6);
//     v.push_back(3);
//     v.push_back(4);
//     for(int i=0;i<v.size();i++) {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     change(v);
//     for(int i=0;i<v.size();i++) {
//         cout<<v[i]<<" ";
//     }
// }



// Vector passed by address/reference using ampercent
// vectors pass by reference 
// #include<iostream>
// #include<vector>
// using namespace std;
// void change(vector <int> &a) {
//     a[0] = 100; 
//     for(int i=0;i<a.size();i++) {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main () {
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(6);
//     v.push_back(3);
//     v.push_back(4);
//     for(int i=0;i<v.size();i++) {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     change(v);
//     for(int i=0;i<v.size();i++) {
//         cout<<v[i]<<" ";
//     }
// }



// Find the last occurence of x in the array 
// #include<iostream>
// #include<vector>
// using namespace std;
// void change(vector <int> &a) {
//     a[0] = 100; 
//     for(int i=0;i<a.size();i++) {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main () {
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(6);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(1);
//     v.push_back(6);
//     v.push_back(3);
//     v.push_back(4);
//     int x = 6;
//     int idx = -1;
//     for(int i=0;i<v.size();i++) {
//         if(v[i] == x) idx = i;
//     }
//    cout<<idx;
// }


// Another method 
// #include<iostream>
// #include<vector>
// using namespace std;
// void change(vector <int> &a) {
//     a[0] = 100; 
//     for(int i=0;i<a.size();i++) {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main () {
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(6);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(1);
//     v.push_back(6);
//     v.push_back(3);
//     v.push_back(4);
//     int x = 6;
//     int idx = -1;
//     for(int i=v.size()-1; i>=0; i--) {
//         if(v[i] == x){
//             idx = i;
//             break;
//         }
//     }
//    cout<<idx;
// }




// Find the doublet in the array whose sum is equal to the
// given value x
// Leetcode 1 (Two sum)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     int x;
//     cout<<"Enter the target : ";
//     cin>>x;
//     int n;
//     cout<<"Enter the size of the array : ";
//     cin>>n;
//     vector <int> v;
//     cout<<"Enter the elements of the array : ";
//     for(int i=0;i<n;i++){
//         int c;
//         cin>>c;
//         v.push_back(c);
//     }
//     for(int i=0; i<=n-2; i++) {
//         for(int j=i+1; j<=n-1; j++) {
//             if(v[i] + v[j] == x) {
//                 cout<<"("<<i<<","<<j<<")"<<endl;
//             }
//         }
//     }
// }




// WAP to copy the contents of one array into another 
// in the reverse order.
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &a) {
//     for(int i=0; i<a.size(); i++) {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main () {
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(6);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(7);
//     v1.push_back(4);
//     display(v1);
//     int n = v1.size();
//     vector <int> v2(n);
//     for(int i=0; i<n; i++) {
//         int j = v1.size() - 1 - i;
//         v2[i] = v1[j];
//     }
//     display(v2);
// }




// Same question but here we will use no extra array.
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &a) {
//     for(int i=0; i<a.size(); i++) {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main () {
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(6);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(7);
//     v1.push_back(4);
//     display(v1);
//     int n = v1.size();
//     int i = 0;
//     int j = n-1;
//     while(i<=j) {
//         // swap v[i] and v[j]
//         int temp = v1[i];
//         v1[i] = v1[j];
//         v1[j] = temp;
//         i++;
//         j--;
//     }
//     display(v1);
// }


// Using for loop 
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &a) {
//     for(int i=0; i<a.size(); i++) {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main () {
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(6);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(7);
//     v1.push_back(4);
//     display(v1);
//     int n = v1.size();
//     for(int i=0,j=n-1; i<=j; i++,j--) {
//         int temp = v1[i];
//         v1[i] = v1[j];
//         v1[j] = temp;
//     }
//     display(v1);
// }



// Using inbuild function 
// #include<iostream>
// #include<algorithm> // for reverse
// #include<vector>
// using namespace std;
// void display(vector<int> &a) {
//     for(int i=0; i<a.size(); i++) {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main () {
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(6);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(7);
//     v1.push_back(4);
//     display(v1);
//     reverse(v1.begin() , v1.end());
//     display(v1);
// }




// Reverse part of array 
// #include<iostream>
// #include<algorithm> // for reverse
// #include<vector>
// using namespace std;
// void display(vector<int> &a) {
//     for(int i=0; i<a.size(); i++) {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// void reverse (int i, int j, vector <int> &v1) {
//     while(i<=j) {
//         int temp = v1[i];
//         v1[i] = v1[j];
//         v1[j] = temp;
//         i++;
//         j--;
//     }
//     return;
// }
// int main () {
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(6);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(7);
//     v1.push_back(4);
//     display(v1);
//     reverse(0,2,v1);
//     display(v1);
// }




// Roatate the given array 'a' by K steps , where K is non-negative.
#include<iostream>
#include<algorithm> // for reverse
#include<vector>
using namespace std;
void display(vector<int> &a) {
    for(int i=0; i<a.size(); i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reverse (int i, int j, vector <int> &v) {
    while(i<=j) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}
int main () {
    int n;
    cout<<"Enter the number of elements in the vector : ";
    cin>>n;
    vector <int> v(n);
    cout<<"Enter the elements in the vector : ";
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    int k;
    cout<<"By which number you want array to be rotated: ";
    cin>>k;
    k = k%n; 
    reverse(0, n - k - 1, v);
    reverse(n - k, n - 1, v);
    reverse(0, n - 1, v);
    cout<<"Rotated array: ";
    display(v);
    return 0;
}