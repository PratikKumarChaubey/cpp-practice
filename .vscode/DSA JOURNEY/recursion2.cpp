// Task: Return the sum of digits of a non-negative integer n using recursion. 
// No loops.Signature:C++int sumOfDigits(int n);
// Test Cases:n = 4823 $\implies 17$n = 0 $\implies 0$n = 9 $\implies 9$


// #include<iostream>
// using namespace std;
// int sumOfDigits(int n){
//     if(n==0){
//         return 0;
//     }
//     return n%10+sumOfDigits(n/10);
// }
// int main(){
//     cout<<sumOfDigits(4823);
//     return 0;
// }





// Task: Return true if every element is strictly smaller than the element 
// after it ($arr[i] < arr[i+1]$ for all valid $i$), otherwise return false.
//  No loops.Signature:C++bool isSorted(int index, const vector<int>& arr);
// Test Cases:arr = [2, 5, 8, 11] $\implies \texttt{true}$arr = [2, 5, 5, 8]
//  $\implies \texttt{false}$arr = [1] $\implies \texttt{true}$arr = [] $\implies \texttt{true}$





// #include<iostream>
// #include<vector>
// using namespace std;
// bool isSorted(int index,const vector<int>&arr){
//     if(arr.empty()||index>=(int)arr.size()-1){
//         return true;
//     }
//     if(arr[index]>=arr[index+1]){
//         return false;
//     }
//     return isSorted(index+1,arr);
// }
// int main(){
//     vector<int>v1={1,4,7,8,3};
//     cout<<boolalpha<<isSorted(0,v1);
//     return 0;
// }






// Task: Return how many times the character ch appears in string s from index to the end.
//  No loops.Signature:C++int countChar(int index, char ch, const string& s);
// Test Cases:s = "abacaba", ch = 'a' $\implies 4$s = "code", ch = 'z' $\implies 0$s = "", ch = 'a' $\implies 0$


// #include<iostream>
// using namespace std;
// int countChar(int index,char ch,const string &s){
//     if(index==s.length()){
//         return 0;
//     }
//     int count=(s[index]==ch)?1:0;
//     return count+countChar(index+1,ch,s);
// }
// int main(){
//     cout<<countChar(0,'a',"abacaba");
//     return 0;
// }






/// REVERSE OF AN ARRAY........

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// void reverseArray(int left,int right,vector<int>& arr){
//     if(left>=right){
//         return;
//     }
//     swap(arr[left],arr[right]);
//     return reverseArray(left+1,right-1,arr);
// }
// int main(){
//     vector<int>v2={2,3,5,7,9};
//     vector<int>v1={};
//     reverseArray(0,v1.size()-1,v1);
//     cout<<"{";
//    for(auto val=v1.begin();val<v1.end();val++){
//     cout<<*val<<" ";
//    }
//     cout<<"}";
//     return 0;
// }






// #include<iostream>
// #include<vector>
// using namespace std;
// bool checkPalindrome(int left,int right,const vector<int>& arr){
//     if(left>=right){
//         return true;
//     }
//     if(arr[left]!=arr[right]){
//         return false;
//     }
//     return checkPalindrome(left+1,right-1,arr);
// }
// int main(){
//     vector<int>v1={2,2,1,23,2};
//     cout<<checkPalindrome(0,v1.size()-1,v1);
//     return 0;
// }






// Task: Compute $x^n$ recursively in $O(\log n)$ time. No loops, no std::pow.Signature:C++long long power(long long x, int n);
// Constraints: $x \ge 1$, $n \ge 0$Test Cases:x = 2, n = 10 $\
// implies 1024$x = 3, n = 5 $\implies 243$x = 5, n = 0 $\implies 1$x = 7, n = 1 $\implies 7$




// #include<iostream>
// #include<vector>
// using namespace std;
// long long power(long long x,int n){
//     if(n==0){
//         return 1;
//     }
//     return x*power(x,n-1);
// }
// int main(){
//     cout<<power(2,10)<<endl;
//     return 0;
// }




// #include<iostream>
// using namespace std;
// long long power(long long  x,int n){
//     if(n==0){
//         return 1;
//     }
//     long long half=power(x,n/2);
//     if(n%2==0){
//         return half*half;
//     }
//     if(n%2!=0){
//         return x*half*half;
//     }
// }
// int main(){
//     cout<<"The value of"<<2<<" to the power "<<10<<" :"<<power(2,10);
//     return 0;
// }





// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int findRightmost(int index,int target,vector<int>& a){
//     if(index==a.size()){
//         return -1;
//     }
//     int ind=(a[index]==target)?index:-1;
//     return max(ind,findRightmost(index+1,target,a));

// }
// int main(){
//     vector<int>i1={1,2,3,2,5,7,2,9};
//     cout<<findRightmost(0,2,i1);
//     return 0;
// }






// #include<iostream>
// #include<vector>
// using namespace std;
// int count(int index,int target,vector<int>&arr){
//     if(index==arr.size()){
//         return 0;
//     }
//     int count1=(arr[index]==target)?1:0;
//     return count1+count(index+1,target,arr);
    
// }
// int main(){
//     vector<int>v1={2,3,4,5,7,8,2,2,0,1,7};
//     cout<<count(0,7,v1);
//     return 0;
// }


/// STRICYLY INCRESING....

// #include<iostream>
// #include<vector>
// using namespace std;

// bool checkIncreasing(int index,vector<int>&arr){
//     if(index>=arr.size()-1){
//         return true;
//     }
//     if(arr[index]>=arr[index+1]){
//         return false;
//     }
//     return checkIncreasing(index+1,arr);
    
    
// }
// int main(){
//     vector<int>arr={3,4,5,2,3,1,9};
//     cout<<checkIncreasing(0,arr);
//     return 0;
// }
