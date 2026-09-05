// Step 1: LeetCode 46 (Permutations of Distinct Integers)
// Since there are no duplicates in LC 46, we do not need a seen set or visited array—just the pure in-place swap pattern.

// Write out the recursive helper function void backtrack(...) from memory directly into the chat:

// Parameters to pass

// Base case condition

// The for loop, the first swap, recursive call, and backtrack swap

// #include<iostream>
// #include<vector>
// using namespace std;
// void permuations(int index,vector<int>&arr,vector<vector<int>>&results){
//     if(index==arr.size()){
//         results.push_back(arr);
//         return ;
//     }

//     for(int i=index;i<arr.size();i++){
//         swap(arr[index],arr[i]);
//         permuations(index+1,arr,results);
//         swap(arr[index],arr[i]);
//     }
// }
// int main(){
//     vector<int>arr={2,3,4};
//     vector<vector<int>>results;
//     permuations(0,arr,results);
//     for(const auto& val:results){
//         cout<<"[";
//         for(int i:val){
//             cout<<i<<" ";
//         }
//         cout<<"]";
//     }
//     return 0;
// }

// Target: LeetCode 47 (Permutations II)
// Input: arr = {1, 1, 2} (contains duplicates)

// Goal: Generate only unique permutations without duplicate branches.
/*
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
void uniquePermutation(int index, vector<int> &arr, vector<vector<int>> &results)
{
    if (index == arr.size())
    {
        results.push_back(arr);
        return;
    }
    unordered_set<int> seen;
    for (int i = index; i < arr.size(); i++)
    {
        if (seen.find(arr[i]) != seen.end())
        {
            continue;
        }
        seen.insert(arr[i]);
        swap(arr[index], arr[i]);
        uniquePermutation(index + 1, arr, results);
        swap(arr[index], arr[i]);
    }
}
int main()
{
    vector<int> arr = {2, 3, 5, 2};
    vector<vector<int>> results;
    uniquePermutation(0,arr,results);
    for (const auto &val : results)
    {
        cout << "[";
        for (int i : val)
        {
            cout << i << " ";
        }
        cout << "]";
    }
    return 0;
}
*/

/*
Suppose you have integers from $1$ to $n$. A permutation of these numbers is considered a beautiful arrangement if for
every position $i$ ($1$-indexed, from $1$ to $n$):$\text{perm}[i]$ is divisible by $i$ ($\text{perm}[i] \pmod i == 0$),
OR$i$ is divisible by $\text{perm}[i]$ ($i \pmod{\text{perm}[i]} == 0$).
*/

// #include<iostream>
// #include<vector>
// using namespace std;
// void beautifulArrangement(int index,int n,vector<int>&bag,vector<vector<int>>&result){
//     if(index==n){
//         result.push_back(bag);
//         return ;
//     }
//     int pos = index + 1; // 1-based position

//     for (int i = index; i < n; i++) {
//         // Prune: Skip if NEITHER condition is satisfied
//         if (bag[i] % pos != 0 && pos % bag[i] != 0) {
//             continue;
//         }

//         swap(bag[index], bag[i]);
//         beautifulArrangement(index + 1, n, bag, result);
//         swap(bag[index], bag[i]); // Backtrack
//     }
// }

// int main(){
//    int n = 7;
//     vector<int> bag;
//     for (int i = 1; i <= n; i++) {
//         bag.push_back(i); // Populate bag with [1, 2, 3, 4, 5, 6, 7]
//     }

//     vector<vector<int>> result;
//     beautifulArrangement(0, n, bag, result);

//     cout << "Total: " << result.size() << "\n";
//     for (const auto& val : result) {
//         cout << "[ ";
//         for (int i : val) {
//             cout << i << " ";
//         }
//         cout << "]\n";
//     }
//     return 0;
// }

/*Suppose you have $n$ integers labeled $1$ through $n$. A permutation of these $n$ integers perm ($1$-indexed) is
 considered a beautiful arrangement if for every $i$ ($1 \le i \le n$), at least one of the following is true:
perm[i] % i == 0 (perm[i] is divisible by $i$)i % perm[i] == 0 ($i$ is divisible by perm[i])
*/

/*
#include<iostream>
#include<vector>
using namespace std;
void arrangment(int index,int n,vector<int>&bag,vector<vector<int>>&results){
    if(n>15){
        return;
    }
    if(index==n){
        results.push_back(bag);
        return ;
    }

    int pos=index+1;
    for(int i=index;i<n;i++){
        if(bag[i]%pos!=0&&pos%bag[i]!=0){
            continue;
        }
        swap(bag[index],bag[i]);
        arrangment(index+1,n,bag,results);
        swap(bag[index],bag[i]);
    }
}
int main(){
    vector<int>bag;
    vector<vector<int>>results;
    int n=4;
    for(int i=1;i<=n;i++){
        bag.push_back(i);
    }
    arrangment(0,n,bag,results);
    for(const auto& val:results){
        cout<<"[";
        for(int num:val){
            cout<<num<<" ";
        }
        cout<<"]";
    }
    return 0;
}
*/

