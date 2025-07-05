// Printing string 
// #include<iostream>
// using namespace std;
// int main () {
//     char str[] = {'a','b','c','d','e'};
//     for(int i=0;i<5;i++) {
//         cout<<str[i]<<" ";
//     }
// }




// confirming that in every ch array the last element is \0.
// #include<iostream>
// using namespace std;
// int main () {
//     char str[10] = {'a','b','c','d','e'};
//     cout<<(int)(str[5]);
// }



// Printing string without knowing the last element or n
// #include<iostream>
// using namespace std;
// int main () {
//     char str[] = {'a','b','c','d','e'};
//     for(int i=0;str[i] != '\0';i++) {
//         cout<<str[i]<<" ";
//     }
// }



// Printing string without using for loop
// #include<iostream>
// using namespace std;
// int main () {
//     char str[] = {'a','b','c','d','e'};
//     cout<<str;// we can directly print string but in case of array it will print address of first element
//     // int arr[]= {1,2,3,4,5};
//     // cout<<arr;
// }




//Declaration of string as a datatype 
// #include<iostream>
// using namespace std;
// int main () {
//     string str = "Minakshi Kumari";
//     cout<<str<<endl;
//     cout<<str[0];
// }


// Taking string input using cin 
// #include<iostream>
// using namespace std;
// int main () {
//     string s;
//     cin>>s; // only if the given string has no spaces 
//     cout<<s;
// }


// Taking string input using getline function
// #include<iostream>
// using namespace std;
// int main () {
//     string s;
//     getline(cin,s); // will print with spaces 
//     cout<<s;
// }


// Indexing of character in string 
// #include<iostream>
// using namespace std;
// int main () {
//     string s;
//     s = "Raghav";
//     cout<<s[4];
// }



