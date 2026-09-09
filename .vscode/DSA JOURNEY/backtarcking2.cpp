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


/*

#include<vector>
#include<iostream>
using namespace std;

bool isValid(int index,string &digit){
    if(digit[index]<'2' || digit[index]>'9'){
        return false;
    }
    return true;
}

void solve(int index,string &digit,string&bag,vector<string>&results){
    if(digit==""){
        return ;
    }
    vector<string>mapping={
    "",     // index 0: no letters
    "",     // index 1: no letters
    "abc",  // index 2
    "def",  // index 3
    "ghi",  // index 4
    "jkl",  // index 5
    "mno",  // index 6
    "pqrs", // index 7
    "tuv",  // index 8
    "wxyz"  // index 9
    };
    if(index==digit.size()){
        results.push_back(bag);
        return;
    }
    int curr_num = digit[index] - '0'; // Converts char '2' to int 2

    // 2. Get the letters string mapped to this number
    string letters = mapping[curr_num];

    // 3. Loop through ONLY the letters for this specific button
    for (int i = 0; i < letters.size(); i++) {
        bag.push_back(letters[i]);       // Choose a letter
        solve(index + 1, digit, bag, results); // Recurse to the NEXT digit
        bag.pop_back();                  // Backtrack
    }
}
*/


/*
#include<iostream>
#include<vector>
using namespace std;
string solve(int n,int k){
    int fact=1;
    vector<int>bag;
    for(int i=1;i<n;i++){
        bag.push_back(i);
        fact*=i;
    }
    bag.push_back(n);
    string ans="";
    k=k-1;
    while(true){
        int index=k/fact;
        ans.push_back(bag[index]+'0');
        bag.erase(bag.begin()+index);
        if(bag.empty()){
            break;
        }
        k=k%fact;
        fact=fact/bag.size();
    }
    return ans;
}

*/



// #include<iostream>
// #include<vector>
// using namespace std;

// bool isValid(int start,int end,string&bag){
//     while(start<end){
//         if(bag[start]!=bag[end]){
//             return false;
//         }
//     start++;
//     end--;
//     }
//     return true;
// }

// void solve(int index,string &bag,vector<string>&container,vector<vector<string>>&results){
//     if(index==bag.size()){
//         results.push_back(container);
//         return;
//     }
//     for(int i=index;i<bag.size();i++){
//         if(isValid(index,i,bag)==true){
//             container.push_back(bag.substr(index,i-index+1));
//             solve(i+1,bag,container,results);
//             container.pop_back();
//         }
//     }
// }








// #include<iostream>
// #include<vector>
// using namespace std;
// string permutation(int n,int k){
//     int fact=1;
//     vector<int>bag;
//     for(int i=1;i<n;i++){
//         fact*=i;
//         bag.push_back(i);
//     }
//     bag.push_back(n);
//     k=k-1;
//     string ans="";
//     while(true){
//         int index=k/fact;
//         ans.push_back(bag[index]+'0');
//         bag.erase(bag.begin()+index);
//         if(bag.empty()){
//             break;
//         }
//         k=k%fact;
//         fact=fact/bag.size();
//     }
//     return ans;
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// void permutation(int index,int target,vector<int>&bag,vector<int>&container,vector<vector<int>>&results){
//     if(target==0){
//         results.push_back(container);
//         return;
//     }
//     if(target<0 || index==bag.size()){
//         return;
//     }
//     container.push_back(bag[index]);
//     // ADD VALUES..
//     permutation(index,target-bag[index],bag,container,results);
//     container.pop_back();
//     // DONT ADD VALUES..
//     permutation(index+1,target,bag,container,results);
// }
// int main(){
//     vector<int>bag={3,2,5,6,7};
//     vector<int>container;
//     vector<vector<int>>results;
//     permutation(0,5,bag,container,results);
//     for(const auto val:results){
//         cout<<"[";
//         for(int num:val){
//             cout<<num<<" ";
//         }
//         cout<<"]";
//     }
// }






/*

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void isValidPer(int index,int target,vector<int>&bag,vector<int>&container,vector<vector<int>>&result){
    if(target==0){
        result.push_back(container);
        return;
    }
    if(target<0||index==bag.size()){
        return;
    }
    container.push_back(bag[index]);
    isValidPer(index+1,target-bag[index],bag,container,result);
    container.pop_back();
    while(index+1<bag.size()&&bag[index+1]==bag[index]){
        index++;
    }
    isValidPer(index+1,target,bag,container,result);
}
int main(){
    vector<int>bag={2,3,1,2,4,1,2,3,4};
    sort(bag.begin(),bag.end());
    vector<int>container;
    vector<vector<int>>results;
    isValidPer(0,6,bag,container,results);
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
void isValidPer(int index,vector<int>&bag,vector<int>&container,vector<vector<int>>&result){
    if(index==bag.size()){
        result.push_back(container);
        return;
    }
    container.push_back(bag[index]);
    isValidPer(index+1,bag,container,result);
    container.pop_back();
    while(index+1<bag.size()&&bag[index+1]==bag[index]){
        index++;
    }
    isValidPer(index+1,bag,container,result);
}
int main(){
    vector<int>bag={2,2,3};
    sort(bag.begin(),bag.end());
    vector<int>container;
    vector<vector<int>>results;
    isValidPer(0,bag,container,results);
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

