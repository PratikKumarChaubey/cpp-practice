/// LEETCODE-46.....

// #include<iostream>
// #include<vector>
// using namespace std;
// void permutation(int index,vector<int>&arr,vector<vector<int>>&bag){
//     if(index==arr.size()){
//         bag.push_back(arr);
//         return;
//     }
//     for(int i=index;i<arr.size();i++){
//         swap(arr[index],arr[i]);
//         permutation(index+1,arr,bag);
//         swap(arr[index],arr[i]);
//     }
// }
// int main(){
//     vector<int>v1={2,4,6,7};
//     vector<vector<int>>results;
//     permutation(0,v1,results);
//     for(const auto vals:results){
//         cout<<"[";
//         for(int num:vals){
//             cout<<num<<" ";
//         }
//         cout<<"]";
//     }
// }



//LEET CODE 78



// #include<iostream>
// #include<vector>
// using namespace std;
// void subsets(int index,vector<int>&arr,vector<int>&bag,vector<vector<int>>&targets){
//     if(index==arr.size()){
//         targets.push_back(bag);
//         return;
//     }
//     bag.push_back(arr[index]);
//     subsets(index+1,arr,bag,targets);
//     bag.pop_back();
//     subsets(index+1,arr,bag,targets);
// }
// int main(){
//     vector<int>arr={3,5,6,7};
//     vector<vector<int>>results;
//     vector<int>bag;
//     subsets(0,arr,bag,results);
//     for(const auto val:results){
//         cout<<"[";
//         for(int nums:val){
//             cout<<nums<<" ";
//         }
//         cout<<"]";
//     }
// }








// Problem 2: LeetCode 90 — Subsets II (Duplicates Allowed)
// Problem Statement:

// Given an integer array nums that may contain duplicates, return all possible subsets (the power set). 
//The solution set must not contain duplicate subsets. Return the solution in any order.

// Example: nums = [1, 2, 2]

// Output: [[], [1], [1, 2], [1, 2, 2], [2], [2, 2]]