// // N QUEEN...
// #include <iostream>
// #include <vector>
// using namespace std;
// bool isSafe(int n, int row, int col, vector<string> &arr){
//     int r=row;
//     int c=col;
//     while(c>=0){
//         if(arr[r][c]=='Q'){
//             return false;
//         }
//     c--;
//     }
//     r=row;
//     c=col;
//     while(r>=0 && c>=0){
//         if(arr[r][c]=='Q'){
//             return false;
//         }
//     c--;
//     r--;
//     }
//     r=row;
//     c=col;
//     while(r<n&&c>=0){
//         if(arr[r][c]=='Q'){
//             return false;
//         }
//     r++;
//     c--;
//     }
//     return true;
// }
// void solve(int n,int col,vector<string>&arr,vector<vector<string>>&results){
//     if(col==n){
//         results.push_back(arr);
//         return;
//     }
//     for(int i=0;i<n;i++){
//         if(isSafe(n,i,col,arr)==true){
//             arr[i][col]='Q';
//             solve(n,col+1,arr,results);
//             arr[i][col]='.';
//         }
//     }
// }

// int main()
// {
//     int n=4;
//     vector<string> arr(n, string(n, '.'));
//     vector<vector<string>> bag;

//     // Start recursion from column 0
//     solve(n, 0, arr, bag);

//     // Print solutions
//     cout << "Total Solutions for N=" << n << ": " << bag.size() << "\n\n";
//     for (const auto &solution : bag) {
//         for (const string &row : solution) {
//             cout << row << "\n";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// bool isValid(int n,int row,int col,vector<string>&arr){
//     int r=row;
//     int c=col;
//     // LEFT SIDE STARIGHT
//     while(c>=0){
//         if(arr[r][c]=='Q'){
//             return false;
//         }
//     c--;
//     }
//     r=row;
//     c=col;
//     // UPPER DIGONAL
//     while(r>=0 && c>=0){
//         if(arr[r][c]=='Q'){
//             return false;
//         }
//     r--;
//     c--;
//     }
//     r=row;
//     c=col;
//     // LOWER DIGONAL
//     while(c>=0 && r<n){
//         if(arr[r][c]=='Q'){
//             return false;
//         }
//     r++;
//     c--;
//     }
//     return true;
// }
// void solve(int n,int col,vector<string>&arr,vector<vector<string>>&results){
//     if(col==n){
//         results.push_back(arr);
//         return;
//     }
//     for(int i=0;i<n;i++){
//         if(isValid(n,i,col,arr,results)==true){
//             arr[i][col]='Q';
//             solve(n,col+1,arr,results);
//             arr[i][col]='.';
//         }
//     }
// }
// int main(){
//     int n=9;
//     vector<string>arr(n,string (n,'.'));
//     vector<vector<string>>results;
//     solve(n,0,arr,results);
//     for(const auto val:results){
//         for(auto num:val){
//             cout<<num<<" \n";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// LC 37..
/*
#include<iostream>
#include<vector>
using namespace std;
bool isValid(int row,int col,char d,vector<vector<char>>&arr){
    for(int i=0;i<9;i++){
        if(arr[row][i]==d){
            return false;
        }
    }
    for(int j=0;j<9;j++){
        if(arr[j][col]==d){
            return false;
        }
    }
    int r=(row/3)*3;
    int c=(col/3)*3;
    for(int i=r;i<r+3;i++){
        for(int j=c;j<c+3;j++){
            if(arr[i][j]==d){
                return false;
            }
        }
    }
    return true;
}

bool solve(vector<vector<char>>& board) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {

            if (board[i][j] == '.') { // 1. Double equals
                for (char c = '1'; c <= '9'; c++) {
                    if (isValid(i, j, c, board)) {
                        board[i][j] = c;

                        if (solve(board) == true) {
                            return true;
                        }

                        board[i][j] = '.'; // 2. Inside isValid
                    }
                }
                return false; // 3. Inside the empty cell block
            }

        }
    }
    return true; // All 81 cells checked and no '.' left
}
int main() {
    vector<string> raw = {
        "53..7....",
        "6..195...",
        ".98....6.",
        "8...6...3",
        "4..8.3..1",
        "7...2...6",
        ".6....28.",
        "...419..5",
        "....8..79"
    };

    vector<vector<char>> board(9, vector<char>(9));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) board[i][j] = raw[i][j];
    }

    solve(board);

    for (const auto& row : board) {
        for (char c : row) cout << c << " ";
        cout << "\n";
    }
    return 0;
}

*/

