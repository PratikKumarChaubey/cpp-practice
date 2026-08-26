// Print 1 to $N$ using Backtracking:Function signature: void print1toN(int i, int n)Constraint:
//  You are starting from i = n and decrementing down to 0. You must use the return of the call stack (unwinding) to print $1, 2, 3 \dots N$.


/// BACK TRACKING MEANS FUCNTION VALUES ADDING UP AFTER IT HAS REACHED THE END CASE.

// #include<iostream>
// using namespace std;

// void print1toN(int n){
//     if(n<1){
//         return;
//     }
//     print1toN(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     print1toN(7);
//     return 0;
// }




// Write a function printNto1_backtrack that prints integers from $N$ down to $1$ exclusively using the call stack unwinding (post-recursion execution).
// Rules:No loops allowed.No printing before the recursive step.Function signature: 
// void printNto1_backtrack(int i, int n)Implement it in VS Code, test with $N = 7$, and paste your code.

// #include<iostream>
// using namespace std;
// void printNto1(int i,int n){
//     if(i>n){
//         return;
//     }
//     printNto1(i+1,n);
//     cout<<i<<endl;
// }
// int main(){
//     printNto1(1,7);
//     return 0;
// }






// Drill 3: Functional Recursion (Accumulating via Return Values)Now shift from printing inside void functions to returning values up the stack.Problem
// :Write a function sumOfN(int n) that computes and returns the sum of the first $N$ natural numbers ($1 + 2 + 3 + \dots + N$)
// .Constraints & Rules:Must be Functional Recursion:
//  The function signature must return int (or long long), not void.No extra helper parameters (e.g., no accumulator sum argument).
//   Only a single parameter int n.No loops, no global variables, and no direct formula like $n(n+1)/2$.
//The answer must be built during stack collapse using: $f(n) = n + f(n-1)$.



// #include<iostream>
// using namespace std;

// int sumOfN(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+sumOfN(n-1);
// }
// int main(){
//     cout<<sumOfN(10)<<endl;
//     return 0;
// }




// #include<iostream>
// using namespace std;

// long long factorial(int n){
//     if(n==0|| n==1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     cout<<factorial(5)<<endl;
//     return 0;
    
// }




// Write a recursive function to reverse an array in-place.

// Signature:

// C++
// void reverseArray(int l, int r, int arr[]);
// Constraints & Rules:

// In-place mutation (do not create an auxiliary array).

// No loops.

// Pure recursion.

// Test Case:

// Input: arr = {1, 2, 3, 4, 5}, l = 0, r = 4

// Output: 5 4 3 2 1

// Implement it, run your test, and paste your code.



// #include<iostream>
// using namespace std;
// void reverseArray(int l,int r,int arr[]){
//     if(l>=r){
//         return;
//     }
//     swap(arr[l],arr[r]);
//     reverseArray(l+1,r-1,arr);
    
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;

//     reverseArray(0, n - 1, arr);

//     // Print the modified array
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }







// Write a recursive function that checks whether a given string is a palindrome.Signature:C++bool isPalindrome(int i, const string& s);
// Constraints & Rules:Use only a single index i (derive the opposite character index using s.length() / s.size())
//.No loops.Pure functional recursion returning bool.
// Test Cases:s = "madam" $\to$ Expected Output: true (or 1)s = "racecar" $\to$ Expected Output: true (or 1)s = "college" $\to$ Expected Output: false (or 0)











// Problem Statement: Multiple Recursion Calls (N-th Fibonacci)Write a recursive function that calculates and returns the $N$-th Fibonacci number.
// Recurrence Context:$F(0) = 0$$F(1) = 1$Sequence: $0, 1, 1, 2, 3, 5, 8, 13, 21 \dots$

// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return fibonacci(n-1)+fibonacci(n-2);

// }
// int main(){
//     cout<<fibonacci(5)<<endl;
//     return 0;
// }




// Write a recursive function to search for a target element in a sorted integer array.
// Signature:C++int binarySearchRecursive(const int arr[], int low, int high, int target);
// Constraints & Rules:Must return the 0-based index of target if found.Must return -1 if target does not exist in the array.Pure recursion (no while or for loops).
// Time complexity must be $O(\log N)$.Test Cases:Input: arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}, low = 0, high = 9,
//  target = 23Expected Output: 5Input: Same array, target = 50Expected Output: -1









// Write a recursive function to compute $x^n$ for non-negative integers $n$.Signature:C++long long power(int x, int n);
// Constraints & Rules:Must be purely recursive.No loops (for, while).Do not use standard library functions like std::pow().Handle $n = 0$ correctly.
// Test Cases:Input: x = 2, n = 5 $\to$ Expected Output: 32Input: x = 3, n = 4 $\to$ Expected Output: 81Input: x = 7, n = 0 $\to$ Expected Output: 1


// #include<iostream>
// using namespace std;
// long long power(int a,int n){
//     if(n==0){
//         return 1;
//     }
//     return a*power(a,n-1);
// }
// int main(){
//     cout<<power(2,10)<<endl;
//     return 0;
// }







// void printSubsequences(int index, string& current, const string& s);
// Constraints & Rules:

// Maintain an auxiliary string current passed by reference.

// Follow the exact pattern:

// Take: Add s[index] to current, recurse on index + 1.

// Backtrack: Remove the added character (current.pop_back()).

// Not Take: Recurse on index + 1 without adding anything.

// Print current when the base case is reached (print "{}" if current is empty).

// No loops for combination generation.



#include<iostream>
using namespace std;

void printSubsequences(int index,string &current,const string &s){
    current[index]=s[index];
    printSubsequences(index+1,current,s);
    current.pop_back();
    printSubsequences(index+1,current,s);
    cout<<current<<endl;
    
}
int main(){
    string s="";
    string a="weareatyourservice";
    printSubsequences(0,s,a);
    return 0;
}
