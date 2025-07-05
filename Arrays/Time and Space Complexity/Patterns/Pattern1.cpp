//1
// #include<iostream>
// using namespace std;
// int main () {
//     for(int j=1; j<=5; j++) {
//         for(int i=1; i<=5; i++) {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//2
// #include<iostream>
// using namespace std;
// int main () {
//     for(int j=1; j<=5; j++) {
//         for(int i=1; i<=5; i++) {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//3
// #include<iostream>
// using namespace std;
// int main () {
//     for(int j=1; j<=5; j++) {
//         for(int i=5; i>=1; i--) {
//             cout<<i<<" ";
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//4
// #include<iostream>
// using namespace std;
// int main () {
//     for(int j=1; j<=5; j++) {
//         for(int i=1; i<=5; i++) {
//             cout<<i*i<<" ";
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//5
// #include<iostream>
// using namespace std;
// int main () {
//     for(int j=1; j<=5; j++) {
//         for(int i=1; i<=5; i++) {
//             cout<<char('a'+ (i-1))<<" ";
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//6
#include<iostream>
using namespace std;
int main () {
    int count = 1;
    for(int j=1; j<=5; j++) {
         
        for(int i=1; i<=5; i++) {
           
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}