// #include<iostream>
// #include<vector>
// using namespace std;

// void targetSum(int index,int target,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(target==0){
//         results.push_back(bag);
//         return;
//     }
//     if(target<0||index==arr.size()){
//         return;
//     }
//     bag.push_back(arr[index]);
//     targetSum(index,target-arr[index],arr,bag,results);
//     bag.pop_back();
//     targetSum(index+1,target,arr,bag,results);
// }
// int main(){
//     vector<int>arr={2,3,6,7};
//     vector<int>bag;
//     vector<vector<int>>results;
//     targetSum(0,7,arr,bag,results);
//     for(const auto & val:results){
//         cout<<"[";
//         for(int num:val){
//             cout<<num<<" ";
//         }
//         cout<<"]";
//     }
//     return 0;
// }

// LC40..
// #include <iostream>
// #include <vector>
// #include<algorithm>
// using namespace std;
// void noDuplicates(int index, int target, vector<int> &arr, vector<int> &bag, vector<vector<int>>&results)
// {
//     if (target == 0)
//     {
//         results.push_back(bag);
//         return;
//     }
//     if (target < 0 || index == arr.size())
//     {
//         return;
//     }
//     bag.push_back(arr[index]);
//     noDuplicates(index + 1, target - arr[index], arr, bag, results);
//     bag.pop_back();
//     while (index + 1 < arr.size() && arr[index + 1] == arr[index])
//     {
//         index++;
//     }
//     noDuplicates(index + 1, target, arr, bag, results);
// }
// int main()
// {
//     vector<int> arr = {2, 2, 3, 4, 4, 3, 6, 7};
//     sort(arr.begin(),arr.end());
//     vector<int> bag;
//     vector<vector<int>> results;
//     noDuplicates(0, 7, arr, bag, results);
//     for (const auto &val : results)
//     {
//         cout << "[";
//         for (int num : val)
//         {
//             cout << num << " ";
//         }
//         cout << "]";
//     }
//     return 0;
// }



