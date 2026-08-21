// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cout<<"Enter THE VALUE OF n:"<<endl;
//     cin>>n;
//     while(i<=10){
//         n*=i;
//         i+=1;
//         cout<<"THE MULTIPLICATION TABLE OF:"<<n<<"IS"<<n<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cout<<"ENTER THE VALUE OF N :"<<endl;
//     cin>>n;
//     while(i<=10){
//         int x=n*i;
//         i+=1;
//         cout<<"THE MULTIPLICATION TABLE OF NUMBER "<<n<< " IS "<<x<<endl;
//     }
//     return 0;
// }

// SKIP EVEN NUMBERS FROM 1 TO 20:
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=20){
//         if(i%2==0){
//             i++;
//             continue;
//         }
//         cout<<"IT IS AN ODD NUMBER "<<i<<endl;
//         i++;
//     }

//     return 0;
// }

//. Stop at 10
// Print numbers from 1 to 20 but stop when you reach 10 using break.

// #include<iostream>
// using namespace std;
// int main(){
//     int i =1;
//     while(i<20){
//         if(i>=10){
//             break;
//         }
//         cout<<i<<endl;
//         i++;
//     }

//     return 0;
// }

//"Take a number as input and count how many digits it has using a loop."

// #include<iostream>
// using namespace std;

// int main() {
//     int n, count = 0;

//     cout << "Enter a number: " << endl;
//     cin >> n;

//     if (n == 0) {
//         count = 1;
//     } else {
//         if (n < 0) {
//             n = -n;
//         }

//         while (n != 0) {
//             n = n / 10;
//             count++;
//         }
//     }

//     cout << "Number of digits: " << count << endl;

//     return 0;
// }

// 16. Student Record (using struct)
// Create a struct Student with name, age, and marks. Take input for one student and print their details.

// #include<iostream>
// using namespace std;
// struct Student{
//     string Name;
//     int age;
//     float marks;
// };

// int main(){
//     Student p;
//     cout<<"Enter Student Name: "<<endl;
//     cin>>p.Name;

//     cout<<"Enter AGE OF STUDENTS:"<<endl;
//     cin>>p.age;

//     cout<<"ENTER THE MARKS OF STUDENT:"<<endl;
//     cin>>p.marks;

//     cout<<"THE FOLLOWING ARE THE STUDENTS DETAILS:"<<endl;
//     cout<<"NAME:"<<p.Name<<endl;
//     cout<<"MARKS: "<<p.marks<<endl;
//     cout<<"AGE: "<<p.age<<endl;

//     return 0;
// }

//	Write a C++ program to take a number as input and print whether it is positive, negative, or zero.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE VALUE OF N: "<<endl;
//     cin>>n;
//     if(n<0){
//         cout<<"THE ENTERED VALUE IS NEGATIVE :"<<n<<endl;

//     }
//     if(n==0){
//         cout<<"ENTERED VALUE IS ZERO :"<<n<<endl;
//     }
//     if(n>0){
//         cout<<"ENTERED NUMBER IS POSITIVE: "<<n<<endl;
//     }
//     return 0;

// }

// 	Write a program to check whether a given number is even or odd

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE VALUE OF N: "<<endl;
//     cin>>n;
//     if(n%2==0){
//         cout<<"Entered value is even: "<<n<<endl;
//     }
//     else{
//         cout<<"THE ENTERED NUMBER IS ODD: "<<n<<endl;
//     }
//     return 0;

// }

// 	Write a program to find the greater of two numbers using if-else.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int m;
//     cout<<"ENTER THE VALUE OF N: "<<endl;
//     cin>>n;
//     cout<<"ENTER THE VALUE OF M: "<<endl;
//     cin>>m;

//     if(n<m){
//         cout<<"AMONG THE TWO, 1ST NUMBER I.E. "<<n<<" IS GREATER THAN 2ND NUMBER "<<m<<endl;
//     }
//     else{
//         cout<<"AMONG TWO NUMBERS 2ND NUMBERS IS GREATER THAN 1 ST I.E "<<n<<" IS GREATER THAN "<<m<<endl;
//     }
//     return 0;
// }

// 	Write a program to check whether a person is eligible to vote if age is 18 or more

// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter The Value Of Age: "<<endl;
//     cin>>age;
//     if(age>=18){
//         cout<<"YOU ARE ELIGIBLE TO VOTE "<<endl;

//     }
//     else{
//         cout<<"YOU ARE NOT ELIGIBLE TO VOTE "<<endl;
//     }

//     return 0;
// }

// 	Write a program to print numbers from 10 to 1 using a while loop.

// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     while(n>=0){
//         cout<<n<<endl;
//         n--;
//     }

//     return 0;
// }

//	Write a program to print the sum of first 10 natural numbers using a loop.

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int total=0;
//     while(i<=100){
//         total+=i;
//         i++;
//     }
//     cout<<total<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=1;
//     int a;
//     cout<<"Enter the value of number for which you want multiplication table: "<<endl;
//     cin>>a;
//     for(int n=1;n<=10;n++){
//         cout<<a<<" X "<<n<< " = "<<a*n<<endl;
//     }
//     return 0;
// }

// 	Write a program to print all even numbers from 1 to 50 using a loop

// #include<iostream>
// using namespace std;
// int main(){
//     int n=1;
//     while(n<=50){
//         if(n%2==0){
//             cout<<n<<endl;
//             n++;
//         }
//         else{
//             n++;
//             continue;
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int max(int a,int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;

//     }
// }

// int main(){
//     int x,y;
//     cout<<"Enter the value of x:"<<endl;
//     cin>>x;
//     cout<<"Enter the value of y:"<<endl;
//     cin>>y;

//     int m=max(x,y);
//     cout<< "maximum value is"<<m<<endl;
//     return 0;
// }

// //•  Write a C++ program to demonstrate constant arguments in a function.

// #include<iostream>
// using namespace std;

// void display(const int num){
//     cout<<"The num is :"<<num<<endl;

// }
// int main(){
//     int x;
//     cout<<"ENTER THE VALUE OF X:"<<endl;
//     cin>>x;

//     display(x);
//     return 0;
// }

// 1.	write a C++ program to define a function that adds two integers and returns the result.

// #include<iostream>
// using namespace std;
// int add(int a,int b){
//     return a+b;
// }
// int main(){
//     int x,y;
//     cout<<"enter value of x:"<<endl;
//     cin>>x;
//     cout<<"enter the value of y:"<<endl;
//     cin>>y;

//     add(x,y);
//     cout<<"SUM :"<<add(x,y)<<endl;

//     return 0;
// }

// 2.	Write a C++ program using a function prototype to calculate the square of a number

// #include<iostream>
// using namespace std;
// void square(int x);

// int main(){
//     int a;
//     cout<<"Enter the value of a:"<<endl;
//     cin>>a;
//     square(a);

//     return 0;
// }
// void square(int x){
//     cout<<x*x<<endl;

// }

// 3.	Write a C++ program to create a function that checks whether a number is even or odd.

// #include<iostream>
// using namespace std;

// int check(int x){
//     if(x%2==0){
//         cout<<"Given Number Is EVEN :"<<x<<endl;
//     }
//     else{
//         cout<<"Given number is ODD : "<<x<<endl;
//     }

// }
// int main(){
//     int a;
//     cout<<"Enter the value of a:"<<endl;
//     cin>>a;
//     check(a);

// }

// 5.	Write a C++ program to demonstrate call by value by swapping two numbers.

// #include<iostream>
// using namespace std;
// void swap(int a,int b);

// int main(){
//     int x,y;
//     cout<<"Enter the value of x:"<<endl;
//     cin>>x;
//     cout<<"Enter the value of y:"<<endl;
//     cin>>y;

//     cout<<"The value before swap is "<<x << y<<endl;
//     swap(x,y);
//     cout<<"The Value after swap:"<< x << y<<endl;

//     return 0;
// }

// void swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
//     cout<<a << b<<endl;
// }
// 5.	Write a C++ program to demonstrate call by reference by swapping two numbers.
// #include<iostream>
// using namespace std;

// void swapr(int &a,int &b);

// int main(){
//     int x,y;
//     cout<<"Enter the value of x:"<<endl;
//     cin>>x;
//     cout<<"Enter the value of y:"<<endl;
//     cin>>y;

//     swapr(x,y);
//     cout<<"the value after swap is "<<x <<" "<< y<<endl;

//     return 0;
// }
// void swapr(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;

// }

// #include<iostream>
// using namespace std;

// inline int cube(int a){
//     return a*a*a;

// }
// int main(){
//     int x;
//     cout<<"ENTER THE VALUE OF X:"<<endl;
//     cin>>x;
//     cout<<"Value of after cube: "<<cube(x)<<endl;
//     return 0;
// }

// 9.	Write a C++ program to create an inline function that calculates the area of a rectangle.
// #include<iostream>
// using namespace std;

// inline int area(int l,int b){
//     return l*b;
// }
// int main(){
//     int l,b;
//     cout<<"Enter the value of length:"<<endl;
//     cin>>l;
//     cout<<"Enter the value of breadth:"<<endl;
//     cin>>b;

//     cout<<"The Area of Rectangle is: "<<area(l,b) <<"m*2"<<endl;
//     return 0;
// }

// 10.	Write a C++ program to find the factorial of a number using recursion.

// #include<iostream>
// using namespace std;
//  int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
//  }
// int main(){
//     int num;
//     cout<<"Enter the value of num: "<<endl;
//     cin>>num;
//     cout<<"The factorial of "<<num <<" is: "<<factorial(num)<<endl;
//     return 0;
// }

// 10.	Write a C++ program to print the Fibonacci series using recursion.

// #include<iostream>
// using namespace std;
// int fibonacci(int x){
//     if(x==0)
//         return 0;
//     if(x==1)
//         return 1;
//     return fibonacci(x-1)+fibonacci(x-2);

// }

// int main() {
//     int terms;
//     cout << "Enter the number of terms: ";
//     cin >> terms;

//     cout << "Fibonacci series: ";
//     for (int i = 0; i < terms; i++) {
//         cout << fibonacci(i) << " ";
//     }

//     return 0;
// }

// 21.	Write a C++ program to write a prototype for a function with one integer and one float parameter.

// #include<iostream>
// using namespace std;

// int proto(int x,float y);

// int main(){
//     int a;
//     float b;

//     cout<<"Enter the values respectively: "<<endl;
//     cin>>a>>b;

//     proto(a,b);
//     cout<<proto(a,b)<<endl;
//     return 0;

// }
// int proto(int x,float y){
//    int sum= x+y;
//    return sum;

// }

// 22.	Write a C++ program to create a function that checks whether a number is positive, negative, or zero.

// #include <iostream>
// using namespace std;
// void check(int a);

// int main()
// {
//     int x;
//     cout << "Enter the value of number to be checked: " << endl;
//     cin >> x;

//     check(x);

//     return 0;
// }

// void check(int a)
// {
//     if (a < 0)
//     {
//         cout << "The number is negative: " << a << endl;
//     }
//     else if (a == 0)
//     {
//         cout << "Entered number is Zero: " << a << endl;
//     }
//     else
//     {
//         cout << "The number is positive: " << a << endl;
//     }
// }


// 23.	Write a C++ program to create a function that finds the average of three numbers.

// #include<iostream>
// using namespace std;

// float avg(float a,float b,float c){
//    float x=(a+b+c)/3;
//    return x;
// }
// int main(){
//     float a,b,c;
//     cout<<"Enter the 3 values of which average is to be calculated: "<<endl;
//     cin>>a>>b>>c;

//     cout<<"The avearge of 3 Number is: "<<avg(a,b,c)<<endl;
//     return 0;
// }

// 24.	Write a C++ program to create a function that returns the absolute value of a number.

// #include<iostream>
// using namespace std;

// float absolute_value(float a){
//     if(a<0){
//         a*=(-1);
//         cout<<"The absoute value of number "<<-a<< " is: "<<a<<endl;
//     }
//     else{
//         cout<<"The absolute value is the same as the entered value: "<<a<<endl;
//     }

// }

// int main(){
//     float x;
//     cout<<"Enter value of x: "<<endl;
//     cin>>x;
//     absolute_value(x);
//     return 0;
// }


// 25.	Write a C++ program to create a function that prints “Hello” five times.
// #include<iostream>
// using namespace std;

// void hello(string a);

// int main(){
//     string x;
//     cout<<"Enter the word: "<<endl;
//     cin>>x;

//     hello(x);

//     return 0;
// }

// void hello(string a){
//     int i=0;
//     for(i=0;i<4;i++){
//         if(a=="Hello"){
//             cout<<"Hello"<<endl;
            
//         }

//         else{
//             cout<<"Wrong Number Entered"<<endl;
//             return;
//         }
//     }
// }


