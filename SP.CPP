// Reverse the string 
// #include<iostream>
// using namespace std;
// int main() {
//     string s;
//     cout<<"Enter the string : ";
//     cin>>s;
//     int n = s.size();
//     for(int i=0;i<n/2;i++) {
//         swap(s[i],s[n-i-1]);
//     }
//     cout<<"The reversed string is : "<<s;
// }

// convert string to uppercase 
// #include<iostream>
// #include<cctype>
// using namespace std;
// int main() {
//     string s;
//     cout<<"Enter the string : ";
//     getline(cin,s);
//     for(int i=0;s[i] != '\0';i++){
//         s[i] = toupper(s[i]);
//     }
//     cout<<"The reversed array is : "<<s;
// }


// same using ascii value 
// #include<iostream>
// using namespace std;
// int main() {
//     string s;
//     cin>>s;
//     int n = s.length();
//     for(int i=0;i<n;i++){
//         s[i] -= 32;
//     }
//     cout<<s;
// }


// count the no of character in a string 
// #include<iostream>
// using namespace std;
// int main () {
//     string s;
//     cin>>s;
//     int n = s.size();
//     int count = 0;
//     for(int i=0;i<n;i++){
//         count ++;

//     }
//     cout<<count;
// }


// count the number of words 
// #include<iostream>
// using namespace std;
// int main () {
//     string s;
//     getline(cin,s);
//     int n = s.size();
//     int count = 0;
//     for(int i=0;i<n;i++) {
//         if(s[i] == ' ')
//         count ++;
//     }
//     cout<<count+1;
// }



// Palindrome 
// #include<iostream>
// using namespace std;
// int main() {
//     string s;
//     cin>>s;
//     int n = s.length();
//     bool ispalindrome = true;
//     for(int i=0;i<n;i++) {
//         if(s[i] != s[n-i-1]) {
//             ispalindrome = false;
//         }
//     }
//     if(ispalindrome) {
//         cout<<"Palindrome";
//     }
//     else {
//         cout<<"Not Palindrome";
//     }


// }




// Palindrome 
// #include<iostream>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     int n = s.length();

//     for(int i = 0; i < n / 2; i++) {  // ✅ Loop runs only till n/2
//         if(s[i] != s[n - i - 1]) {
//             cout << "Not Palindrome"; // ✅ Directly print and return if mismatch
//             return 0;
//         }
//     }

//     cout << "Palindrome";  // ✅ If loop completes, it's a palindrome
// }



// Replace all the spaces with hyphen 
// #include<iostream>
// using namespace std;
// int main() {
//     string s;
//     cout<<"Enter the string : ";
//     getline(cin,s);
//     for(int i=0;i<s.length();i++){
//         if(s[i] == ' ') {
//             s[i] = '-';

//         }
//     }
//     cout<<"The string after conversion : "<<s;
// }


//Find the most frequent character in a string 
// #include<iostream>
// using namespace std;
// int main() {
//     string s;
//     cout<<"Enter the string : ";
//     cin >> s;
//     int n = s.length();
//     int count = 0;
//     int freq = 0;
//     for(int i=0;i<n-1;i++) {
//         for(int j=i+1;j<n;j++) {
//             if(s[i]==s[j]) {
//                 count ++;
//                 freq = s[i];
//             }
//         }
//     }
//     if(freq == count) {
//         cout<<freq[i];

//     }
// }







// // Bubble sort 
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main() {
//     int n ;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i=0;i<n-1;i++) {
//         cin>>arr[i];
//     }
//     // sort
//     for(int i=0;i<n-1;i++) {
//         for( int j=0;j<n-1;j++) {
//             if(arr[j]>arr[j+1]) {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<n-1;i++) {
//         cout<<arr[i]<<" ";
//     }
// }





