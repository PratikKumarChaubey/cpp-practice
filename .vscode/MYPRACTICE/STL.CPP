// Task 1: Pairs and Sorting CoordinatesProblem Statement:You are given $N$ students with their roll_number and marks.
// Store them in a vector<pair<int, int>> where each element is {marks, roll_number}.
// Insert 4–5 sample records.Sort the vector using sort(vec.begin(), vec.end()).Print the sorted list. 
// (Notice how std::sort automatically sorts pairs by the first element, and uses the second element as a tie-breaker!)


// #include<iostream>
// #include<vector>
// #include<utility>
// #include<string>
// using namespace std;

// void sorting(vector<pair<int,int>>v){
//     auto it=v.begin();
//     int x;
//     cout<<"Enter the number of students you want to store: "<<endl;
//     cin>>x;
//     for(int it=0;it<x;it++){
//         int marks,roll;
//         cout<<"Enter Roll and Marks Simultenously: "<<endl;
//         cin>>roll>>marks;
//         v.push_back({roll,marks});
//     }
//     cout<<"The Roll And Marks Of Students Are: "<<endl;
//     for(auto itt=v.begin();itt<v.end();itt++){
//         cout<<"Roll:"<<itt->first<<" ,Marks: "<<itt->second<<endl;
//     }
// }
// int main(){
//     vector<pair<int,int>>v1;
//     sorting(v1);
//     return 0;
// }