// LC 90..

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void subsets(int index,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(index==arr.size()){
//         results.push_back(bag);
//         return;
//     }
//     bag.push_back(arr[index]);
//     subsets(index+1,arr,bag,results);
//     bag.pop_back();
//     while(index+1<arr.size()&&arr[index+1]==arr[index]){
//         index++;
//     }
//     subsets(index+1,arr,bag,results);
// }
// int main(){
//     vector<int>arr={1,2,2};
//     sort(arr.begin(),arr.end());
//     vector<int>bag;
//     vector<vector<int>>results;
//     subsets(0,arr,bag,results);
//     for(const auto &val:results){
//         cout<<"[";
//         for(int num:val){
//             cout<<num<<" ";
//         }
//         cout<<"]";
//     }
//     return 0;
// }





// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

// Example 1:

// Input: nums = [1, 2, 3]

// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void permutaion(int index,vector<int>&arr,vector<vector<int>>&results){
    if(index==arr.size()){
        results.push_back(arr);
        return;
    }
    for(int i=index;i<arr.size();i++){
        swap(arr[index],arr[i]);
        permutaion(index+1,arr,results);
        swap(arr[index],arr[i]);
    }

}
int main(){
    vector<int>arr={1,2,5};
    sort(arr.begin(),arr.end());
    vector<vector<int>>results;
    permutaion(0,arr,results);
    for(const auto& val:results){
        cout<<"[";
        for(int num:val){
            cout<<num<<" ";
        }
        cout<<"]";
    }
    return 0;
}
*/




// LEETCODE 47...

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<unordered_set>
// using namespace std;
// void permutation(int index,vector<int>&arr,vector<vector<int>>&results){
//     if(index==arr.size()){
//         results.push_back(arr);
//         return;
//     }
//     unordered_set<int>seen;
//     for(int i=index;i<arr.size();i++){
//          if(seen.find(arr[i])!=seen.end()){
//                 continue;
//             }
//         seen.insert(arr[i]);
//         swap(arr[index],arr[i]);
//         permutation(index+1,arr,results);
//         swap(arr[index],arr[i]);

//     }
// }
// int main(){
//     vector<int>arr={2,1,2};
//     vector<vector<int>>results;
//     permutation(0,arr,results);
//     for(const auto& val:results){
//         cout<<"[";
//         for(int num:val){
//             cout<<num<<" ";
//         }
//         cout<<"]";
//     }
//     return 0;
// }




// Given a string s, partition s such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of s.

 

// Example 1:

// Input: s = "aab"
// Output: [["a","a","b"],["aa","b"]]
// Example 2:

// Input: s = "a"
// Output: [["a"]]



// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool substring(const string& s,int left,int right){
//     while(left<right){
//         if(s[left]!=s[right]){
//             return false;
//         }
//     left++;
//     right--;
//     }
//     return true;
// }
// void solve(int index,const string& s,vector<string>&bag,vector<vector<string>>&results){
//     if(index==s.size()){
//         results.push_back(bag);
//         return;
//     }
//     for(int i=index;i<s.size();i++){
//         if(substring(s,index,i)==true){
//             bag.push_back(s.substr(index,i-index+1));
//             solve(i+1,s,bag,results);
//             bag.pop_back();
//         }
//     }
// }
// int main(){
//     string s="aab";
//     vector<string>bag;
//     vector<vector<string>>results;
//     solve(0,s,bag,results);
//     for(const auto val:results){
//         cout<<"[";
//         for(auto num:val){
//             cout<<"\""<<num<<"\"";
//         }
//         cout<<"]";
//     }

// }






//SUDOKU..
/*
#include<iostream>
#include<vector>
using namespace std;
bool isValid(int row,int col,char d,vector<vector<char>>&board){
    for(int i=0;i<9;i++){
        if(board[row][i]==d){
            return false;
        }
    }
    for(int j=0;j<9;j++){
        if(board[j][col]==d){
            return false;
        }
    }
    int r=(row/3)*3;
    int c=(col/3)*3;
    for(int i=r;i<r+3;i++){
        for(int j=c;j<c+3;j++){
            if(board[i][j]==d){
                return false;
            }
        }
    }
    return true;
}
bool solve(vector<vector<char>>& board) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {

            if (board[i][j] == '.') { // 1. Double equals
                for (char c = '1'; c <= '9'; c++) {
                    if (isValid(i, j, c, board)) {
                        board[i][j] = c;

                        if (solve(board) == true) {
                            return true;
                        }

                        board[i][j] = '.'; 
                    }
                }
                return false;
            }

        }
    }
    return true;
}
*/





// #include<iostream>
// #include<vector>
// using namespace std;
// bool isValid(int row,int col,char d,vector<vector<char>>&bag){
//     // HORIZONTAL CHECK IN ROW..
//     for(int i=0;i<9;i++){
//         if(bag[row][i]==d){
//             return false;
//         }
//     }
//     // VERTICAL CHECK IN COLOUMN..
//     for(int j=0;j<9;j++){
//         if(bag[j][col]==d){
//             return false;
//         }
//     }
//     int r=(row/3)*3;
//     int c=(col/3)*3;
//     for(int i=r;i<r+3;i++){
//         for(int j=c;j>j+3;j++){
//             if(bag[r][j]==d){
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool solve(vector<vector<char>>&bag){
//     for(int i=0;i<9;i++){
//         for(int j=0;j<9;j++){
//             if(bag[i][j]=='.'){
//                 for(char c='1';c<='9';c++){
//                     if(isValid(i,j,c,bag)==true){
//                         bag[i][j]=c;
//                         if(solve(bag)==true){
//                             return true;
//                         }
//                         bag[i][j]='.';
//                     }
//                 }
//                 return false;
//             }
//         }
//     }
//     return true;
// }





// #include<iostream>
// #include<vector>
// using namespace std;

// bool isValid(int row,int col,char d,vector<vector<char>>&bag){
//     for(int i=0;i<9;i++){
//         if(bag[row][i]==d){
//             return false;
//         }
//     }
//     for(int i=0;i<9;i++){
//         if(bag[i][col]==d){
//             return false;
//         }
//     }
//     int r=(row/3)*3;
//     int c=(col/3)*3;
//     for(int i=r;i<r+3;i++){
//         for(int j=c;j<c+3;j++){
//             if(bag[i][j]==d){
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool solve(vector<vector<char>>&bag){
//     for(int i=0;i<9;i++){
//         for(int j=0;j<9;j++){
//             if(bag[i][j]=='.'){
//                 for(char c='1';c<='9';c++){
//                     if(isValid(i,j,c,bag)==true){
//                         bag[i][j]=c;
//                         if(solve(bag)==true){
//                             return true;
//                         }
//                         bag[i][j]='.';
//                     }
//                 }
//                 return false;
//             }
//         }
//     }
//     return true;
// }







// #include<iostream>
// #include<vector>
// using namespace std;
// bool isSafe(int v,int node,int c,vector<int>&bag,vector<vector<int>>&results){
//     for(int i=0;i<v;i++){
//         if(results[node][i]==1 && bag[i]==c){
//             return false;
//         }
//     }
//     return true;
// }
// bool solve(int v,int node,int m,vector<int>&bag,vector<vector<int>>&results){
//     if(node==v){
//         return true;
//     }
//     for(int i=1;i<=m;i++){
//         if(isSafe(v,node,i,bag,results)==true){
//             bag[node]=i;
//             if(solve(v,node+1,m,bag,results)==true){
//                 return true;
//             }
//             bag[node]=0;
//         }
        
//     }
//     return false;
// }
