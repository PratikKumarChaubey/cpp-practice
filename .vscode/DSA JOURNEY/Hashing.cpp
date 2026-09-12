// Level 1: Core Frequency Counting & Arrays1. Counting Frequencies of Array Elements (Striver Classic)Problem:
//  Given an array arr of N positive integers where elements are in the range 1 to N, find the 
//  frequency of each element from 1 to N.Constraint Focus: Can 
// you first do it with an array/hash map in $O(N)$ time and $O(N)$ space, and then think about how to do it in $O(1)$ auxiliary space?



/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Range: ";
    cin>>n;
    int arr[n];
    int max=0;
    // INPUT  VALUES INSIDE RANGE..
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    // Frequency Counter..
    int bag[max+1]={0};
    for(int i=0;i<n;i++){
        bag[arr[i]]++;
    }

    for(int i=0;i<=max;i++){
        if(bag[i]>0){
            cout<<"The Number:"<<i<<" has "<<bag[i]<<" frequency"<<endl;
        }
    }
}

*/


// 1. The Majority Element (LeetCode 169)

// Input: An array of n elements.

// Task: Find the one number that appears more than n / 2 times.

// How to solve: Run your exact code.
//  In the final loop, instead of printing every number where bag[i] > 0, only print the number if bag[i] > n / 2.

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    // Frequency Counter..
    int bag[max+1]={0};
    for(int i=0;i<n;i++){
        bag[arr[i]]++;
    }
    for(int i=0;i<=max;i++){
        if(bag[i]>n/2){
            cout<<i<<endl;
            return 0;
        }
    }
}

*/


/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Range: "<<endl;
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int bag[max+1]={0};
   for(int i=0;i<n;i++){
    bag[arr[i]]++;
   }
   for(int i=1;i<=max;i++){
    if(bag[i]==0){
        cout<<i<<" ";
    }
   }
   return 0;
}
*/