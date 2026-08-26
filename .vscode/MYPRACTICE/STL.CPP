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







// Task 2: Frequency Counting with std::unordered_map
// The Problem:
// Given an array of integers:

// C++
// vector<int> nums = {4, 2, 4, 5, 2, 3, 1, 4, 2};
// Create an unordered_map<int, int> freq.

// Iterate through nums and populate freq (each key is the number, each value is how many times it appeared).

// Print each unique number and its count using a range-based for loop or an iterator.


// #include<iostream>
// using namespace std;
// #include<vector>
// #include<unordered_map>
// #include<string>

// int main(){
//     vector<int> nums = {4, 2, 4, 5, 2, 3, 1, 4, 2};
//     unordered_map<int,int>freq;
//     auto it=nums.begin();
//     for(it;it<nums.end();it++){
//         freq[*it]++;
//     }
//     cout << "Number -> Frequency:\n";
//     for (const auto &pair : freq) {
//         cout << pair.first << " -> " << pair.second << "\n";
//     }

//     return 0;
// }






// The Problem:
// Given an array containing duplicate numbers:

// C++
// vector<int> arr = {10, 20, 10, 30, 40, 20, 50, 10};
// Insert all elements into an unordered_set<int> unique_elements.

// Check if the number 30 exists in the set using .find().

// Print all unique numbers.

// Syntax hint for .find():

// C++
// if (unique_elements.find(30) != unique_elements.end()) {
//     cout << "Found 30!\n";
// }


// #include <iostream>
// #include <vector>
// #include <unordered_set>

// using namespace std;

// int main() {
//     vector<int> arr = {10, 20, 10, 30, 40, 20, 50, 10};
//     unordered_set<int> unique_elements;

//     // 1. Insert into set (duplicates automatically ignored)
//     for (int num : arr) {
//         unique_elements.insert(num);
//     }

//     // 2. Direct O(1) existence check (outside loop)
//     if (unique_elements.find(30) != unique_elements.end()) {
//         cout << "Found 30 in the set!\n\n";
//     } else {
//         cout << "30 not found!\n\n";
//     }

//     // 3. Print all unique numbers
//     cout << "Unique elements in set:\n";
//     for (int val : unique_elements) {
//         cout << val << " ";
//     }
//     cout << "\n";

//     return 0;
// }







// Practice Challenge: STL Frequency & Sorting
// Write a quick C++ snippet (or outline the logic) that:

// Takes a std::vector<int> nums = {4, 1, 2, 1, 2, 4, 4, 3};

// Uses a std::unordered_map<int, int> to count the frequency of each number.

// Prints each number and how many times it appeared.


// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// int main(){
//     vector<int>nums={4,1,2,1,2,4,4,3};
//     unordered_map<int,int>p1;
//     auto it=nums.begin();
//     for(it;it!=nums.end();it++){
//         p1[*it]++;
//     }
//     for(auto it=p1.begin();it!=p1.end();it++){
//         cout<<it->first<<","<<it->second<<endl;
//     }
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <utility>

// using namespace std;


// bool cmpEmployees(const pair<int, int>& a, const pair<int, int>& b){ 
//     // 1. If experience differs: higher experience comes first
//     if (a.first != b.first) {
//         return a.first > b.first; // Returns true if 'a' has more experience
//     }

//     // 2. If experience is equal: higher salary comes first
//     return a.second > b.second; // Returns true if 'a' has higher salary
// }




// int main(){
//     vector<pair<int, int>> employees = {
//     {3, 60},
//     {5, 120},
//     {3, 80},
//     {2, 45},
//     {5, 110}
// };
// sort(employees.begin(),employees.end(),cmpEmployees);
// for(auto it=employees.begin();it<employees.end();it++){
//     cout<<it->first<<" ,"<<it->second<<endl;
// }
// return 0;
// }




