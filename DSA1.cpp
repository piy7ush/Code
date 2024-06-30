// prime no 

#include<bits/stdc++.h>
using namespace std;

int main(){
    bool isprime =1;
    int n;
    cin>>n;

    for(int i=2;i<n;i++){
        if(n%i == 0){
            // cout<<"not prime";
            isprime=0;
            break;
        }
    }
    if(isprime)cout<<"prime";
    else cout<<"not prime";
}

// #include<bits/stdc++.h>
// using namespace std;

// bool isPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i == 0)return 0;
//     }
//     return 1;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(isPrime(n))cout<<"Prime no";
//     else cout<<"NOT PRIME";

//     return 0;
// }



//  Switch Case

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int num =1;

//     switch (num){
//         case 1: cout<<" The no is 1";
//         break;

//         case 2: cout<<" The no is 2";
//         break;

//         default: cout<<"This is default case";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b;

//     cout<<"Enter the first no : "<<endl;
//     cin>>a;

//     cout<<"Enter the second no :"<<endl;
//     cin>>b;

//     char c;
//     cout<<"Enter the char ";
//     cin>>c;

//     switch(c){
//         case '+': cout<< a+b <<endl;
//         break;

//         case '-': cout<<a-b<<endl;
//         break;

//         case '*': cout<<a*b<<endl;
//         break;

//         case '/': cout<<a/b<<endl;
//         break;

//         default: cout<<"NOT POSSIBLE";
//     }
//     return 0;
// }



// power(a,b)

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int a,b;
//     cin>>a>>b;

//     int ans =1;

//     for(int i=1;i<=b;i++){
//         ans = ans*a;
//     }
//     cout<<"the ans is "<<ans<<endl;
    
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int power(int a,int b){
//     int ans =1;
//      for(int i=1;i<=b;i++){
//         ans = ans*a;
//      }
//      return ans;
// }

// int main(){
//     int a, b;
//     cin>>a>>b;
    
//     int ans = power(a,b);
//     cout<<ans;
//     return 0;
// }



// even odd 

// #include<bits/stdc++.h>
// using namespace std;

// bool isEven(int num){
//     if(num%2==0)return 1;

//     else return 0;
// }

// int main(){
//     int num;
//     cin>>num;

//     if(isEven(num))cout<<"EVEN NO";
//     else cout<<"ODD NO";

//     return 0;
// }



// NCR  or factorial

// #include<bits/stdc++.h>
// using namespace std;

// int factorial(int n){
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         fact = fact*i;
//     }
//     return fact;
// }

// int ncr(int a,int b){
//     int num = factorial(a);
//     int den = factorial(b) * factorial(a-b);

//     int ans = num/den;
//     return ans;
// }

// int main(){

//     int final = ncr(5,2);
//     cout<<final<<endl;

//     return 0;
// }



// PASS BY VALUE

// no change in the original num, copy jati h num ki 
// if we do pass by reference there will be change in num ----use & 

// #include<bits/stdc++.h>
// using namespace std;

// void passbyval(int num){
//     num++;
//     cout<<" THE NO IS :"<<num<<endl;
// }

// int main(){
//     int num;
//     cin>>num;

//     passbyval(num);

//     cout<<"THE VALUE OF NUM : "<<num;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool is_prime(int num) {
//     if (num < 2) {
//         return false;
//     }
//     for (int i = 2; i < num; i++) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int sum_of_primes_up_to_n(int n) {
//     int sum_primes = 0;

//     for (int i = 2; i <= n; ++i) {
//         if (is_prime(i)) {
//             sum_primes += i;
//         }
//     }

//     return sum_primes;
// }

// int main() {
//     int N;
//     std::cout << "Enter the value of N: ";
//     std::cin >> N;

//     int result = sum_of_primes_up_to_n(N);

//     std::cout << "Sum of prime numbers from 0 to " << N << " is: " << result << std::endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// bool isPrime(int n){
//     if(n<2)return false;

//     for(int i=2;i<n;i++){
//         if(n%i==0)return false;
//     }
//     return true;

// }

// int sumPrime(int n){
//     int sum=0;

//     for(int i=2;i<=n;i++){
//         if(isPrime(i))sum+=i;
//     }
//     return sum;
// }

// int main(){
//     int n ;
//     cin>>n;
//     int result = sumPrime(n);
//     cout<<result;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int a =0;
//     int b =1;

//     for(int i=1;i<=n;i++){
//         if(i == 1) {
//             cout << a<< " ";
//             continue;
//         }

//         if(i == 2) {
//             cout << b << " ";
//             continue;
//         }

//         int next =a+b;
//         cout<<next<<" ";

//         a = b;
//         b = next;
//     }
//     return 0;
// }

// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the number of terms in the Fibonacci series: ";
//     std::cin >> n;

//     int first = 0, second = 1, next;

//     std::cout << "Fibonacci Series: ";

//     for (int i = 0; i < n; ++i) {
//         if (i <= 1) {
//             next = i;
//         } else {
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         std::cout << next << " ";
//     }

//     std::cout << std::endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int a = 0;
//     int b = 1;
//     int next;

//     for(int i=0;i<n;i++){
//         if(i<=1){
//             next =i;
//         }
//         else{
//             next = a+b;
//             a=b;
//             b=next;

//         }
//         cout<<next<<" ";
//     }

// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     int sum =0;
//     int product=1;

//     while(n!=0){
//         int digit =n%10;
//         sum+=digit;
//         product*=digit;
//         n=n/10;
//     }

//     cout<<sum<<endl;
//     cout<<product;


//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans =1;
//     for(int i=0;i<b;i++){
//         ans = ans*a;
//     }
//     cout<<ans;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// bool isEven(int n){
//     if(n&1)return 0;
//     else return 1;
// }

// int main(){

//     int n;
//     cin>>n;
//     if(isEven(n))cout<<"Even";
//     else cout<<"ODD";
// }

// #include<bits/stdc++.h>
// using namespace std;

// int pivot(int arr[],int size){
//     int start = 0;
//     int end = size-1;

//     int mid = (start+end)/2;
//     while(start<end){
//         if(arr[mid]>=arr[0])start = mid+1;

//         else end = mid;

//         mid = (start+end)/2;
//     }
//     return start;
// }

// int main(){
//     int arr[6] = {7,9,10,1,2,3};
//     int size = 6;
//     cout<<pivot(arr,size);

//     return 0;
// }