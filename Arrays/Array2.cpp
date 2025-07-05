// Search element in an array 
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements in the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int num;
//     cout<<"Enter the element to be searched  : ";
//     cin>>num;
//     for(int i=0;i<n;i++) {
//         if(num==arr[i]) {
//         cout<<"The element is found at index : "<<i<<endl;
//         break;
//         }
//     }
    
//     return -1;
// }


// Another method to solve the same problem 
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements in the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int num;
//     cout<<"Enter the element to be searched  : ";
//     cin>>num;
//     int index = -1;
//         for(int i=0;i<n;i++) {
//         if(num==arr[i]) {
//         cout<<"The element is found at index : "<<i<<endl;
//         break;
//         }
//     }
    
//     return index;

// }



// Reverse an array 
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n/2;i++) {
//         swap(arr[i],arr[n-i-1]);
//     }
//     cout << "The reversed array is: ";
//     for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
// }

//     return 0;
// }


// Second method 
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[5] = {1,2,3,4,5};
//     int start = 0, end = 4;
//     while(start<end) {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;

//     }
//     for(int i=0;i<5;i++) {
//         cout<<arr[i]<<" ";
//     }
// }



// Second highest in array 
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int max = INT_MIN;
//     for(int i=0;i<n;i++) {
//         if(arr[i]>max) {
//             max = arr[i];
//         }
//     }
//     int sec_max = INT_MIN;
//     for(int i=0;i<n;i++) {
//         if(arr[i]>sec_max && arr[i] != max) {
//             sec_max = arr[i];
//         }
//     }
//     cout<<"The second max element is : "<<sec_max;

// }



// Missing number 
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
//     int ans = -1;  
//     for(int i=0;i<n;i++) {
//         if(arr[i]!=i+1) {
//             ans = i+1;
            
//             break;

//         }
//     }
//     cout<<"The missing value is : "<<ans;
// }


// Same question with different method 
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";  // Here n is n+1
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }  
//     int sum = 0;
//     for(int i=0;i<n-1;i++) {
//         sum += arr[i];
//     }
//     int ans = n*(n+1)/2;
//     cout<<"The missing number is : "<<ans-sum;
// }




// Fibonacci series 
// #include<iostream>
// using namespace std;
// int main () {
//     int num , first = 0, second = 1 , next;
//     cout<<"Enter the no of terms to be printed in the fibonacci series : ";
//     cin>>num;
//     cout<<"Fibonacci series:"<<endl;
//     for(int i=0;i<num;i++) {
//         cout<<first<<endl;
//         next = first + second;
//         first = second;
//         second = next;
        
//     }
// }



// Through function 
// #include<iostream>
// using  namespace std;
// void fibonacci(int n) {
//     int a =0, b=1;
//     cout<<"The fibonacci series is "<<a<<" "<<b<<" ";
//     for(int i=2;i<n;i++) {
//     int c = a+b;
//     cout<<c<<" ";
//     a = b;
//     b = c;
//     }
// }
// int main () {
//     int n;
//     cout<<"Enter the no of terms till which you want to print : ";
//     cin>>n;
//     fibonacci(n);
//     return 0;
// }



// Rotate array by 1 position 
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
//     int temp =  arr[n-1];  
//     for(int i=n-2;i>=0;i--) {
//         arr[i+1] = arr[i];
        
//     }
//     arr[0] = temp;
//     cout<<"The array after rotation by 1 : ";
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




// Rotate array by 2 position 
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
//     int temp =  arr[n-1];  
//     for(int i=n-2;i>=0;i--) {
//         arr[i+1] = arr[i];
        
//     }
//     arr[0] = temp;
//     cout<<"The array after rotation by 1 : "<<endl;
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int temp1 =  arr[n-1];  
//     for(int i=n-2;i>=0;i--) {
//         arr[i+1] = arr[i];
        
//     }
//     arr[0] = temp1;
//     cout<<"The array after rotation by 2 : "<<endl;
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// Move zeroes to the end 
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
//     int j = 0;
//     for(int i=0;i<n;i++) {
//         if(arr[i] != 0) {
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i];
//     }
// }




// Printing the index of the smallest element.
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements in the array : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int index = 0;
//     for(int i=1;i<n;i++) {
//         if(arr[i]<arr[index]) {
//             index = i;
//         }
//     }
//     cout<<"Index of the smallest element is : "<<index;
// }




// Move the largest element at the last 
// #include<iostream>
// #include<algorithm>
// #include<limits.h>
// using namespace std;
// int main () {
//     int n = 5;
//     int arr[n] = {10,12,2,1,3};
//     int maxindex = 0;
//     for(int i=1; i<n; i++) {
//         if(arr[i] > arr[maxindex]) {
//             maxindex = i;
//         }
//     }
//     swap(arr[maxindex],arr[n-1]);
//     cout<<"Output : ";
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
    
// }




// PW Array part-2
// Passing array to function
// #include<iostream>
// using namespace std;
// void display(int a[]) {
//     for(int i=0;i<=4;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     return;
// }
// void change(int b[]) {
//     b[0] = 100;
// }
// int main () {
//     int arr[5] = {1,4,2,7,46};
//     display(arr);
//     change(arr);
//     display(arr);
// }



// Pointer and array 
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[] = {4,2,6,1,7};
//     int* ptr = arr;
//     cout<<ptr<<endl;
//     cout<<&arr[0];
// }



// Passing array to function
// #include<iostream>
// using namespace std;
// void display(int *a,size) {
//     for(int i=0;i<=size-1;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     return;
// }
// void change(int b[], size) { // int* b
//     b[0] = 100;
// }
// int main () {
//     int arr[5] = {1,4,2,7,46};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     display(arr);
//     change(arr);
//     display(arr);
// }




// Printing the elements of array 
// 1st way
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[5] = {1,4,2,7,46};
//     int* ptr = arr;
//     for(int i=0;i<=4;i++) {
//         cout<<ptr[i]<<" ";
//     }
// }


// 2nd way 
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[5] = {1,4,2,7,46};
//     int* ptr = arr;
//     for(int i=0;i<=4;i++) {
//         cout<<*ptr<<" ";
//         ptr++;
//     }
// }




// 3nd way 
// can throw erron in some system
#include<iostream>
using namespace std;
int main () {
    int arr[5] = {1,4,2,7,46};
    int* ptr = arr;
    for(int i=0;i<=4;i++) {
        cout<<i[ptr]<<" ";
        cout<<i[arr]<<" ";
        ptr++;
    }
}




// Updation in pointer 
// #include<iostream>
// using namespace std;
// int main () {
//     int arr[5] = {1,4,2,7,46};
//     int* ptr = arr;
//     for(int i=0;i<=4;i++) {
//         cout<<*ptr<<" ";
//         ptr++;
//     }
//     ptr = arr; // ptr is pointing to first element
//     *ptr = 8; // ptr[0] = 8;
//     ptr++; // ptr is pointing to second element
//     *ptr = 9;
//     ptr--; // ptr is pointing to first element
//     cout<<endl;
//      for(int i=0;i<=4;i++) {
//         cout<<*ptr<<" ";
//         ptr++;
//     }
// }
