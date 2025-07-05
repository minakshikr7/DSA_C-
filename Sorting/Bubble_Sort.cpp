// Sorting the elements using inbuild functions 
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> v(5);
//     for(int i=0;i<5;i++) {
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     for(int i=0;i<5;i++) {
//         cout<<v[i]<<" ";
//     }
// }



// sorting in decreasing order
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> v(5);
//     for(int i=0;i<5;i++) {
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     reverse(v.begin(),v.end());
//     for(int i=0;i<5;i++) {
//         cout<<v[i]<<" ";
//     }
// }



// Bubble sort (not optimised)
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // bubble sort
//     for(int i=0;i<n-1;i++) {
//         for(int j=0;j<n-1;j++) {
//             if(arr[j]>arr[j+1]) {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     cout<<"The sorted array : ";
//     // print the sorted array
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }





// Bubble sort (not optimised but better than the above code)
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // bubble sort
//     for(int i=0;i<n-1;i++) {
//         for(int j=0;j<n-1-i;j++) {
//             if(arr[j]>arr[j+1]) {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     cout<<"The sorted array : ";
//     // print the sorted array
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }




// Given an array , find if it is sorted or not 
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     // check 
//     bool flag = true;
//     for(int i=0;i<n-1;i++) {
//         if(arr[i] > arr[i+1]) {
//             flag = false;
//             break;
//         }
//     }
//     if(flag) {
//         cout<<"The array is sorted";
//     }
//     else {
//         cout<<"The array is not sorted";
//     }
// }





// Bubble Sort (final)
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     // Bubble sort optimised
//     for(int i=0;i<n-1;i++){ // n-1 passes
//         // traverse
//         bool flag = true;
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){ //swap
//                 swap(arr[j],arr[j+1]);
//                 flag = false;
//             }
//         }
//         if(flag == true) { //swap didn't happen
//             break;
//         }
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }



// Sort a string in decreasing order of values associated after removal of values smaller than X.
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main() {
//     string s = "AZYZXBYDXJK";
//     string str = "";
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='X') {
//             str.push_back(s[i]);
//         }
//     }
//     sort(str.begin(),str.end());
//     cout<<str;
// }


// the same question by using bubble sort
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main() {
//     string s;
//     cout<<"Enter the string : ";
//     getline(cin,s);
//     string str = "";
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='X') {
//             str.push_back(s[i]);
//         }
//     }
//     cout<<str<<endl;
//     int n = str.size();
//     // Bubble sort optimised
//     for(int i=0;i<n-1;i++){ // n-1 passes
//         // traverse
//         bool flag = true;
//         for(int j=0;j<n-1-i;j++){
//             if(str[j]>str[j+1]){ //swap
//                 swap(str[j],str[j+1]);
//                 flag = false;
//             }
//         }
//         if(flag == true) { //swap didn't happen
//             break;
//         }
//     }
    
//     cout<<str;
// }




// Push all zeroes to the end while maintaining the relative order of other elements 
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"The array is (including zeroes) : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // bubble sort
//     for(int i=0;i<n-1;i++) {
//         for(int j=0;j<n-1-i;j++) {
//             if(arr[j] == 0) {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     cout<<"The sorted array after moving all zeroes to the end : ";
//     // print the sorted array
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }