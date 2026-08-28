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








// 1. Subsets (Power Set)
// Problem: Return all possible subsets of an array of unique integers.

// Input: nums = [1, 2, 3]

// Expected Output: [[], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3]]

// Signature: vector<vector<int>> subsets(vector<int>& nums);




// Problem: Given an array of positive integers arr and a target sum k,
// write a recursive function to determine whether there is at least one subset whose elements sum to k. Return true if one exists, otherwise return false.

// Input: arr = [1, 2, 7], k = 9

// Expected Output: true (because the subset [2, 7] sums to 9)

// Function Signature:

// C++
// bool checkSubsetSum(int index, int currentSum, int k, const vector<int>& arr);









// Subsequences with Target Sum $K$Problem: Given an array of integers arr and a target sum k,
//  write a recursive function to find and print all subsequences whose elements sum up to exactly k.Input: arr = [1, 2, 1],
// k = 2Expected Output:Plaintext[ 1 1 ]
// [ 2 ]

//void printSubsequencesWithSumK(int index, vector<int>& bag, int currentSum, int k, const vector<int>& arr);

// #include <iostream>
// #include <vector>
// using namespace std;

// void printSubsequencesWithSumK(int index, vector<int>& bag, int currentSum, int k, const vector<int>& arr) {
//     // 1. BASE CASE: Reached the end of the array
//     if (index == arr.size()) {
//         if (currentSum == k) {
//             cout << "[ ";
//             for (int val : bag) cout << val << " ";
//             cout << "]\n";
//         }
//         return;
//     }

//     // 2. PICK BRANCH: Add element to bag & add its value to currentSum
//     bag.push_back(arr[index]);
//     printSubsequencesWithSumK(index + 1, bag, currentSum + arr[index], k, arr);

//     // 3. BACKTRACK: Remove element
//     bag.pop_back();

//     // 4. DON'T PICK BRANCH: Skip element (currentSum remains unchanged)
//     printSubsequencesWithSumK(index + 1, bag, currentSum, k, arr);
// }

// int main() {
//     vector<int> arr = {1, 2, 1};
//     int k = 2;
//     vector<int> bag;

//     printSubsequencesWithSumK(0, bag, 0, k, arr);

//     return 0;
//}








// #include <iostream>
// #include <vector>
// using namespace std;

// void printSubsequencesWithSumK(int index, vector<int>& bag, int currentSum, int k, const vector<int>& arr) {
//     // 1. BASE CASE: Reached the end of the array
//     if (index == arr.size()) {
//         if (currentSum == k) {
//             cout << "[ ";
//             for (int val : bag) {
//                 cout << val << " ";
//             }
//             cout << "]\n";
//         }
//         return; // CRITICAL: Stop recursion and return to parent call
//     }
//     bag.push_back(arr[index]);
//     printSubsequencesWithSumK(index+1,bag,currentSum+arr[index],k,arr);
//     bag.pop_back();
//     printSubsequencesWithSumK(index+1,bag,currentSum,k,arr);
// }

// int main() {
//     vector<int> arr = {1, 2, 1};
//     int k = 2;
//     vector<int> bag;

//     printSubsequencesWithSumK(0, bag, 0, 2, arr);

//     return 0;
// }









// Problem 1: Count Subsequences with Sum = $K$ (Integer Return Pattern)Objective: Given an integer array arr and a target integer k, 
// return the total count of subsequences whose elements sum to k. Do not print the subsets; 
// return the count as an integer from your base cases using $L + R$.Input: arr = [1, 2, 1], k = 2Expected Output: 2 (the valid subsets are [1, 1] and [2])

// #include<iostream>
// #include<vector>
// using namespace std;
// int countSubsequencesWithSumK(int index, int currentSum, int k, const vector<int>& arr){
//     if(index==arr.size()){
//         if(currentSum==k){
//             return 1;
//         }
//     return 0;
//     }
//     int pick = countSubsequencesWithSumK(index + 1, currentSum + arr[index], k, arr);

//     // 3. DON'T PICK BRANCH: Skip element
//     int notPick = countSubsequencesWithSumK(index + 1, currentSum, k, arr);

//     // 4. COMBINE: Return total valid paths from both subtrees
//     return pick + notPick;
    