// #include<iostream>
// #include<utility>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool cmpStudents(const pair<int, int>& a, const pair<int, int>& b) {
//     // Write your 2-step logic here!
//     if(a.second!=b.second){
//         return a.second>b.second;
//     }
//     return a.first<b.first;
// }
// int main(){
//     vector<pair<int, int>> students = {{104, 90}, {101, 85}, {102, 90}, {103, 70}};
//     sort(students.begin(),students.end(),cmpStudents);
//     for(auto it=students.begin();it<students.end();it++){
//         cout<<it->first<<" ,"<<it->second<<endl;
//     }
//     return 0;
// }






// #include<iostream>
// #include<utility>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool cmpDist(const pair<int,int>& a,const pair<int,int>& b){
    
//     double aDist=(a.first)*(a.first)+(a.second)*(a.second);
//     double bDist=(b.first)*(b.first)+(b.second)*(b.second);
//     if(aDist!=bDist){
//         return aDist<bDist;
//     }
//     return a.first<b.first;
// }

// int  main(){
//     vector<pair<int, int>> points = {{3, 3}, {5, -1}, {-2, 4}, {1, 1}, {0, 6}};
//     sort(points.begin(),points.end(),cmpDist);
//     for (const auto& p : points) {
//         cout << "(" << p.first << ", " << p.second << ") -> Dist^2 = " 
//             << (p.first * p.first + p.second * p.second) << "\n";
// }
//     return 0;
// }





// #include<iostream>
// #include<vector>
// #include<utility>
// #include<algorithm>
// using namespace std;
// bool cmpIntervals(const pair<int, int>& a, const pair<int, int>& b) {
//     if(a.second!=b.second){
//         return a.second<b.second;
//     }
//     return a.first>b.first;
// }
// int main(){
//     vector<pair<int, int>> intervals = {{9, 12}, {10, 11}, {12, 14}, {9, 11}, {11, 13}};
//     sort(intervals.begin(),intervals.end(),cmpIntervals);
//     for(auto it=intervals.begin();it<intervals.end();it++){
//         cout<<it->first<<" ,"<<it->second<<endl;
//     }
//     return 0;
// }






// C++
// vector<int> nums = {3, 2, 1, 5, 6, 4};
// int k = 2;
// Goal: Find the $2^{\text{nd}}$ largest number in the array (Answer: 5)
// .Strategy using a Max-Heap:Push all elements from nums into a priority_queue<int> maxH.Pop the top element $k - 1$ times.
// The element remaining on .top() is the $k^{\text{th}}$ largest!




// #include<iostream>
// #include<utility>
// #include<vector>
// #include<queue>
// using namespace std;
// int findlargest(const vector<int>& nums, int k){
//     priority_queue<int>maxH;
//     for(auto it=nums.begin();it<nums.end();it++){
//         maxH.push(*it);
//     }
//     // FOR nth LARGEST ELEMENT POP THE QUEUE (n-1) TIME, SO THAT THE SECOND ELEMT COMES AT FIRST.
//    for (int i = 0; i < k - 1; ++i) {
//         maxH.pop();
//     }

//     // 4. Return the element currently at the top
//     return maxH.top();
// }
// int main(){
//     vector<int> nums = {3, 2, 1, 5, 6, 4};
//     int k = 2;

//     int ans = findlargest(nums, k);
//     cout << "The " << k << "nd largest element is: " << ans << endl;

//     return 0;
// }






// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>

// using namespace std;


// bool comparePlayers(const pair<string, int>& a, const pair<string, int>& b) {
//     if(a.second>b.second){
//         return true;
//     }
//     else if(a.second<b.second){
//         return false;
//     }
//     else if(a.first<b.first){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main() {
//     vector<pair<string, int>> leaderboard = {
//         {"Alice", 85},
//         {"Bob", 92},
//         {"Charlie", 85},
//         {"David", 92},
//         {"Eve", 78}
//     };
//     sort(leaderboard.begin(),leaderboard.end(),comparePlayers);
//     for(auto it=leaderboard.begin();it<leaderboard.end();it++){
//         cout<<it->first<<" ,"<<it->second<<endl;
//     }
//     return 0;
// }





