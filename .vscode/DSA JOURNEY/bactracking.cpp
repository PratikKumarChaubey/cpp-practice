// // Question 1: Combination Sum (Pick / Don't Pick)
// // Problem: Given an array of distinct integers candidates and an integer target, return all unique combinations where the chosen numbers sum to target. You may reuse the same element unlimited times.

// // Input: candidates = [2, 3, 6, 7], target = 7

// // Expected Output: [[2, 2, 3], [7]]

// // Core Challenge:

// // What is the base case?

// // In the recursive call, why does the index remain the same when you "pick", but increment when you "don't pick"?

// // #include <iostream>
// // #include <vector>
// // using namespace std;
// // void combinationSum(int index, int target, vector<int> &arr, vector<int> &bag, vector<vector<int>> &results)
// // {
// //     if(target==0){
// //         results.push_back(bag);
// //         return;
// //     }
// //     if(index==arr.size()||target<0){
// //         return;
// //     }

// //     bag.push_back(arr[index]);
// //     combinationSum(index , target - arr[index], arr, bag, results);
// //     bag.pop_back();
// //     combinationSum(index + 1, target, arr, bag, results);
// // }
// // int main()
// // {
// //     vector<int> arr = {2, 3, 6, 7};
// //     vector<int> bag;
// //     vector<vector<int>> results;
// //     combinationSum(0, 7, arr, bag, results);
// //     for (const auto val : results)
// //     {
// //         cout << "[";
// //         for (auto num : val)
// //         {
// //             cout << num << " ";
// //         }
// //         cout << "]";
// //     }
// //     return 0;
// // }





// // #include<iostream>
// // #include<vector>
// // using namespace std;

// // bool isCheck(int v,int c,int node,vector<int>&color,vector<vector<int>>& edges){
// //     for(int i=0;i<v;i++){
// //         if(edges[node][i]==1 && color[i]==c){
// //             return false;
// //         }
// //     }
// //     return true;
// // }
// // bool graphColor(int v,int m ,int node,vector<int>&color,vector<vector<int>>&edges){
// //     if(node==v){
// //         return true;
// //     }
// //     for(int i=1;i<=m;i++){
// //         if(isCheck(v,i,node,color,edges)==true){
// //             color[node]=i;
// //             if(graphColor(v,m,node+1,color,edges)==true){
// //                 return true;
// //             }
// //             color[node]=0;
// //         }
// //     }
// //     return false;
// // }






// // #include<iostream>
// // #include<vector>
// // using namespace std;

// // bool isCheck(int v,int node,int c,vector<int>&color,vector<vector<int>>&graph){
// //     for(int i=0;i<v;i++){
// //         if(graph[node][i]==1 && color[node]==c){
// //             return false;
// //         }
// //     }
// //     return true;
// // }
// // bool solve(int v,int node,int m,vector<int>&color,vector<vector<int>>&graph){
// //     if(node==v){
// //         return true;
// //     }
// //     for(int i=1;i<=m;i++){
// //         if(isCheck(v,node,i,color,graph)==true){
// //             color[node]=i;
// //             if(solve(v,node+1,m,color,graph)==true){
// //                 return true;
// //             }
// //             color[node]=0;
// //         }
// //     }
// //     return false;
// // }




// // N QUEENS....
// /*
// #include<iostream>
// #include<vector>
// using namespace std;

// bool isValid(int row,int col,int n,vector<string>&arr,vector<vector<string>>&bag){
//     int r=row;
//     int c=col;
//     // LEFT OF THE COLOUMN.....
//     while(c>=0){
//         if(arr[r][c]=='Q'){
//             return false;
//         }
//     c--;
//     }
//     r=row;
//     c=col;
//     //Upper Left Digonal
//     while(r>=0&&c>=0){
//         if(arr[r][c]=='Q'){
//             return false;
//         }
//     r--;
//     c--;
//     }
//     r=row;
//     c=col;
//     //LOWER LEFT DIGONAL....
//     while(r<n&&c>=0){
//         if(arr[r][c]=='Q'){
//             return false;
//         }
//     r++;
//     c--;
//     }
//     return true;
// }