// }
// int main(){
//     vector<int> v1={1,2,1};
//     int k=2;
//     int totalCount=countSubsequencesWithSumK(0,0,2,v1);
//     cout<<"Total Subsequences with Sum " << k << " = " << totalCount << "\n";
//     return 0;
// }







// Problem: Given an array arr and an integer k, return the total number of subsequences whose elements sum up to exactly k.

// Input: arr = [3, 1, 2], k = 3

// Expected Output: 2 (the valid subsequences are [3] and [1, 2])
// #include<iostream>
// #include<vector>
// using namespace std;
// int countSubsequences(int index, int currentSum, int k, const vector<int>& arr){
//     if(index==arr.size()){
//         if(currentSum==k){
//             return 1;
//         }
//     return 0;
//     }
//     int pick=countSubsequences(index+1,currentSum+arr[index],k,arr);
//     int notpick=countSubsequences(index+1,currentSum,k,arr);
//     return pick+notpick;
// }
// int main(){
//     vector<int> arr={3,1,2};
//     int totalCount=countSubsequences(0,0,3,arr);
//     cout<<"Total Count: "<<totalCount<<endl;
//     return 0;
// }






// Problem 1: Count Subsequences with an Even Sum

// Objective: Given an integer array arr, return the total number of subsequences whose sum of elements is even (including the empty subsequence where sum = 0).

// Input: arr = [1, 2, 3]

// Expected Output: 4
// (The valid subsets are [] (sum 0), [2] (sum 2), [1, 3] (sum 4), [1, 2, 3] (sum 6))


// #include<iostream>
// #include<vector>
// using namespace std;
// int countEvenSumSubsequences(int index, int currentSum, const vector<int>& arr){
//     if(index==arr.size()){
//         if(currentSum%2==0){
//             return 1;
//         }
//     return 0;
//     }
        //     PICK FUNCTION
//     int pick=countEvenSumSubsequences(index+1,currentSum+arr[index],arr);
        // NOT PICK FUNCTION
//     int notpick=countEvenSumSubsequences(index+1,currentSum,arr);
//     return pick+notpick;
// }
// int main(){
//     vector<int>arr={1,2,3};
//     int totalCount=countEvenSumSubsequences(0,0,arr);
//     cout<<"Total Count of subsets with sum =2 is:"<<totalCount<<endl;
//     return 0;
// }






// Problem: Count how many subsequences have exactly $L$ elements AND sum up to $k$.
// Input: arr = [1, 2, 1, 3], k = 3, L = 2Expected Output: 2 (the valid subsets are [1, 2] and [2, 1])
// Signature:C++int countSubsequencesWithLengthAndSum(int index, int currentSum, int currentLength, int k, int L, const vector<int>& arr);
// Apply the exact same logic:In the Pick branch: increase currentLength by 1.
// In the Don't Pick branch: keep currentLength unchanged.At index == arr.size(): check currentSum == k && currentLength == L.




// #include<iostream>
// #include<vector>
// using namespace std;
// int countSubsequencesWithLengthAndSum(int index, int currentSum, int currentLength, int k, int L, const vector<int>& arr){
//     if(currentLength==L){
//         if(currentSum==k){
//             return 1;
//         }
//     return 0;
//     }
//     if(index==arr.size()){
//         return 0;
//     }
//     //PICK
//     int pick=countSubsequencesWithLengthAndSum(index+1,currentSum+arr[index],currentLength+1,k,L,arr);
//     //NOT PICK...
//     int notpick=countSubsequencesWithLengthAndSum(index+1,currentSum,currentLength,k,L,arr);
//     return pick+notpick;
// }
// int main(){
//     vector<int>v1={1,2,1,3};
//     int k=3;
//     int L=2;
//     int totalCount=countSubsequencesWithLengthAndSum(0,0,0,k,L,v1);
//     cout<<"Total count:"<<totalCount<<endl;
//     return 0;
// }





// The goal is early exit (pruning): if the pick branch returns true, you immediately return true to collapse the call stack without ever running the notpick branch.

// Input: arr = [1, 5, 11, 5], k = 10

// Expected Output: true (found [5, 5])