// #include<iostream>
// #include<vector>
// #include<utility>
// #include<algorithm>
// using namespace std;
 
// bool comapreWords(string& a,string& b){
//     if(a.length()<b.length()){
//         return true;
//     }
//     if(a.length()>b.length()){
//         return false;
//     }
//     if(a>b){
//         return true;
//     }
//     else{
//         return false;
//     }

// }
// int main(){
//     vector<string> words = {"apple", "cat", "banana", "bat", "dog", "kiwi", "date"};
//     sort(words.begin(),words.end(),comapreWords);
//     for(auto it=words.begin();it<words.end();it++){
//         cout<<*it<<endl;
//     }
//     return 0;
// }






// Sorting Requirements:

// Primary: All Even numbers must come before all Odd numbers.

// Secondary (Among Evens): Sort even numbers in ascending order (smallest to largest: 2, 4, 6...).

// Tertiary (Among Odds): Sort odd numbers in descending order (largest to smallest: 9, 7, 5...).



// vector<int> nums = {4, 7, 2, 9, 8, 3, 6, 5, 1, 10, 12};

//#include<iostream>
// #include<vector>
// #include<utility>
// #include<algorithm>
// using namespace std;
// bool sortOE(const int& a, const int& b){
//     // 1. One is even, one is odd
//     if (a % 2 == 0 && b % 2 != 0) return true;   // Even comes before odd
//     if (a % 2 != 0 && b % 2 == 0) return false;  // Odd does not come before even

//     // 2. Both are even -> Ascending (smaller first)
//     if (a % 2 == 0 && b % 2 == 0) {
//         if (a < b) return true;
//         else return false;
//     }

//     // 3. Both are odd -> Descending (larger first)
//     if (a % 2 != 0 && b % 2 != 0) {
//         if (a > b) return true;
//         else return false;
//     }

//     return false;
// }

// int main(){
//     vector<int> nums = {4, 7, 2, 9, 8, 3, 6, 5, 1, 10, 12};
//     sort(nums.begin(),nums.end(),sortOE);
//     for(auto it=nums.begin();it<nums.end();it++){
//         cout<<*it<<" ";
//     }
// }



//vector<int> nums = {4, 5, 6, 5, 4, 3, 5, 2, 4, 6, 1};

// Count the frequency of each number using unordered_map<int, int> freq.

// Transfer every {key, value} pair into a vector<pair<int, int>> vec.

// Sort vec using a custom comparator:

// Primary: Higher frequency first (descending by .second).

// Secondary (Tie-breaker): If frequencies are identical, smaller number first (ascending by .first).

// Print each number and its count.

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<utility>
// #include<unordered_map>
// using namespace std;
// bool countF(pair<int,int> &a,pair<int,int> &b){
//     if (a.second > b.second) {
//         return true;
//     }
//     if (a.second < b.second) {
//         return false;
//     }

//     // 2. Secondary rule: If frequencies are equal, smaller number first
//     if (a.first < b.first) {
//         return true;
//     } else {
//         return false;
//     }
// }
// int main(){
//     vector<int> nums = {4, 5, 6, 5, 4, 3, 5, 2, 4, 6, 1};
//     unordered_map<int,int>u;
//     for(auto it=nums.begin();it<nums.end();it++){
//         u[*it]++;
//     }
//     vector<pair<int,int>>vec;
//     for(auto it=u.begin();it!=u.end();it++){
//         vec.push_back({it->first,it->second});
//     }
//     sort(vec.begin(),vec.end(),countF);
//     //Printing
//     for(auto it=vec.begin();it<vec.end();it++){
//         cout<<it->first<<" ,"<<it->second<<endl;
//     }
//     cout<<endl;
//     return 0;
// }