// Input a string of length n and count the vowels in the given string 
// Without input 
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main () {
//     string str = "raghav";
//     int count = 0;
//     for(int i=0; str[i] != '\0'; i++) {
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//             count++;
//         }
//      }
//     cout<<"Total number of vowels are  : "<<count;
//     return 0;
// }


// Solve the same question using while loop 
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main () {
//     string str = "raghav";
//     int count = 0;
//     int i = 0;
//     while (str[i] != '\0') {
//             if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//             count++;
//         }
//         i++;
//     }
//     cout<<"Total number of vowels are  : "<<count;
//     return 0;
// }



// Solving the same question by taking input from the user 
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main () {
//     string str;
//     cout<<"Enter the string : ";
//     getline(cin,str);
//     int count = 0;
//     int i = 0;
//     while (str[i] != '\0') {
//             if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//             count++;
//         }
//         i++;
//     }
//     cout<<"Total number of vowels are  : "<<count;
//     return 0;
// }



// updation of single character in string 
// #include<iostream>
// using namespace std;
// int main () {
//     string s;
//     s = "Minakshi";
//     s[1] = 'o';
//     cout<<s;
// }



// Reverse a string (string without space)
// #include<iostream>
// using namespace std;
// int main () {
//     string s;
//     cout<<"Enter a string : ";
//     cin>>s;
//     int n = s.length();
//     for(int i=0; i<n/2; i++) {
//         swap(s[i],s[n-i-1]);
//     }
//     cout<<"The reversed string is : "<<s;
//     return 0;
// }



// Convert a String to Uppercase (using toupper() function)
// #include<iostream>
// #include<cctype>
// using namespace std;
// int main () {
//     string s;
//     cout<<"Enter the string in lowercase : ";
//     getline(cin,s);
//     for(int i=0;i<s.size();i++) {
//         s[i] = toupper(s[i]);
//     }
//     cout<<"The string in uppercase is : "<<s;
// }


//Solve the same question using ASCII value 
// #include<iostream>
// using namespace std;
// int main () {
//     string str;
//     cout<<"Enter the string in lowercase : ";
//     getline(cin,str);
//     for(int i=0;i<str.length();i++) {
//         str[i] -= 32;
//     }
//     cout<<"The string in uppercase is : "<<str;
//     return 0;
// }



//Count the Number of Words in a String
// #include<iostream>
// using namespace std;
// int main () {
//     string str;
//     cout<<"Enter the string : ";
//     getline(cin,str);
//     int count = 0;
//     for(int i=0; i<str.size(); i++) {
//         if(str[i] == ' ') {
//             count++;
//         }
//     }
//     cout<<"The number of words in the string are : "<<count + 1;
//     return 0;
// }



//Check if the string is palindrome
// #include<iostream>
// using namespace std;
// int main () {
//     string str;
//     cout<<"Enter the string : ";
//     cin>>str;
//     int n = str.size();
//     bool isPalindrome = true;
//     for(int i=0;i<n;i++) {
//         if(str[i] != str[n-i-1]) {
//             isPalindrome = false;
//             break;
//         }
//  }
//  if (isPalindrome) {
//     cout<<"Palindrome";
//  }
//  else {
//     cout<<"Not Palindrome";
//  }
    
//     return 0;
// }







// Replace All Spaces with a Hyphen (-)
// #include<iostream>
// using namespace std;
// int main () {
//     string s;
//     cout<<"Enter the string : ";
//     getline(cin,s);
//     for(int i=0; i<s.length(); i++) {
//         if(s[i] == ' '){
//             s[i] = '-';
//         }
//     }
// cout<<"After replacing with hyphen : "<<s;
// return 0;
// }



//Find the Most Frequent Character in a String.
// #include<iostream>
// using namespace std;
// int main () {
//     string str;
//     cout<<"Enter the string : ";
//     cin>>str;
//     int n = str.length();
//     int count = 0;
//     for(int i=0;i<n-1;i++) {
//         for(int j=i+1; j<n; j++) {
//             if(str[i] == str[j]) {
//             count++;
//             }
//         }
//     }
//     cout<<count;
// }




// Updation of a single character in string 
// #include<iostream>
// using namespace std;
// int main () {
//     string str = "Mina";
//     cout<<str<<endl;
//     str[1] = 'o';
//     cout<<str;
// }



// Input a string of size n and update all the even positions in the string to character 'a'. consider 0-based indexing.
// #include<iostream>
// using namespace std;
// int main () {
//     string str;
//     cout<<"Enter the string : ";
//     cin>>str;
//     int n = str.size();
//     for (int i=0;i<n;i++) {
//         if(i%2 == 0){
//             str[i] = 'a';
//         }
//     }
//     cout<<"The updated string is : "<<str;
//     return 0;
// }



//Build-in string functions
//1. str.length()
// #include<iostream>
// using namespace std;
// int main() {
//     string str = "raghav garg is at PW";
//     cout<<str.length();// it does not count the null character.8
// }

//2. push_back (Can only be used for characters not for strings)
// #include<iostream>
// using namespace std;
// int main() {
//     string str = "raghav garg is at PW";
//     cout<<str<<endl;
//     str.push_back('e');
//     str.push_back('f');
//     cout<<str;
// }

//3. pop_back
// #include<iostream>
// using namespace std;
// int main() {
//     string str = "raghav garg is at PW";
//     cout<<str<<endl;
//     str.pop_back();
//     str.pop_back();
//     cout<<str;
// }



// "+" Operator 
// #include<iostream>
// using namespace std;
// int main () {
//     string s = "abc";
//     cout<<s<<endl;
//     string t = "def"; //append
//     cout<<s+t<<endl;
//     s = s + "ghi";
//     cout<<s;
//     return 0;
// }


//Reverse a string 
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main () {
//     string s = "abcdef";
//     cout<<s<<endl;
//     reverse(s.begin(),s.end());
//     cout<<s<<endl;
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main () {
//     string s = "abcdef";
//     cout<<s<<endl;
//     reverse(s.begin()+2,s.begin()+5); // increase the index by 1
//     cout<<s<<endl;
// }




// Input a string of even length and reverse the first half of the string.
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main () {
//     string s;
//     cout<<"Enter the string : ";
//     cin>>s;
//     int n = s.size();
//     reverse(s.begin() + 0,s.begin() + n/2);
//     cout<<"The reversed string is : "<<s;
// }



// Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuild functions 
// Input a string of even length and reverse the first half of the string.
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main () {
//     string s;
//     cout<<"Enter the string : ";
//     cin>>s;
//     int n = s.size();
//     reverse(s.begin() + 1,s.begin() + 5);
//     cout<<"The reversed string is : "<<s;
// }



//substr()
// #include<iostream>
// using namespace std;
// int main () {
//     string str = "abcdef";
//     cout<<str.substr(4);
// }


// #include<iostream>
// using namespace std;
// int main () {
//     string str = "abcdef";
//     // str.substr (idx,len)
//     cout<<str.substr(1,3);
// }



// Print the second half of the string 
// #include<iostream>
// #include<string>
// using namespace std;
// int main () {
//     string str;
//     cout<<"Enter a string : ";
//     getline(cin,str);
//     int n = str.length();
//     cout<<str.substr(n/2);

// }



// to_string
// #include<iostream>
// using namespace std;
// int main () {
//     int x = 123456;
//     string s = to_string(x);
//     cout<<s;
// }



// Return the total number of digits in a number without using any loop
// #include<iostream>
// using namespace std;
// int main () {
//     int x = 123456;
//     string s = to_string(x);
//     cout<<s.length();
// }