// void Nqueen(int col,int n,vector<string>&arr,vector<vector<string>>&bag){
//     if(col==n){
//         bag.push_back(arr);
//         return;
//     }
//     for(int i=0;i<n;i++){
//         if(isValid(i,col,n,arr,bag)==true){
//             arr[i][col]='Q';
//             Nqueen(col+1,n,arr,bag);
//             arr[i][col]='.';
//         }
//     }
// }

// */



// // LEET CODE 46....

// // #include<iostream>
// // #include<vector>
// // #include<algorithm>
// // using namespace std;

// // void permutation(int index,vector<int>&arr,vector<vector<int>>&results){
// //     if(index==arr.size()){
// //         results.push_back(arr);
// //         return;
// //     }
// //     for(int i=index;i<arr.size();i++){
// //         swap(arr[index],arr[i]);
// //         permutation(index+1,arr,results);
// //         swap(arr[index],arr[i]);
// //     }
// // }
// // int main(){
// //     vector<int>arr={1,2,3};
// //     vector<vector<int>>results;
// //     sort(arr.begin(),arr.end());
// //     permutation(0,arr,results);
// //     for(const auto val:results){
// //         cout<<"[";
// //         for(int num:val){
// //             cout<<num<<" ";
// //         }
// //         cout<<"]";
// //     }
// //     return 0;
// // }




// // LEET-CODE 47...
// /*
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
//         if(seen.find(arr[i])!=seen.end()){
//                 continue;
//         }
//         seen.insert(arr[i]);
//         swap(arr[index],arr[i]);
//         permutation(index+1,arr,results);
//         swap(arr[index],arr[i]);
//     }
// }
// int main(){
//     vector<int>arr={1,2,2};
//     vector<vector<int>>results;
//     sort(arr.begin(),arr.end());
//     permutation(0,arr,results);
//     for(const auto val:results){
//         cout<<"[";
//         for(int num:val){
//             cout<<num<<" ";
//         }
//         cout<<"]";
//     }
//     return 0;
// }

// */


// /*
// #include<iostream>
// #include<vector>
// using namespace std;

// bool isValid(int v,int node,int c,vector<int>&color,vector<vector<int>>&graph){
//     for(int i=0;i<v;i++){
//         if(graph[node][i]==1 && color[i]==c){
//             return false;
//         }
//     }
//     return true;
// }
// bool solve(int node,int v,int m,vector<int>&color,vector<vector<int>>&graph){
//     if(node==v){
//         return true;
//     }
//     for(int i=1;i<=m;i++){
//         if(isValid(v,node,i,color,graph)==true){
//             color[node]=i;
//             if(solve(node+1,v,m,color,graph)==true){
//                 return true;
//             }
//             color[node]=0;
//         }
//     }
//     return false;
// }

// */



// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // bool isValid(int row,int col,char d,vector<vector<char>>&board){
// //     //ROW CHECK...
// //     for(int i=0;i<9;i++){
// //         if(board[row][i]==d){
// //             return false;
// //         }
// //     }
// //     // COL CHECK..
// //     for(int i=0;i<9;i++){
// //         if(board[i][col]==d){
// //             return false;
// //         }
// //     }

// //     // 3 CROSS 3 GRID-CHECK..
// //     int r=(row/3)*3;
// //     int c=(col/3)*3;
// //     for(int i=r;i<r+3;i++){
// //         for(int j=c;j<c+3;j++){
// //         if(board[i][j]==d){
// //             return false;
// //         }
// //         }
// //     }
// //     return true;
// // }

// // bool solveboard(vector<vector<char>>&board){
// //     for(int i=0;i<9;i++){
// //         for(int j=0;j<9;j++){
// //             if(board[i][j]=='.'){
// //                 for(char c='1';c<='9';c++){
// //                     if(isValid(i,j,c,board)==true){
// //                         board[i][j]=c;
// //                         if(solveboard(board)==true){
// //                             return true;
// //                         }
// //                         board[i][j]='.';
// //                     }
// //                 }
// //                 return false;
// //             }
// //         }
// //     }
// //     return true;
// // }








