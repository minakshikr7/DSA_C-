// Input a string and return the number of times the neighbouring characters are different from each other.
// #include<iostream>
// using namespace std;
// int main () {
//     string s;
//     cout<<"Enter the string : ";
//     getline(cin,s);
//     int n = s.length();
//     int count = 0;
//     for(int i=0; i<n;i++) {
//         if(n==1) {
//             break;
//         }
//         if(n==2 && s[0] != s[1]) {
//             count = 1;
//             break;
//         }
//         if(i==0) {
//             if(s[i] != s[i+1]){
//                 count++;
//             }
//         }
//         else if (i==n-1) {
//             if(s[i] != s[i-1]) {
//                 count++;
//             }
//         }
//         else if(s[i] != s[i-1] && s[i] != s[i+1])  {
//             count ++;
// }
//     }
//     cout<<"Output : "<<count;
//     return 0;
// }




// Sorting a string using in-build function 
// #include<iostream>
// #include<string>
// #include<algorithm> // for using sort
// using namespace std;
// int main () {
//     string s;
//     getline(cin,s);
//     sort(s.begin(),s.end());
//     cout<<s;
// }



// Ascii value of space 
// #include<iostream>
// using namespace std;
// int main () {
//     char ch = ' ';
//     cout<<(int)ch;
// }


// Check if the given string is anagram or not //leetcode 242
// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main () {
//     string s = "minakshi";
//     string t = "kshimina";
//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());
//     if(s==t) cout<<true; //1
//     else {
//         cout<<false; //0
//     }
// }




// Given a string consisting of lowercase english alphabets. Print the character that occurs most number of times 
// #include<iostream>
// using namespace std;
// int main () {
//     string s = "physicswallah";
//     int max = 0;
//     for(int i=0; i<s.length();i++) {
//         //char ch = s[i];
//         int count = 1;
//         for(int j=i+1;j<s.length();j++){
//             if(s[j]==s[i]) count++;
//         }
//         if(max<count) max = count;
//     }
//     //cout<<max;
    

//     for(int i=0; i<s.length();i++) {
//         char ch = s[i];
//         int count = 1;
//         for(int j=i+1;j<s.length();j++){
//             if(s[j]==s[i]) count++;
//         }
//         if(count==max) {
//             cout<<ch<<" "<<max<<endl;
//         }
//     }
    
// }




// Solving the same question using mapping 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     string s = "leetcode";
//     vector<int> arr(26,0);
//     for(int i=0;i<s.length();i++) {
//         char ch = s[i];
//         int ascii = (int)ch;
//         arr[ascii-97]++;
//     }
//     int max = 0;
//     for(int i=0;i<26;i++) {
//         if(arr[i]>max) max = arr[i];
//     }
//     for(int i=0;i<26;i++) {
//         if(arr[i] == max) {
//         int ascii = i + 97;
//         char ch = (char)ascii;
//         cout<<ch<<" "<<max<<endl;
//         }
//     }
// }



// Stringstream class 
// #include<iostream>
// using namespace std;
// #include<string>
// #include<sstream>

// int main () {
//     string str = "raghav is    maths teacher";
//     stringstream ss(str);
//     string temp;
//     while (ss >> temp) {
//         cout<<temp<<endl;
//     }

// }




//Given a sentence 'str', return the word that is occuring most number of times in that sentence.
// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// #include<sstream>
// using namespace std;
// int main () {
//     string str = "raghav is a maths teacher. He is a dsa mentor as well";
//     stringstream ss(str);
//     string temp;
//     vector<string>v;
//     while(ss>>temp) {
//         v.push_back(temp);

//     }
//     cout<<endl;
//     sort(v.begin(),v.end());
//     int maxcount = 1;
//     int count = 1;
//     for(int i=1; i<v.size(); i++) {
//         if(v[i] == v[i-1]) count++;
//         else count = 1;
//         maxcount = max(maxcount,count);
//     }
//     count = 1;
//     for(int i=1;i<v.size();i++) {
//         if(v[i] == v[i-1]) count++;
//         else count = 1;
//         if(count == maxcount) {
//             cout<<v[i]<<" "<<maxcount<<endl;
//         }
//     }
// }



// stoi vs stoll build-in functions 
// #include<iostream>
// #include<string>
// using namespace std;
// int main () {
//     // string to integer
//     string str = "123456";
//     int x = stoi(str);
//     cout<<x<<endl;
//     // integer to string 
//     int a = 12345;
//     string b = to_string(a);
//     cout<<b<<endl;
//     // string to long long 
//     string d = "12345678910121315";
//     long long e = stoll(d);
//     cout<<e;
// }




// Given n strings consisting of digits from 0 to 9. Return the index of 
// string which has maximum value. (Take 0 based indexing)
// This approach is wrong
// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #include<sstream>
// using namespace std;
// int main () {
//     string str = "0123 0023 456 00182 940 2901";
//     stringstream ss(str);
//     string temp;
//     vector<string> v; 
//     while(ss >> temp) {
//         v.push_back(temp);
//     }
//     int n = v.size();
//     sort(v.begin(),v.end());
//     cout<<v[n-1]<<" index-"<<n-1;
// }


// correct approah 
// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #include<sstream>
// using namespace std;
// int main () {
//     string arr[] = {"0123", "0023", "456", "00182", "940", "2901"};
//     int max = stoi(arr[0]);
//     string maxS = arr[0];
//     for(int i=1; i<=5; i++) {
//         int x = stoi(arr[i]);
//         if(x>max) {
//             max = x;
//             maxS = arr[i];
//         }
//     }
//     cout<<maxS;
// }




// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main () {
//     // ["flower" , "flow" , "flight"]
//     vector<string> v;
//     v.push_back("flower");
//     v.push_back("flow");
//     v.push_back("flight");
//     // lexiographically 
//     for(int i=0; i<v.size(); i++) {
//         cout<<v[i]<<endl;
//     } 
//     // output
//     // flower
//     // flow
//     // flight
//     cout<<endl;
//     sort(v.begin(),v.end());
//       for(int i=0; i<v.size(); i++) {
//         cout<<v[i]<<endl;
//     } // jo pahle khatam hoga vo pahle sort hokar aaiga (see output)
//     // output
//     // flight
//     // flow
//     // flower
// }