// #include<iostream>
// #include<vector>
// using namespace std;

// bool checkSubsetExists(int index, int currentSum, int k, const vector<int>& arr){
//     if(index==arr.size()){
//         if(currentSum==k){
//             return true;
//         }
//     return false;
//     }
//     //PICK..
//     if(checkSubsetExists(index+1,currentSum+arr[index],k,arr)){
//         return true;
//     }
//     //NOT PICK..
//     if(checkSubsetExists(index+1,currentSum,k,arr)){
//         return true;
//     }
//     return false;


// }
// int main(){
//     vector<int>arr={1,5,11,5};
//     int k=10;
//    if (checkSubsetExists(0, 0, k, arr)) {
//         cout << "Subset with sum " << k << " exists: true\n";
//     } else {
//         cout << "Subset with sum " << k << " does not exist: false\n";
//     }
//     return 0;
// }





// Objective: Given an integer array arr, return the total count of subsequences whose sum of elements is odd.

// Input: arr = [1, 2, 3]

// Expected Output: 4 (Valid subsets: [1] (sum 1), [3] (sum 3), [1, 2] (sum 3), [2, 3] (sum 5))






// #include<iostream>
// #include<vector>
// using namespace std;
// int subsequence(int index,int currentSum,vector<int>&arr){
//     if(index==arr.size()){
//         if(currentSum%2!=0){
//             return 1;
//         }
//     return 0;
//     }
//     // PICK..
//     int pick=subsequence(index+1,currentSum+arr[index],arr);
//     // NOT PICK..
//     int notpick=subsequence(index+1,currentSum,arr);
//     return pick+notpick;
// }
// int main(){
//     vector<int>v1={1,2,3};
//     int totalCount=subsequence(0,0,v1);
//     cout<<"TOTAL COUNT: "<<totalCount<<endl;
//     return 0;
// }



// Concept: Multi-pointer state tracking and base condition termination.

// Task: Reverse a vector<int>& arr in-place using recursion without using std::reverse or creating a second array.

// Input: arr = [1, 2, 3, 4, 5]

// Expected Output: arr becomes [5, 4, 3, 2, 1]


// #include<iostream>
// #include<vector>
// using namespace std;
// //arr = [1, 2, 3, 4, 5]
// void reverseArray(int l, int r, vector<int>& arr){
//     if(l>=r){
//         return;
//     }
//     swap(arr[l],arr[r]);
//     reverseArray(l+1,r-1,arr);
 
// }
// int main(){
//     vector<int>arr={1,2,3,4,5};
//     reverseArray(0,arr.size()-1,arr);
//        cout<<"{";
//     for(auto i=arr.begin();i<arr.end();i++){
//         cout<<*i;
//     }
//     cout<<"}";
//     return 0;
// }








// Problem 2: Check if String is Palindrome (Single Index)Concept: Single-index recursion mapping to symmetric indices ($i$ and $n - i - 1$).
// Task: Return true if a string $s$ is a palindrome, otherwise return false.Input: s = "racecar"Expected Output: true


// #include <iostream>
// #include <string>
// using namespace std;

// bool isPalindrome(int i, const string& s) {
//     int n = s.length();

//     // Base Case: Checked all pairs up to the middle
//     if (i >= n / 2) {
//         return true;
//     }

//     // Mismatch Check: Characters at symmetric positions must match
//     if (s[i] != s[n - i - 1]) {
//         return false;
//     }

//     // Recurse on the next character inward
//     return isPalindrome(i + 1, s);
// }

// int main() {
//     string s = "racecar";

//     if (isPalindrome(0, s)) {
//         cout << "\"" << s << "\" is a palindrome: true\n";
//     } else {
//         cout << "\"" << s << "\" is a palindrome: false\n";
//     }

//     return 0;
// }








//  Aggregating results from left (pick) and right (not-pick) branches ($L + R$) up the call stack.
//  Task: Return the total count of subsequences in arr whose elements add up to exactly K.Input: arr = [1, 2, 1], K = 2Expected Output: 2 (Subsequences: [1, 1] and [2])

