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


/*
#include<iostream>
#include<vector>
using namespace std;
void parenthesis(int n,int open,int close,string & bag,vector<string>&results){
    if(bag.length()==2*n){
        results.push_back(bag);
        return;      
    }
    if(open<n){
        bag.push_back('(');
        parenthesis(n,open+1,close,bag,results);
        bag.pop_back();
    }
    if(close<open){
        bag.push_back(')');
        parenthesis(n,open,close+1,bag,results);
        bag.pop_back();
    }
}
int main(){
    string a="";
    vector<string>results;
    parenthesis(3,0,0,a,results);
    for(const auto val : results){
    cout << val << "\n";
}
    return 0;
}
*/

/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void permutation(int index,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
    if(index==arr.size()){
        results.push_back(bag);
        return;
    }
    bag.push_back(arr[index]);
    permutation(index+1,arr,bag,results);
    bag.pop_back();
    while(index+1<arr.size() && arr[index+1]==arr[index]){
        index++;
    }
    permutation(index+1,arr,bag,results);
}
int main(){
    vector<int>arr{3,4,2,4};
    vector<int>bag;
    vector<vector<int>>results;
    sort(arr.begin(),arr.end());
    permutation(0,arr,bag,results);
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


// Input: An array of unique integers {1, 2, 3}.

// Task: Print all possible permutations (orderings) of the array. (There should be exactly 6 outputs for an array of size 3).

// Rules:

// You must use a bag to build the current permutation.

// You must use a visited boolean array (or vector) of the same size as the input to track which elements are currently inside your bag.

// Inside your recursive function, use a for loop starting from 0 to arr.size(). If the current element is not visited,
//  mark it visited, push to bag, recurse, then backtrack (pop from bag, unmark visited).





/*
#include<iostream>
#include<vector>
using namespace std;
void permutation(int index,vector<int>&arr,vector<vector<int>>&results){
    if(index==arr.size()){
        results.push_back(arr);
        return;
    }
    for(int i=index;i<arr.size();i++){
        swap(arr[index],arr[i]);
        permutation(index+1,arr,results);
        swap(arr[index],arr[i]);
    }
}
int main(){
    vector<int>arr{2,1,2};
    vector<vector<int>>results;
    permutation(0,arr,results);
    for(const auto val:results){
        cout<<"[";
        for(int num:val){
            cout<<num<<" ";
        }
        cout<<"]";
    }
}
*/




// Problem: LC77 Combinations
// Input: Two integers n and k. (e.g., n = 4, k = 2)

// Task: Return all possible combinations of k numbers chosen from the range [1, n].

// Expected output for n=4, k=2: [1,2], [1,3], [1,4], [2,3], [2,4], [3,4]

// The Mechanics:

// The Range: You are picking numbers from 1 to n.

// The Constraint: You only want combinations of exactly length k. (This is your base case).

// The Tree: This is exactly like the Subsets problem, but instead of iterating over an array, 
// you are iterating over the numbers 1 through n.

// The Pruning: Because combinations don't care about order ([1,2] is the same as [2,1]), 
// you must pass the next starting number into your recursive call to avoid going backward.


/*
#include<iostream>
#include<vector>
using namespace std;
void combinations(int index,int n,int k,vector<int>&container,vector<vector<int>>&results){
    if(container.size()==k){
        results.push_back(container);
        return;
    }
    if(index>n){
        return;
    }
    container.push_back(index);
    combinations(index+1,n,k,container,results);
    container.pop_back();
    combinations(index+1,n,k,container,results);

}
int main(){
    vector<int>bag;
    vector<vector<int>>results;
    combinations(1,4,2,bag,results);
    for(const auto val:results){
        cout<<"[";
        for(int num:val){
            cout<<num<<" ";
        }
        cout<<"]";
    }
}
*/


/*
#include<iostream>
#include<vector>
using namespace std;
void combination(int start,int n,int k,vector<int>&bag,vector<vector<int>>&results){
    if(bag.size()==k){
        results.push_back(bag);
        return;
    }
    if(start>n){
        return;
    }
    for(int i=start;i<=n;i++){
        bag.push_back(i);
        combination(i+1,n,k,bag,results);
        bag.pop_back();
    }
}
int main(){
    vector<int>bag;
    vector<vector<int>>results;
    combination(1,4,2,bag,results);
    for(const auto val:results){
        cout<<"[";
        for(int num:val){
            cout<<num<<" ";
        }
        cout<<"]";
    }
}
*/



/*
#include<iostream>
#include<vector>
using namespace std;
bool isvalid(int n,int row,int col,vector<string>&board){
    int r=row;
    int c=col;
    // HORIZONTAL CHECK..
    while(c>=0){
        if(board[row][c]=='Q'){
            return false;
        }
    c--;
    }
    r=row;
    c=col;
    while(r>=0){
        if(board[r][col]=='Q'){
            return false;
        }
    r--;
    }
    r=row;
    c=col;
    while(r>=0 && c>=0){
        if(board[r][c]=='Q'){
            return false;
        }
    r--;
    c--;
    }
    r=row;
    c=col;
    while(r<n && c>=0){
        if(board[r][c]=='Q'){
            return false;
        }
    r++;
    c--;
    }
    return true;
}
void solve(int col,int n,vector<string>&board,vector<vector<string>>&results){
    if(col==n){
        results.push_back(board);
        return;
    }
    for(int i=0;i<n;i++){
        if(isvalid(n,i,col,board)==true){
            board[i][col]='Q';
            solve(col+1,n,board,results);
            board[i][col]='.';
        }
  }
}


int main() {
    int n = 4;
    vector<vector<string>> results;
    
    // Create a vector of 'n' strings, each string containing 'n' dots
    vector<string> board(n, string(n, '.')); 
    
    solve(0, n, board, results);
    
    // Print the results
    for(int i=0; i < results.size(); i++) {
        for(int j=0; j < results[i].size(); j++) {
            cout << results[i][j] << endl;
        }
        cout << "--------\n";
    }
    return 0;
}
*/

/*
#include<iostream>
#include<vector>
using namespace std;
bool isValid(int row,int col,char &d,vector<vector<char>>&bag){
    // HORIZONTAL CHECK..
    for(int i=0;i<9;i++){
        if(bag[i][col]==d){
            return false;
        }
    }
    // VERTICAL CHECK..
    for(int j=0;j<9;j++){
        if(bag[row][j]==d){
            return false;
        }
    }
    // 3 CROSS 3 CHECK...
    int r=(row/3)*3;
    int c=(col/3)*3;
    for(int i=r;i<r+3;i++){
        for(int j=c;j<c+3;j++){
            if(bag[i][j]==d){
                return false;
            }
        }
    }
    return true;
}
bool sudoku(vector<vector<char>>&results){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(results[i][j]=='.'){
                for(char c='1';c<='9';c++){
                    if(isValid(i,j,c,results)==true){
                        results[i][j]=c;
                        if(sudoku(results)==true){
                            return true;
                        }
                        results[i][j]='.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}

*/