// // N QUEEN...

// /*
// #include<iostream>
// #include<vector>
// using namespace std;

// bool isValid(int row,int col,int n,vector<string>&arr){
//     int r=row;
//     int c=col;
//     while(c>=0){
//         if(arr[row][c]=='Q'){
//             return false;
//         }
//     c--;
//     }
//     r=row;
//     c=col;
//     while(c>=0 && r>=0){
//         if(arr[r][c]=='Q'){
//             return false;
//         }
//     r--;
//     c--;
//     }
//     r=row;
//     c=col;
//     while(r<n && c>=0){
//         if(arr[r][c]=='Q'){
//             return false;
//         }
//     r++;
//     c--;
//     }
//     return true;
// }
// void solve(int col,int n,vector<string>&arr,vector<vector<string>>&results){
//     if(col==n){
//         results.push_back(arr);
//         return;
//     }
//     for(int i=0;i<n;i++){
//         if(isValid(i,col,n,arr)==true){
//             arr[i][col]='Q';
//             solve(col+1,n,arr,results);
//             arr[i][col]='.';
//         }
//     }
// }

// */




// /*
// M COLOR PATTERN....





// #include<iostream>
// #include<vector>
// using namespace std;
// bool isValid(int node,int v,int c,vector<int>&arr,vector<vector<int>>&graph){
//     for(int i=0;i<v;i++){
//         if(graph[node][i]==1 && arr[i]==c){
//             return false;
//         }
//     }
//     return true;
// }
// bool solve(int node,int v,int m,vector<int>&arr,vector<vector<int>>&graph){
//     if(node==v){
//         return true;
//     }
//     for(int i=1;i<=m;i++){
//         if(isValid(node,v,i,arr,graph)==true){
//             arr[node]=i;
//             if(solve(node+1,v,m,arr,graph)==true){
//                 return true;
//             }
//             arr[node]=0;
//         }
//     }
//     return false;
// }

// */


// /*

// #include<iostream>
// #include<vector>
// using namespace std;
// bool isValid(int col,int row,char n,vector<vector<char>>&bag){
//     for(int i=0;i<9;i++){
//         if(bag[row][i]==n){
//             return false;
//         }
//     }
//     for(int i=0;i<9;i++){
//         if(bag[i][col]==n){
//             return false;
//         }
//     }
//     int c=(col/3)*3;
//     int r=(row/3)*3;
//     for(int i=r;i<r+3;i++){
//         for(int j=c;j<c+3;j++){
//             if(bag[i][j]==n){
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
//                     if(isValid(j,i,c,bag)==true){
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
// */




// #include<iostream>
// #include<vector>
// using namespace std;
// void permutation(int index,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(index==arr.size()){
//         results.push_back(bag);
//         return;
//     }
//     bag.push_back(arr[index]);
//     permutation(index+1,arr,bag,results);
//     bag.pop_back();
//     while(index<arr.size()-1 && arr[index+1]==arr[index]){
//         index++;
//     }
//     permutation(index+1,arr,bag,results);
// }
// int main(){
//     vector<int>arr={1,2,2};
//     vector<int>bag;
//     vector<vector<int>>results;
//     permutation(0,arr,bag,results);
//     for(const auto val:results){
//         cout<<"[";
//         for(auto num:val){
//             cout<<num<<" ";
//         }
//         cout<<"]";
//     }
//     return 0;
// }




// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void combinationSum(int index,int target,vector<int>&arr,vector<int>&bag,vector<vector<int>>&results){
//     if(target==0){
//         results.push_back(bag);
//         return;
//     }


