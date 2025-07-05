// Take input from the user and print your name 
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the no of times you want to print the name : ";
//     cin>>n;
//     for (int i=0;i<n;i++) {
//         cout<<"Minakshi"<<endl;
//     }
//     return 0;
//
// }
// BEST/AVERAGE/WORST CASE - O(n)


// Take array elements input from the user and then multiply them by 10 and print it.
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Input size of the array : ";
//     cin>>n;
//     cout<<"Enter the value in our array : ";
//     int Input_array[n];
//     for(int i=0;i<n;i++) {
//         cin>>Input_array[i];
//     }

//     int arr[n];
//     for(int i=0;i<n;i++) {
//         arr[i] = Input_array[i]*10;
//     }

//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }
// TC - O(N)
// SC - O(N)



// Optimised code to check whether a number is a prime no or not 
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=2;i<=n/2;i++) {
        if(n%i==0) {
            cout<<"Not a prime";
            return 0;
        }
    }
    cout<<"Prime";

}