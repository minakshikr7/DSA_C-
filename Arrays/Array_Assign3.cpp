
//1. Count the number of triplets whose sum is equal to the given value x.
// #include<iostream>
// using namespace std;
// int main () {
    
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin>>arr[i];
//     }
//     cout<<endl;
//     int x;
//     cout<<"Enter x : ";
//     cin>>x;
//     int count = 0;
//     for(int i=0; i<=n-3; i++) {
//         for(int j=i+1; j<=n-2; j++) {
//             for(int k=j+1; k<=n-1; k++) {
//                 if(arr[i]+arr[j]+arr[k] == x) {
//                     count++;
//                 }
//             }
//         }
//     }
//     cout<<"The number of triplets is : "<<count;

// }




//2. Find the factorial of a large number.
#include<iostream>
#include<vector>
using namespace std;

// Function to multiply the number with the result stored in res[]
int multiply(int x, vector<int> &res) {
    int carry = 0;

    for (int i = 0; i < res.size(); i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        res.push_back(carry % 10);
        carry /= 10;
    }

    return res.size();
}

// Function to find factorial of large number
void factorial(int n) {
    vector<int> res;
    res.push_back(1);  // start with 1 because factorial starts from 1

    for (int x = 2; x <= n; x++) {
        multiply(x, res);
    }

    cout << "Factorial of " << n << " is:\n";
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    factorial(n);
    return 0;
}
