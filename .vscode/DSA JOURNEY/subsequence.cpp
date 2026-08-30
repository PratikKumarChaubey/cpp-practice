// print all subsequences......
// #include<iostream>
// #include<vector>
// using namespace std;

// void printSubsequence(int index,vector<int>&arr,vector<int>&bag){
        
//     if (index == arr.size()) {
//         cout << "{ ";
//         for (int val : bag) {
//             cout << val << " ";
//         }
//         cout << "}\n";
//         return;
//     }
        
//     // pushback...
//     bag.push_back(arr[index]);
//     // take...
//     printSubsequence(index+1,arr,bag);

//     // remove values for not picking...
//     bag.pop_back();
//     printSubsequence(index+1,arr,bag);
// }
// int main(){
//     vector<int>v1={2,4,5,7,89,1};
//     vector<int>bag;
//     printSubsequence(0,v1,bag);
   
//     return 0;
// }






// print all subsequnce with sum k..




// #include<iostream>
// #include<vector>
// using namespace std;
// void subsetWithsumK(int index,int target,int currentSum,vector<int>&arr,vector<int>&bag){
//     if(index==arr.size()){
//         if(currentSum==target){
//             cout<<"{";
//             for(int val:bag){
//                 cout<<val<<" ";
//             }
//             cout<<"}";
//         }
//     return;
//     }
//     // PUSH BACK ...
//     bag.push_back(arr[index]);
//     // TAKE VALUES RECURSION FUCNTION....
//     subsetWithsumK(index+1,target,currentSum+arr[index],arr,bag);
//     bag.pop_back();
//     // DONT TAKE...
//     subsetWithsumK(index+1,target,currentSum,arr,bag);
// }
// int main(){
//     vector<int>v1={3,6,4,5,95,3,2,2,45,1};
//     vector<int>bag;
//     subsetWithsumK(0,7,0,v1,bag);
//     return 0;
// }








// PRINT FIRST SUBSEQUENCE WITH SUM K.....
// #include<iostream>
// #include<vector>
// using namespace std;
// bool firstsubWithsumK(int index,int target,int currentSum,vector<int>&arr,vector<int>&bag){
//     if(index==arr.size()){
//         if(currentSum==target){
//             cout<<"{";
//             for(int val:bag){
//                 cout<<val<<" ";
//             }
//             cout<<"}";
//             return true;
//         }
//         return false;
//     }
//     bag.push_back(arr[index]);
//     if(firstsubWithsumK(index+1,target,currentSum+arr[index],arr,bag)==true){
//         return true;
//     };
//     bag.pop_back();
//     if(firstsubWithsumK(index+1,target,currentSum,arr,bag)==true){
//         return true;
//     }
//     return false;
// }
// int main(){
//     vector<int>v1={2,3,4,5,7,11,9,1};
//     vector<int>bag;
//     firstsubWithsumK(0,11,0,v1,bag);
//     return 0;
// }



// Write a pure recursive counting function.
//  Do not use a global variable, do not print, and do not use a helper bag vector (since we only care about the count, not the elements).



// #include<iostream>
// #include<vector>
// using namespace std;
// int countSumwithK(int index,int target,int currentSum,vector<int>&arr){
//     if(index==arr.size()){
//         if(currentSum==target){
//             return 1;
//         }
//     return 0;
//     }
//     int count1=countSumwithK(index+1,target,currentSum+arr[index],arr);
//     int count2=countSumwithK(index+1,target,currentSum,arr);
//     return count1+count2;
// }
// int main(){
//     vector<int>v1={2,5,9,1,2,3,5,2};
//     cout<<countSumwithK(0,9,0,v1);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     cout<<8<<endl;
//     return 0;
// }








/// LEETCODE 39.....

// Given an array of distinct integers candidates and a target integer target,
// return a list of all unique combinations where the chosen numbers sum to target. You may use the same number an unlimited number of times.

// Core Recursive Pattern: Unbounded Choice
// In standard subset generation, you decide whether to take arr[i] and move to i + 1. In Combination Sum I, 
//because elements can be reused indefinitely:

// Pick Branch: If arr[i] <= target, include arr[i] in the current combination, subtract arr[i] from target, and stay at index i.

// Not-Pick Branch: Do not include arr[i], keep target unchanged, and advance to index i + 1.



// #include<iostream>
// #include<vector>
// using namespace std;
// void subSequenceSumK(int index,int target,int currentSum,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(currentSum==target){
//             results.push_back(bag);
//             return;
//     }
//     if (currentSum > target || index == arr.size()) {
//     return;
//     }
    
//     bag.push_back(arr[index]);
//     // PICK FROM SAME INDEX......
//     subSequenceSumK(index,target,currentSum+arr[index],arr,bag,results);
//     //POP BACK AND PICK FROM OTHER INDEXES AS WELL.
//     bag.pop_back();

//     subSequenceSumK(index+1,target,currentSum,arr,bag,results);
//     // N0T TAKE...
// }
// int main(){
//     vector<int>candidates={2,3,6,7};
//     vector<int>bags;
//     vector<vector<int>>results;
//     subSequenceSumK(0,7,0,candidates,bags,results);
//     for(const auto& combination:results){
//         cout<<"[";
//         for(int nums:combination){
//             cout<<nums<<" ";
//         }
//         cout<<"]"<<endl;
//     }
//     return 0;
// }










// The Problem Statement
// Given a collection of candidate numbers (candidates) and a target number (target), 
//find all unique combinations where the candidate numbers sum to target.

// Example: candidates = [10, 1, 2, 7, 6, 1, 5], target = 8



// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void uniqueSubset(int index,int target,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(target==0){
//         return results.push_back(bag);
//     }
//     if(index>=arr.size()|| target<0){
//         return;
//     }
//     if(arr[index]>target){
//         return;
//     }
//     if(arr[index+1]==arr[index]){
//         return;
//     }
//     bag.push_back(arr[index]);
//     uniqueSubset(index+1,target-arr[index],arr,bag,results);
//     bag.pop_back();
//     uniqueSubset(index+1,target,arr,bag,results);
// }
// int main(){
//     vector<int>arr={10, 1, 2, 7, 6, 1, 5};
//     sort(arr.begin(),arr.end());
//     vector<int>bag;
//     vector<vector<int>>results;
//     uniqueSubset(0,8,arr,bag,results);
//     for(const auto& val:results){
//         cout<<"[";
//         for(int nums:val){
//             cout<<nums<<" ";
//         }
//         cout<<"]";
//     }
// }






// LEETCODE 90


// #include<iostream>
// #include<vector>
// using namespace std;

// void nonDuplicates(int index,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(index==arr.size()){
//         results.push_back(bag);
//         return;
//     }
  
//     bag.push_back(arr[index]);
//     nonDuplicates(index+1,arr,bag,results);
//     bag.pop_back();
//     while(index+1<arr.size() &&arr[index+1]==arr[index]){
//         index++;
//     }
//     nonDuplicates(index+1,arr,bag,results);
// }
// int main(){
//     vector<int>nums={1,2,2};
//     vector<int>bags;
//     vector<vector<int>>results;
//     nonDuplicates(0,nums,bags,results);
//     for(const auto& val:results){
//         cout<<"{";
//         for(int num:val){
//             cout<<num<<" ";
//         }
//         cout<<"}";
//     }

//     return 0;
// }









// Check if ANY Subsequence has Sum = K (Striver L7 / GFG)

// Core Skill: Change void to bool. If base case finds sum, return true. If pick() == true return true, else return not_pick().

// Key Takeaway: Understanding Pattern 2 (Early Exit / Stop on First Match).



// #include<iostream>
// #include<vector>
// using namespace std;
// bool checkSumK(int index,int target,int currentSum,vector<int>&arr,vector<int>bag){
//     if(currentSum==target){
//         cout<<"[";
//         for(auto val:bag){
//             cout<<val<<" ";
//         }
//         cout<<"]";
//         return true;
//     }if(index==arr.size()){
//         return false;
//     }
//     bag.push_back(arr[index]);
//     if(checkSumK(index+1,target,currentSum+arr[index],arr,bag)==true){
//         return true;
//     }
//     bag.pop_back();\
//     if(checkSumK(index+1,target,currentSum,arr,bag)==true){
//         return true;
//     }
//     return false;
// }
// int main(){
//     vector<int>v1={1,2,1};
//     vector<int>bag;
//     checkSumK(0,2,0,v1,bag);
//     return 0;
// }






// LeetCode 78: SubsetsGiven an integer array nums of unique elements, return all possible subsets (the power set) in any order. 
//  Input: nums = [1, 2, 3]Output: [[], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3]]Constraint: No duplicate elements in nums. 
//  That means no sorting or duplicate-skipping loops needed—just the clean binary tree.  
//  Core Checklist Before You TypeBase Case: Has index reached nums.size()? Push bag to results and return.Pick Branch: Add nums[index],
//   recurse to index + 1, then backtrack (pop_back()).Not-Pick Branch: Recurse directly to index + 1.



// #include<iostream>
// #include<vector>
// using namespace std;
// void allSubset(int index,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(index==arr.size()){
//         results.push_back(bag);
//         return;
//     }
//     bag.push_back(arr[index]);
//     // PICK.. 
//     allSubset(index+1,arr,bag,results);
//     // POP AND THEN MOVE TO NOT PICK..
//     bag.pop_back();
//     allSubset(index+1,arr,bag,results);

// }
// int main(){
//     vector<int>arr={1,2,3,4};
//     vector<int>bag;
//     vector<vector<int>>results;
//     allSubset(0,arr,bag,results);
//     for(const auto val:results){
//         cout<<"[";
//         for(int num:val){
//             cout<<num<<" ";
//         }
//         cout<<"]";
//     }
// }







// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void powerSet(int index,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(index==arr.size()){
//         results.push_back(bag);
//         return;
//     }
//     bag.push_back(arr[index]);
//     powerSet(index+1,arr,bag,results);
//     bag.pop_back();
//     while(index+1<arr.size()&&arr[index+1]==arr[index]){
//         index++;
//     }
//     powerSet(index+1,arr,bag,results);
// }
// int main(){
//     vector<int>arr={2,5,6,43};
//     vector<int>bag;
//     vector<vector<int>>results;
//     sort(arr.begin(),arr.end());
//     powerSet(0,arr,bag,results);
//     for(const auto val:results){
//         cout<<"[";
//         for(int num:val){
//             cout<<num<<" ";
//         }
//         cout<<"]";
//     }
// }







// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void sumofSubsequence(int index, int currentSum, vector<int>& arr, vector<int>& results) {
//     if (index == arr.size()) {
//         results.push_back(currentSum);
//         return;
//     }

//     // Pick branch: add arr[index] to the sum
//     sumofSubsequence(index + 1, currentSum + arr[index], arr, results);

//     // Not-pick branch: pass currentSum as is
//     sumofSubsequence(index + 1, currentSum, arr, results);
// }

// int main() {
//     vector<int> arr = {2, 3, 5, 7, 9, 15};
//     vector<int> results;

//     sumofSubsequence(0, 0, arr, results);
//     sort(results.begin(), results.end());

//     for (int val : results) {
//         cout << "[" << val << "] ";
//     }
//     cout << endl;

//     return 0;
// }


