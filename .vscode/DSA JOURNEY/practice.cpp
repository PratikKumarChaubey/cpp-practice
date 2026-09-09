// Level 1: The Core "Pick / Not-Pick" Mechanics
// 1. The Raw Subset Generator

// Input: An array of unique integers: {1, 2, 3}, and its size n = 3.

// Task: Write a recursive function that prints every possible subset.

// State Tracking: Pass a temporary array (or buffer) and an index tracking its current size.

// #include<iostream>
// #include<vector>
// using namespace std;

// void subsets(int index,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(index==arr.size()){
//         results.push_back(bag);
//         return;
//     }
//     bag.push_back(arr[index]);
//     subsets(index+1,arr,bag,results);
//     bag.pop_back();
//     subsets(index+1,arr,bag,results);
// }
// int main(){
//     vector<int>arr{3,4,2};
//     vector<int>bag;
//     vector<vector<int>>results;
//     subsets(0,arr,bag,results);
//     for(const auto val:results){
//         cout<<"[";
//         for(int num:val){
//             cout<<num<<" ";
//         }
//         cout<<"]";
//     }
//     return 0;
// }


/*
#include<iostream>
#include<vector>
using namespace std;

void targetSum(int index,int target,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
    if(target==0){
        results.push_back(bag);
        return;
    }
    if(index==arr.size()|| target<0){
        return;
    }
    bag.push_back(arr[index]);
    targetSum(index,target-arr[index],arr,bag,results);
    bag.pop_back();
    targetSum(index+1,target,arr,bag,results);
}
int main(){
    vector<int>arr{2,3,4,1,5};
    vector<int>bag;
    vector<vector<int>>results;
    targetSum(0,5,arr,bag,results);
    for(const auto val:results){
        cout<<"[";
        for(int num:val){
            cout<<num<<" ";
        }
        cout<<"]";
    }
    return 0;
}
*/


/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void targetSub(int index,int target,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
    if(target==0){
        results.push_back(bag);
        return;
    }
    if(index==arr.size()||target<0){
        return;
    }
    bag.push_back(arr[index]);
    targetSub(index+1,target-arr[index],arr,bag,results);
    bag.pop_back();
    while(index+1<arr.size() && arr[index+1]==arr[index]){
        index++;
    }
    targetSub(index+1,target,arr,bag,results);
}
int main(){
    vector<int>arr{1,2,3,4,1,5,6,3};
    vector<int>bag;
    vector<vector<int>>results;
    sort(arr.begin(),arr.end());
    targetSub(0,7,arr,bag,results);
    for(const auto val:results){
        cout<<"[";
        for(int num:val){
            cout<<num<<" ";
        }
        cout<<"]";
    }
    return 0;
}
*/






// Problem 6: Valid Parentheses
// Input: An integer n representing pairs of parentheses (e.g., n = 3).

// Task: Print all combinations of well-formed parentheses strings.

// Expected output for n=3: ((())), (()()), (())(), ()(()), ()()()

// The Mechanics:

// You aren't picking from an array anymore. You are building a string (or vector<char>) step by step.

// You have a maximum of n open brackets ( and n close brackets ).

// Branch 1 (Add Open): You can only add an open bracket if open_count < n.

// Branch 2 (Add Close): You can only add a close bracket if close_count < open_count. (This is the golden rule that prevents invalid sequences like ())().

// Base Case: When your string length reaches 2 * n



#include<iostream>
#include<vector>
using namespace std;
void parenthesis(int n,int current,int open,int close,string & bag,vector<string>results){
    if(current==2*n){
        results.push_back(bag);
        return;      
    }
    if(open<n){
        bag.push_back('(');
        parenthesis(n,current+1,open+1,close,bag,results);
        bag.pop_back();
    }
    if(close<n){
        bag.push_back(')');
        parenthesis(n,current+1,open,close+1,bag,results);
        bag.pop_back();
    }
}
int main(){
    string a;
    vector<string>results;
    parenthesis(5,0,0,0,a,results);
    for(const auto val:results){
        cout<<"[";
        for(int num:val){
            cout<<num<<" ";
        }
        cout<<"]";
    }
    return 0;
}
