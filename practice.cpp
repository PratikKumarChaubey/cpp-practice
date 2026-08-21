
// =====================================================================
// C++ PRACTICE QUESTIONS


// }

// QUESTION 2: CHECK IF A NUMBER IS A POWER OF TWO

// Write a function that checks if a given integer 'n' is a power of two.
// Example: 16 -> true (2^4), 18 -> false

// bool isPowerOfTwo(int n) {
// // Write your code here
// }

// QUESTION 3: SUM OF DIGITS UNTIL SINGLE DIGIT

// Given an integer 'n', repeatedly add all its digits until the result
// has only one digit, then return it.
// Example: 98 -> 9 + 8 = 17 -> 1 + 7 = 8. Return 8.

// int singleDigitSum(int n) {
// // Write your code here
// }

// QUESTION 4: COUNT FREQUENCY OF ELEMENTS IN ARRAY

// Given an integer array, print the frequency of each element.
// Example: {1, 2, 2, 3, 1} -> 1: 2 times, 2: 2 times, 3: 1 time

// void countFrequency(int arr[], int size) {
// // Write your code here
// }

// QUESTION 5: CIRCLE CLASS WITH CONSTRUCTORS

// Create a class 'Circle' with a private member 'radius'.

// Default constructor setting radius to 1.0

// Parameterized constructor setting radius to user input

// Member functions: getArea() and getCircumference()

// class Circle {
// private:
// double radius;

// public:
// // Write constructor(s) and member functions here
// };







// QUESTION 1: CHECK PALINDROME NUMBER

// Write a function that returns true if integer 'n' is a palindrome.
// Do NOT convert the integer to a string.
// Example: 121 -> true, 123 -> false, -121 -> false

// bool isPalindromeNumber(int n) {
// // Write your code here



// #include<iostream>
// using namespace std;
// bool checkPalindrome(int n){
//     if(n<0||(n%10==0 && n!=0)){
//         return false;
//     }
//     int orignalNumber=n;
//     int reversed=0;
//     while(n>0){
//         int lastdigit=n%10;
//         reversed=reversed*10+lastdigit;
//         n/=10;
//     }
//     return orignalNumber==reversed;
// }
// int main(){
// int num[]={234,567,121,343,5,43,678,898};
// for(int check:num){
//     cout<<checkPalindrome(check)<<endl;
    
// }
// return 0;
// }





// 💻 C++ OOP Practice (Constructors & Classes)
// Question 1: BankAccount with Parameterized Constructor
// Create a BankAccount class with private attributes accountNumber, holderName, and balance.
// •	Create a parameterized constructor to initialize these attributes.
// •	Add methods deposit(double amount) and withdraw(double amount).
// •	Prevent withdrawing if amount > balance.


// #include<iostream>
// using namespace std;

// class BankAccount{
//     int accountNumber;
//     double balance;
//     string holderName;
// public:
//     BankAccount(int a,double b,string c){
//         accountNumber=a;
//         balance=b;
//         holderName=c;
//     }
//     int deposit(double amount){
//         balance+=amount;
//         return balance;
//     }
//     int withdraw(double amount){
//         if(amount<=balance){
//             balance-=amount;
//             return balance;
//         }
//         else{
//             cout<<"Not Possible "<<endl;
//         }
//     }
//     void show(){
//         cout<<"The Balance in the account is:"<<balance<<endl;
//         cout<<"The Account Number of account holder is: "<<accountNumber<<endl;
//         cout<<"The name of the account holder is: "<<holderName<<endl;
//     }
// };
// int main(){
//     BankAccount b1(112348,34500,"Pratik Kumar Chaubey");
//     b1.show();
//     b1.deposit(12000);
//     b1.withdraw(7800);
//     b1.show();
//     return 0;
// }




// Question 2: Constructor Overloading (Point Class)
// Create a Point class representing 2D coordinates (x, y).
// 	Default Constructor: Sets x=0,y=0.
// 	Parameterized Constructor: Takes two integers a and b and sets x=a,y=b.
// 	Add a display() method to print Point: (x, y).


// #include<iostream>
// using namespace std;

// class Point{
//     double x,y;
// public:
//     Point(){
//         x=0;
//         y=0;
//     }
//     Point(double a,double b){
//         x=a;
//         y=b;
//     }
//     void show(){
//         cout<<"The X and Y Coordinates are: "<<x<<","<<y<<endl;
//     }
//     void printXY(){
//         cout<<"X AND Y ARE: "<<endl;
//         cout<<x<<endl<<y<<endl;
//     }
// };
// int main(){
//     Point p1;
//     Point p2(4.6,7.8);
//     p1.show();
//     p2.show();
//     p1.printXY();
//     p2.printXY();
//     return 0;
// }