//     if(index==arr.size()|| target<0){
//         return;
//     }
//     bag.push_back(arr[index]);
//     combinationSum(index+1,target-arr[index],arr,bag,results);
//     bag.pop_back();
//     while(index<arr.size()-1 && arr[index+1]==arr[index]){
//         index++;
//     }
//     combinationSum(index+1,target,arr,bag,results);
// }
// int main(){
//     vector<int>arr={1,4,3,4,3,6,5,9,3,1};
//     vector<int>bag;
//     vector<vector<int>>results;
//     sort(arr.begin(),arr.end());
//     combinationSum(0,9,arr,bag,results);
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
bool isValid(int row,int col,int n,vector<string>bag){
    int r=row;
    int c=col;
    // CHECK TO LEFT  OF A ROW..
    while(c>=0){
        if(bag[r][c]=='Q'){
            return false;
        }
    c--;
    }
    r=row;
    c=col;
    // UPPER LEFT DIGONAL...
    while(r>=0 && c>=0){
        if(bag[r][c]=='Q'){
            return false;
        }
    c--;
    r--;
    }
    c=col;
    r=row;
    while(r<n && c>=0){
        if(bag[r][c]=='Q'){
            return false;
        }
    r++;
    c--;
    }
    return true;
}
void solve(int col,int n,vector<string>&bag,vector<vector<string>>&results){
    if(col==n){
        results.push_back(bag);
        return;
    }
    for(int i=0;i<n;i++){
        if(isValid(i,col,n,bag)==true){
            bag[i][col]='Q';
            solve(col+1,n,bag,results);
            bag[i][col]='.';
        }
    }
}

*/


// SUDOKU...



/*
#include<iostream>
#include<vector>
using namespace std;
bool isValid(int row,int col,char d,vector<vector<char>>&board){
    // HORIZONTAL CHECK..
    for(int i=0;i<9;i++){
        if(board[row][i]==d){
            return false;
        }
    }
    // VERTICAL CHECK..
    for(int j=0;j<9;j++){
        if(board[j][col]==d){
            return false;
        }
    }
    // 3 CROSS 3 CHECK..
    int r=(row/3)*3;
    int c=(col/3)*3;
    for(int i=r;i<r+3;i++){
        for(int j=c;j<c+3;j++){
            if(board[r][j]==d){
                return false;
            }
        }
    }
    return true;
}

bool solve(vector<vector<char>>&board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.'){
                for(char c='1';c<='9';c++){
                    if(isValid(i,j,c,board)==true){
                        board[i][j]=c;
                        if(solve(board)==true){
                            return true;
                        }
                        board[i][j]='.';
                    }
                }
            return false;
            }
        }
    }
    return true;
}



int main() {
    // Standard 9x9 Sudoku Board. '.' represents empty cells.
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    cout << "Original Board:" << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nSolving...\n" << endl;

    if (solve(board)) {
        cout << "Solved Board:" << endl;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists for this board." << endl;
    }

    return 0;
}

*/


// #include<iostream>
// #include<vector>
// using namespace std;

// bool isValid(int node,int v,int m,vector<int>&color,vector<vector<int>>&graph){
//     for(int i=0;i<v;i++){
//         if(graph[node][i]==1 &&color[i]==m){
//             return false;
//         }
//     }
//     return true;
// }
// bool solve(int node,int v,int m,vector<int>&color,vector<vector<int>>&graph){
//     if(node==v){
//         return true;
//     }
//     for(int i=1;i<=m;i++){
//         if(isValid(node,v,i,color,graph)==true){
//             color[node]=i;
//             if(solve(node+1,v,m,color,graph)==true){
//                 return true;
//             }
//             color[node]=0;
//         }
//     }
//     return false;
// }






// #include<iostream>
// #include<vector>
// using namespace std;

// bool isPalind(int start,int end,string &a){
//     while(start<end){
//         if(a[start]!=a[end]){
//             return false;
//         }
//     start++;
//     end--;
//     }
//     return true;
// }
// void solve(int index,string &a,vector<string>&b,vector<vector<string>>&results){
//     if(index==a.size()){
//         results.push_back(b);
//         return;
//     }
//     for(int i=index;i<a.size();i++){
//         if(isPalind(index,i,a)==true){
//             b.push_back(a.substr(index,i-index+1));
//             solve(i+1,a,b,results);
//             b.pop_back();
//         }
//     }
// }