// (Notice [2] and [1, 2] only appear once each, even though 2 appears twice in nums).

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void subsets(int index,vector<int>&arr,vector<int>&bag,vector<vector<int>>&targets){
//     if(index==arr.size()){
//         targets.push_back(bag);
//         return;
//     }
//     bag.push_back(arr[index]);
//     subsets(index+1,arr,bag,targets);
//     bag.pop_back();
//     while(index+1<arr.size() &&arr[index+1]==arr[index]){
//         index++;
//     }
//     subsets(index+1,arr,bag,targets);
// }  
// int main(){
//     vector<int>arr={1,2,2};
//     vector<int>bag;
//     vector<vector<int>>targets;
//     sort(arr.begin(),arr.end());
//     subsets(0,arr,bag,targets);
//     for(const auto val:targets){
//         cout<<"[";
//         for(int nums:val){
//             cout<<nums<<" ";
//         }
//         cout<<"]";
//     }
// }





// GFG: Print all subsequences of a string (warm-up, pure pattern recall)
// LC 78: Subsets
// LC 90: Subsets II
// CSES: Apple Division
// LC 39: Combination Sum
// LC 40: Combination Sum II
// LC 216: Combination Sum III
// LC 494: Target Sum
// LC 77: Combinations
// LC 17: Letter Combinations of a Phone Number
// LC 46: Permutations
// LC 47: Permutations II
// LC 22: Generate Parentheses (your flagged blind-redo)
// LC 131: Palindrome Partitioning
// LC 93: Restore IP Addresses







// Given an array of distinct integers candidates and a target integer target, 
// return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. 
// Two combinations are unique if the frequency of at least one of the chosen numbers is different.

// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations 
// for the given input



// #include<iostream>
// #include<vector>
// using namespace std;
// void sum(int index,int currentSum,int target,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(currentSum>target){
//         return;
//     }
//     if(currentSum==target){
//         results.push_back(bag);
//         return;
//     }
//     if(index==arr.size()){
//         return;
//     }
//     bag.push_back(arr[index]);
//     sum(index,currentSum+arr[index],target,arr,bag,results);
//     bag.pop_back();
//     sum(index+1,currentSum,target,arr,bag,results);
// }
// int main(){
//     vector<int>arr={2,3,4,6,7,1,4};
//     vector<int>bags;
//     vector<vector<int>>results;
//     sum(0,0,7,arr,bags,results);
//     for(const auto val:results){
//         cout<<"[";
//         for(int nums:val){
//             cout<<nums<<" ";
//         }
//         cout<<"]";
//     }
//     return 0;
// }





// Given a collection of candidate numbers (candidates) and a target number (target),
//  find all unique combinations in candidates where the candidate numbers sum to target.

// Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void noDuplicates(int index,int currentSum,int target,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(currentSum>target){
//         return;
//     }
//     if(currentSum==target){
//         results.push_back(bag);
//         return;
//     }
//     if(index==arr.size()){
//         return;
//     }
//     bag.push_back(arr[index]);
//     // PICK VALUES..
//     noDuplicates(index+1,currentSum+arr[index],target,arr,bag,results);
//     bag.pop_back();
//     while(index+1<arr.size()&& arr[index+1]==arr[index]){
//         index++;
//     }
//     noDuplicates(index+1,currentSum,target,arr,bag,results);
// }
// int main(){
//     vector<int>arr={2,5,2,1,2};
//     vector<int>bag;
//     vector<vector<int>>result;
//     sort(arr.begin(),arr.end());
//     noDuplicates(0,0,8,arr,bag,result);
//     for(const auto &val:result){
//         cout<<"[";
//         for(int nums:val){
//             cout<<nums<<" ";
//         }
//         cout<<"]";
//     }
//     return 0;
// }







// Question 1: Subsets / Power Set (LeetCode 78)Problem Statement:Given an integer array nums of unique elements, 
// return all possible subsets (the power set). The solution set must not contain duplicate subsets. Return the solution in any order.
// Example:Input: nums = [1, 2, 3]Output: [[], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3]]
// Constraints:$1 \le \text{nums.length} \le 10$$-10 \le \text{nums}[i] \le 10$All numbers in nums are unique.

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void printSubsequence(int index,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(index==arr.size()){
//         results.push_back(bag);
//         return;
//     }
//     bag.push_back(arr[index]);
//     // PICK...
//     printSubsequence(index+1,arr,bag,results);
//     bag.pop_back();
//     // VALUE POP BACK AND CHECK FOR DUPLICATE VALUES..
//     while(index+1<arr.size()&&arr[index+1]==arr[index]){
//         index++;
//     }
//     printSubsequence(index+1,arr,bag,results);
// }
// int main(){
//     vector<int>arr={2,4,7,2};
//     vector<int>bag;
//     vector<vector<int>>results;
//     sort(arr.begin(),arr.end());
//     printSubsequence(0,arr,bag,results);
//     for(const auto& val:results){
//         cout<<"[";
//         for(int nums:val){
//             cout<<nums<<" ";
//         }
//         cout<<"]";
//     }
//     return 0;
// }






// Question 2: Check if Any Subsequence Sum Equals KGoal:Given an array arr and a target integer k,
//  return true if there exists at least one subsequence whose sum equals k. Return false otherwise
//  .Hard Requirement:Do not explore the rest of the recursion tree once a valid subsequence is found. 
//  Use boolean propagation to stop further function calls immediately.
// Example 1:arr = [1, 2, 1], k = 2 $\rightarrow$ Returns trueExample 2:arr = [3, 4, 7], k = 2 $\rightarrow$ Returns false




// #include<iostream>
// #include<vector>
// using namespace std;
// bool subsequence(int index,int currentSum,int target,vector<int>&arr){
//     if(currentSum==target){
//         return true;
//     }
//     if(index==arr.size()){
//         return false;
//     }
//     if(subsequence(index+1,currentSum+arr[index],target,arr)==true){
//         return true;
//     }
//     if(subsequence(index+1,currentSum,target,arr)==true){
//         return true;
//     }
//     return false;
// }
// int main(){
//     vector<int>arr={2,3,4,6,7};
//     cout<<subsequence(0,0,7,arr);
//     return 0;
// }






// Question 3: Count All Subsequences with Sum Equal to KGoal:Given an integer array arr and an integer target,
// return the total count of subsequences whose sum equals target.Example 1: arr = [1, 2, 1], target = 2 $\rightarrow$ 
// Returns 2 (Subsets: [1, 1], [2])
// Example 2: arr = [1, 1, 1], target = 2 $\rightarrow$ Returns 3 (Three distinct ways to choose two 1s)

// #include<iostream>
// #include<vector>
// using namespace std;

// int countSubsequences(int index,int currentSum,int target,vector<int>&arr){
//     if(currentSum==target){
//         return 1;
//     }
//     if(index==arr.size()){
//         return 0;
//     }
//     int pick=countSubsequences(index+1,currentSum+arr[index],target,arr);
//     int notpick=countSubsequences(index+1,currentSum,target,arr);
//     return pick+notpick;
// }
// int main(){
//     vector<int>arr={1,2,3,4,4,2,4,9};
//     cout<<countSubsequences(0,0,9,arr);
//     return 0;
// }






// Given an array arr of $N$ integers, return a list containing the sums of all possible subsets of the array.
//  The output list should be sorted in non-decreasing order.Example 1:Input: arr = [2, 3]Output: [0, 2, 3, 5]Explanation: 
// Subsets are [] (sum 0), [2] (sum 2), [3] (sum 3), and [2, 3] (sum 5).Example 2:Input: arr = [5, 2, 1]Output: [0, 1, 2, 3, 5, 6, 7, 8]

// #include<iostream>
// #include<vector>
// using namespace std;
// void subsequence(int index,int currentSum,vector<int>&arr,vector<int>&results){
//     if(index==arr.size()){
//         results.push_back(currentSum);
//         return;
//     }
//     subsequence(index+1,currentSum+arr[index],arr,results);
//     subsequence(index+1,currentSum,arr,results);
// }
// int main(){
//     vector<int>arr={2,3};
//     vector<int>result;
//     subsequence(0,0,arr,result);
//     cout<<"[";
//     for(auto val:result){
//         cout<<val<<",";
//     }
//     cout<<"]";
//     return 0;
// }






// Question 6: Combination Sum I (LeetCode 39)
// Problem Statement:

// Given an array of distinct integers candidates and an integer target, 
//return all unique combinations of candidates where the chosen numbers sum to target. You may use the same element an unlimited number of times.

// Example 1:

// Input: candidates = [2, 3, 6, 7], target = 7

// Output: [[2, 2, 3], [7]]

// Example 2:

// Input: candidates = [2, 3, 5], target = 8

// Output: [[2, 2, 2, 2], [2, 3, 3], [3, 5]]




// #include<iostream>
// #include<vector>
// using namespace std;
// void printSubsequence(int index,int currentSum,int target,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(currentSum>target){
//         return;
//     }
//     if(currentSum==target){
//         results.push_back(bag);
//         return;
//     }
//     if(index==arr.size()){
//         return;
//     }
//     bag.push_back(arr[index]);
//     printSubsequence(index,currentSum+arr[index],target,arr,bag,results);
//     bag.pop_back();
//     printSubsequence(index+1,currentSum,target,arr,bag,results);
// }
// int main(){
//     vector<int>arr={2,3,6,7};
//     vector<int>bag;
//     vector<vector<int>>results;
//     printSubsequence(0,0,7,arr,bag,results);
//     for(const auto& val:results){
//         cout<<"[";
//         for(int num:val){
//             cout<<num<<" ";
//         }
//         cout<<"]";
//     }
//     return 0;
// }




// Given a collection of candidate numbers (candidates) that may contain duplicates and a target number (target),
// find all unique combinations where the candidate numbers sum to target.
// Constraints & Rules:

// Each number in candidates may only be used once per combination.

// The solution set must not contain duplicate combinations.

// Hard Requirement: Do not use std::set to filter duplicates. Handle duplicate suppression directly within the recursion / loop logic.

// Example 1:

// Input: candidates = [10, 1, 2, 7, 6, 1, 5], target = 8

// Output: [[1, 1, 6], [1, 2, 5], [1, 7], [2, 6]]

// Example 2:

// Input: candidates = [2, 5, 2, 1, 2], target = 5

// Output: [[1, 2, 2], [5]


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void subsequence(int index,int currentSum,int target,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(currentSum>target){
//         return;
//     }
//     if(currentSum==target){
//         results.push_back(bag);
//         return;
//     }
//     if(index==arr.size()){
//         return;
//     }
//     bag.push_back(arr[index]);
//     subsequence(index+1,currentSum+arr[index],target,arr,bag,results);
//     bag.pop_back();
//     while(index+1<arr.size()&&arr[index+1]==arr[index]){
//         index++;
//     }
//     subsequence(index+1,currentSum,target,arr,bag,results);

// }
// int main(){
//     vector<int>arr={10,1,2,7,6,1,5};
//     vector<int>bag;
//     vector<vector<int>>results;
//     sort(arr.begin(),arr.end());
//     subsequence(0,0,8,arr,bag,results);
//     for(const auto& val:results){
//         cout<<"[";
//         for(int num:val){
//             cout<<num<<" ";
//         }
//         cout<<"]";
//     }
//     return 0;
// }









