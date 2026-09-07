// PALINDROME PARTITAION...

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
// void solve(int index,string &a,vector<string>&bag,vector<vector<string>>&results){
//     if(index==a.size()){
//         results.push_back(bag);
//         return;
//     }
//     for(int i=index;i<a.size();i++){
//         if(isPalind(index,i,a)==true){
//             bag.push_back(a.substr(index,i-index+1));
//             solve(i+1,a,bag,results);
//             bag.pop_back();
//         }
//     }
// }




/*

#include<iostream>
#include<vector>
using namespace std;
bool isValid(int start,int end,string& a){
    while(start<end){
        if(a[start]!=a[end]){
            return false;
        }
    start++;
    end--;
    }
    return true;
}

void solve(int index,string& a,vector<string>&bag,vector<vector<string>>&results){
    if(index==a.size()){
        results.push_back(bag);
        return;
    }
    for(int i=index;i<a.size();i++){
        if(isValid(index,i,a)==true){
            bag.push_back(a.substr(index,i-index+1));
            solve(i+1,a,bag,results);
            bag.pop_back();
        }
    }
}

*/

/*
#include<iostream>
#include<vector>
using namespace std;

bool isvalid(int row,int col,vector<vector<int>>&bag){
    if(row>=bag.size()|| col>=bag.size()|| row<0 ||col<0){
        return false;
    }
    if(bag[row][col]==0){
        return false;
    }
    return true;
}

void solve(int row,int col,int m,vector<vector<int>>&bag,string &a,vector<string>&results){
    if(row==m-1 && col==m-1){
        results.push_back(a);
        return;
    }
    bag[row][col]=0;
    //DOWN..
    if(isvalid(row+1,col,bag)==true){
        a.append("D");
        solve(row+1,col,m,bag,a,results);
        a.pop_back();
    }
    // LEFT..
    if(isvalid(row,col-1,bag)==true){
        a.append("L");
        solve(row,col-1,m,bag,a,results);
        a.pop_back();
    }
    // Right..
    if(isvalid(row,col+1,bag)==true){
        a.append("R");
        solve(row,col+1,m,bag,a,results);
        a.pop_back();
    }
    // UP...
    if(isvalid(row-1,col,bag)==true){
        a.append("U");
        solve(row-1,col,m,bag,a,results);
        a.pop_back();
    }
    bag[row][col]=1;

}

*/




//  KTH SUBSEUENCE.....
/*
#include<iostream>
#include<vector>
using namespace std;
string getPermutation(int n,int k){
    int fact=1;
    vector<int>numbers;
    for(int i=0;i<n;i++){
        numbers.push_back(i);
        fact*=i;
    }
    numbers.push_back(n);
    string ans="";
    k=k-1;
    while(true){
        int index=fact/k;
        ans += to_string(numbers[index]);
        
        // Remove that number from our available pool so we don't reuse it
        numbers.erase(numbers.begin() + index);
        
        // If no numbers are left, we are done!
        if (numbers.empty()) {
            break;
        }
        
        // Update k for the next iteration using the remainder
        k = k % fact;
        
        // Reduce the factorial base for the next slot based on remaining numbers
        fact = fact / numbers.size();
    }
    return ans;
}

*/





/*
#include<iostream>
#include<vector>
using namespace std;

string getPermutation(int m,int k){
    int fact=1;
    vector<int>bag;
    for(int i=0;i<m;i++){
        bag.push_back(i);
        fact*=i;
    }
    bag.push_back(m);
    string ans="";
    k=k-1;
    while(true){
        int index=fact/k;
        ans+=to_string(bag[index]);
        bag.erase(bag.begin()+index);
        if(bag.empty()){
            break;
        }
        k=k%fact;
        fact=fact/bag.size();
    }
}

*/






/*
#include<iostream>
#include<vector>
using namespace std;
bool isValid(int row,int col,vector<vector<int>>&bag){
    if(row==bag.size()||col==bag.size()||row<0||col<0){
        return false;
    }
    if(bag[row][col]==0){
        return false;
    }
    return true;
}
void solve(int row,int col,string &a,vector<vector<int>>&bag,vector<string>&result){
    if(row==bag.size()-1&&  col==bag.size()-1){
        result.push_back(a);
        return;
    }
    bag[row][col]=0;
    // DOWN
    if(isValid(row+1,col,bag)==true){
        a.append("D");
        solve(row+1,col,a,bag,result);
        a.pop_back();
    }
    // RIGHT...
    if(isValid(row,col+1,bag)==true){
        a.append("R");
        solve(row,col+1,a,bag,result);
        a.pop_back();
    }
    // LEFT....
    if(isValid(row,col-1,bag)==true){
        a.append("L");
        solve(row,col-1,a,bag,result);
        a.pop_back();
    }

    //UP...
    if(isValid(row-1,col,bag)==true){
        a.append("U");
        solve(row-1,col,a,bag,result);
        a.pop_back();
    }
    bag[row][col]=1;
}
*/


/*
#include<iostream>
#include<vector>
using namespace std;
bool permutation(int n,int k){
    int fact=1;
    vector<int>bag;
    for(int i=0;i<n;i++){
        fact*=i;
        bag.push_back(i);
    }
    k=k-1;
    bag.push_back(n);
    string ans="";
    while(true){
        int index=fact/k;
        ans+to_string(bag[index]);
        bag.erase((index,bag.begin()+index));
        if(bag.empty()){
            break;
        }
        k=k%fact;
        fact=fact/bag.size();
    }
}
*/