// Question 3: Constructors with Default Arguments (SimpleInterest Class)
// Create a SimpleInterest class with attributes principal, rate, and time.
// 	Write a constructor where rate has a default argument of 4.0% and time has a default argument of 1 year.
// 	Add a method calculate() that returns (P×R×T)/100.


// #include<iostream>
// using namespace std;
// class SimpleIntrest{
//     double principal,rate;
//     int time;
// public:
//     SimpleIntrest(double a){
//         principal=a;
//         rate=4;
//         time=1;
//     }
//     double calculate(){
//         int intrestCalc=(principal*rate*time)/100;
//         cout<<intrestCalc<<endl;
//         return intrestCalc;
//     }
// };
// int main(){
//     SimpleIntrest s1(30000);
//     s1.calculate();
//     return 0;
// }






// Question 4: Dynamic Object Creation using new
// Write a simple C++ program where you create a Student object dynamically on the Heap using the new keyword, call its display function, and then free memory using delete.

// #include<iostream>
// using namespace std;
// class Student{
//     string name;
//     int marks;
// public:
//     Student(string a,int b){
//         name=a;
//         marks=b;
//     }
//     ~Student() {
//         cout << "[DESTRUCTOR] Memory freed for: " << name << std::endl;
//     }

//     void show(){
//         cout<<"Name of Student: "<<name<<endl;
//         cout<<"Marks of Student is: "<<marks<<endl;
//     }
// };
// int main(){
//     // USING NORMAL STACK METHOD.
//     Student s1("Pratik Chaubey",86);
//     s1.show();
//     // USING HASH METHOD
//     Student* s2=new Student("Anubhav Shukla",94);
//     s2->show();

//     delete s2;
//     return 0;
// }






// Level 1: Basic & Procedural Fundamentals (Lec 1–19)
// 1.	ATM Cash Withdrawal Simulator
// o	Concepts: switch-case, while loop, input validation.
// o	Task: Write a program that takes an initial account balance and prompts the user to withdraw cash. The requested amount must be a multiple of ₹100 and less than or equal to the balance. Keep looping until the user enters 0 to exit or runs out of funds.




// #include<iostream>
// using namespace std;
// int balance=0;
// void setBalance(int a){
//     cout<<"The initial value of bank account is set to: "<<balance<<endl;
//     balance=a;
// }

// void requestWithdraw(){
//     int reqmoney;
//     while(balance>0){
//         cout<<"Enter the amount to withdraw( multiple of 100 or 0 to exit):"<<endl;
//         cin>>reqmoney;
         
//         if(reqmoney==0){
//             cout<<"Nothing to withdraw as 0 rupees cant be withdraw "<<endl;
//             break;
//         }
//         if(reqmoney>balance){
//             cout<<"Not Enough Money To Withdraw From Account "<<endl;
//         }
//         if(reqmoney%100!=0){
//             cout<<"This amount cant be withdrawn as it is not a multiple of 100"<<endl;

//         }
//         else{
//             balance-=reqmoney;
//             cout<<"New Balance is: "<<balance<<endl;
//         }
//     }
//     if(balance==0){
//         cout<<"Amount cant be withdrawn, exitting PROGRAM "<<endl;
//     }
// }

// int main(){
//     setBalance(67800);
//     requestWithdraw();
//     return 0;
// }






// 1.	Prime Range & Factor Count
// o	Concepts: Nested for loops, functions, pass-by-value.
// o	Task: Write a function bool isPrime(int n) and another function void printPrimesInRange(int start, int end). Display all prime numbers between start and end alongside the count of total primes found.


// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     if(n<1){
//         return false;
//     }
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
//         return true;
//     }
// }
// void printPrimesInRange(int start,int end){
//     int primecount=0;
//     for(int i=start;i<end;i++){
//         if(isPrime(i)){
//             cout<<i<<" "<<endl;
//             primecount++;
//         }
//     }
//     cout << "\n\nTotal prime numbers found: " << primecount << endl;
// }
// int main(){
//     int startRange = 10;
//     int endRange = 50;

//     // Call the function to display primes and count
//     printPrimesInRange(startRange, endRange);

//     return 0;
// }








