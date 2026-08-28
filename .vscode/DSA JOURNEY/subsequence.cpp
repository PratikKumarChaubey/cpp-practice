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
