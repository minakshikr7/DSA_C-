
// 1. Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"
// Input : str = "pw"
// Output : "pwwp"

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main () {
//     string s;
//     cout<<"Enter the string : ";
//     cin>>s;
//     string temp = s;
//     reverse(temp.begin(),temp.end());
//     s = s+temp;
//     cout<<s;
// }



#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Enter the string of digits: ";
    cin >> str;

    int largest = -1, secondLargest = -1;

    for(int i = 0; i < str.size(); i++) {
        int digit = str[i] - '0';

        if(digit > largest) {
            secondLargest = largest;
            largest = digit;
        }
        else if(digit < largest && digit > secondLargest) {
            secondLargest = digit;
        }
    }

    if(secondLargest == -1)
        cout << "No second largest digit exists.\n";
    else
        cout << "Second largest digit is: " << secondLargest << endl;

    return 0;
}