// #include<iostream>
// #include<vector>
// using namespace std;
// int countSubsequencesWithSumK(int index, int currentSum, int k, const vector<int>& arr){
//     if(index==arr.size()){
//         if(currentSum==k){
//             return 1;
//         }
//     return 0;
//     }
//     // TAKE VALUES.....
//     int take=countSubsequencesWithSumK(index+1,currentSum+arr[index],k,arr);
//     int nottake=countSubsequencesWithSumK(index+1,currentSum,k,arr);
//     return take+nottake;
// }
// int main(){
//     vector<int>arr={1,2,1};
//     int totalcount=countSubsequencesWithSumK(0,0,2,arr);
//     cout<<totalcount<<endl;
//     return 0;
// }







// Concept: Lecture 7 — Early-exit pruning (bool recursion). 
// The goal is to return true immediately upon finding the first valid non-empty subsequence, stopping all further recursion
// .Task: Given an array arr and an integer M, return true if there exists any non-empty subsequence whose sum is divisible by M (i.e., sum % M == 0).
// Otherwise, return false.Example:Input: arr = [3, 1, 4], M = 7Output: true (The subsequence [3, 4] has sum $7$, which is divisible by $7$





// #include<iostream>
// #include<vector>
// using namespace std;
// bool nonempty(int index,int m,int currentsum,bool pickedany,const vector<int>& a){
//     if(index==a.size()){
//         if(currentsum%m==0){
//             return true;
//         }
//     return false;
//     }
//     // TAKE   VALUES........
//     if(nonempty(index+1,m,currentsum+a[index],true,a)==true){
//         return true;
//     }
//     // DON'T TAKE VALUES.........
//     if(nonempty(index+1,m,currentsum,true,a)==true){
//         return true;
//     }
//     return false;
// }
// int main(){
//     vector<int>v1={3,1,4};
//     nonempty(0,7,0,true,v1);
//     return 0;
// }











// You are given a list of available coin denominations (coins) and a target sum (amount). 
// You need to find how many distinct combinations of these coins can be added together to equal the exact amount.

// Key Rules
// Infinite Supply: You can use each coin denomination as many times as you want (0 times, 1 time, 5 times, etc.).

// Order Does Not Matter (Combinations, not Permutations): Choosing coin 1 then 2 is considered the exact same combination as choosing coin 2 then 1.
//  You are counting unique groups of coins, not the sequence in which you pick them.

// Return Type: The function should return a single integer representing the total count of valid combinations (not the combinations themselves).


// #include<iostream>
// #include<vector>
// using namespace std;
// int subSequence(int index,int target,int currentSum,vector<int>arr){
//     if(currentSum==target){
//         return 1;
//     }
//     if(index==arr.size()|| currentSum>target){
//         return 0;
//     }
//     // VALUES AT SAME INDEX....
//     int pick1 = 0;
//     if (currentSum + arr[index] <= target) {
//         pick1 = subSequence(index, target, currentSum + arr[index], arr);
//     }

//     //  NOT-PICK BRANCH (Advance to next index)
//     int pick2 = subSequence(index + 1, target, currentSum, arr);

//     return pick1 + pick2;
// }
// int main(){
//     vector<int>v1={2,3,6,7};
//     int totalCount=subSequence(0,7,0,v1);
//     cout<<"Total ways: "<<totalCount<<endl;
//     return 0;
// }










// Question 1: Count Subsets with Sum $K$ (Finite Supply)Pattern: Finite Supply (Each element used at most once),
// Return int count.Problem: Given an array of positive integers arr and an integer K,
//  return the total number of non-empty subsets whose elements sum up to exactly K.




// #include<iostream>
// #include<vector>
// using namespace std;
// int subsets(int index,int target,int currentSum,vector<int>&arr){
//     if(index==arr.size()){
//         if(currentSum==target){
//             return 1;
//         }
//     return 0;
//     }
//     // PICK VALUES.......
//     int pick1=subsets(index+1,target,currentSum+arr[index],arr);
//     // NOT PICK..........
//     int pick2=subsets(index+1,target,currentSum,arr);
//     return pick1+pick2;
// }
// int main(){
//     vector<int>v1={1,3,4,6};
//     int countSum=subsets(0,6,0,v1);
//     cout<<"TOTAL SUBSETS: "<<countSum<<endl;
// }