// Sorting Requirements:Primary: Higher marks first (descending).
// Secondary (Tie-breaker 1): If marks are equal, sort by name alphabetically ($A \to Z$).
// Tertiary (Tie-breaker 2): If marks and name are equal, smaller rollNo first (ascending).


// #include<iostream>
// #include<vector>
// #include<utility>
// #include<algorithm>
// using namespace std;

// struct Student {
//     string name;
//     int marks;
//     int rollNo;
// };

// vector<Student> students = {
//     {"Aarav", 85, 102},
//     {"Diya", 92, 105},
//     {"Ananya", 85, 101},
//     {"Kabir", 92, 103},
//     {"Rohan", 74, 104}
// };

// bool compare(Student& a,Student& b){
//   bool compare(const Student& a, const Student& b) {
//     // Priority 1: Marks (Higher first)
//     if (a.marks > b.marks) return true;
//     if (a.marks < b.marks) return false; // Must stop here if marks are different!

//     // Priority 2: Name (A to Z)
//     if (a.name < b.name) return true;
//     if (a.name > b.name) return false;   // Must stop here if names are different!

//     // Priority 3: Roll Number (Smaller first)
//     if (a.rollNo < b.rollNo) return true;
//     else return false;
// }
    
// }
// int main(){
//     vector<Student> students = {
//         {"Aarav", 85, 102},
//         {"Diya", 92, 105},
//         {"Ananya", 85, 101},
//         {"Kabir", 92, 103},
//         {"Rohan", 74, 104}
//     };
//     sort(students.begin(),students.end(),compare);
//     for(auto it=students.begin();it<students.end();it++){
//         cout<<it->name<<","<<it->rollNo<<","<<it->marks<<endl;
//     }
//     return 0;
// }


// Primary: Earlier start time first (ascending: $9, 10, 11\dots$).Secondary (Tie-breaker):
//  If start times are equal, earlier end time first (shorter meeting first, ascending: $10, 12\dots$).



// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct Interval {
//     int start;
//     int end;
// };

// vector<Interval> meetings = {
//     {9, 12},
//     {9, 10},
//     {13, 15},
//     {11, 14},
//     {10, 11},
//     {13, 14}
// };
// bool compare(const Interval &a,const Interval &b){
//         if(a.start<b.start){
//             return true;
//         }
//         if(a.start>b.start){
//             return false;
//         }
//         return a.end<b.end;

// }

// int main(){
//     sort(meetings.begin(),meetings.end(),compare);
//     for(auto it=meetings.begin();it<meetings.end();it++){
//         cout<<it->start<<" ,"<<it->end<<endl;
//     }
//     return 0;
// }




// Primary: department alphabetically ($A \to Z$: "Engineering", "HR", "Marketing").
// Secondary (Tie-breaker 1): Higher salary first within the same department (descending).
// Tertiary (Tie-breaker 2): Smaller id first if department and salary match (ascending).



// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>

// using namespace std;
// struct Employee {
//     int id;
//     string department;
//     double salary;
// };

// vector<Employee> staff = {
//     {101, "Engineering", 85000.50},
//     {102, "HR",          62000.00},
//     {103, "Engineering", 95000.00},
//     {104, "Marketing",   62000.00},
//     {105, "Engineering", 85000.50},
//     {106, "HR",          71000.00}
// };

// bool compare(const Employee &a,const Employee &b){
//     if (a.department != b.department) {
//         return a.department < b.department;
//     }

//     // Tier 2: Salary (Higher first)
//     if (a.salary != b.salary) {
//         return a.salary > b.salary;
//     }

//     // Tier 3: ID (Smaller first)
//     return a.id < b.id;
// }
// int main(){
//     sort(staff.begin(),staff.end(),compare);
//     for(auto it=staff.begin();it<staff.end();it++){
//         cout<<"Id: "<<it->id<<" Department: "<<it->department<<" Salary: "<<it->salary<<endl;
//     }
//     return 0;
// }





