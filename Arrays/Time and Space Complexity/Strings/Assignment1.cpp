// 1.Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 
// 0-based indexing.
//  Input : str = "Pbwcshkuiglhlds"
//  Output : "P#w#s#k#i#l#l#s"
//  input : str = "a"
//  Output : "a"

// #include<iostream>
// using namespace std;
// int main () {
//     string str;
//     cout<<"Enter the string : ";
//     getline(cin,str);
//     int n = str.length();
//     for(int i=0;i<n;i++) {
//         if(i%2 != 0) {
//             str[i] = '#';
//         }
//     }
//     cout<<"Updated string : "<<str;
//     return 0;
// }



// 2.Input a string of length n and count all the consonants in the given string.
//  Input : "pwians"
//  Output : 4
//  Input : "abdc"
//  Output : 3
// #include<iostream>
// using namespace std;
// int main () {
//     string str;
//     cout<<"Enter the string : ";
//     getline(cin,str);
//     int n = str.length();
//     int count = 0;
//     for(int i=0;i<n;i++) {
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||str[i] == 'u' ) {
//         continue;
//         }
//         else {
//             count++;
//         }
//     }
//     cout<<count;
//     return 0;
// }



//3. Check whether the given string is palindrome or not.
//  Input : "abcde"
//  Output : No
//  Input : "abcdcba"
//  Output : Yes
// #include<iostream>
// using namespace std;
// int main () {
//     string str;
//     cout<<"Enter the string : ";
//     getline(cin,str);
//     int n = str.length();
//     bool isPalindrome = true;
//     for(int i=0;i<n;i++) {
//         if(str[i] != str[n-i-1]) {
//             isPalindrome = false;
//         }
//     }
//     if(isPalindrome) {
//         cout<<"Yes";
//     }
//     else {
//         cout<<"No";
//     }
//     return 0;
// }



// 4. Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"
// Output : abcdhgfe
// Input :str = "pwians"
// Output : pwisna
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main () {
//     string str;
//     cout<<"Enter the string : ";
//     getline(cin,str);
//     int n = str.length();
//     if(n%2 != 0) {
//         cout<<"Please enter a even string";
//         return 1;
//     }
    
//     reverse(str.begin() + n/2 , str.end());
//     cout<<str;
//     return 0;
// }



// 5. Input a string of length less than 10 and convert it into integer without using builtin function.
//  Input : "3244"
//  Output : 3244
//  Input : "12"
//  Output : 12
// #include<iostream>
// using namespace std;
// int main () {
//     string s;
//     getline(cin,s);
//     int x = 0;
//     int n = s.length();
//     for(int i=0;i<n;i++) {
//         x *= 10;
//         x += (s[i]-48);
//     }
//     cout<<x;
// }