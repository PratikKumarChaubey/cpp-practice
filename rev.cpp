// Change student marks using reference
// Define a simple struct Student { string name; int marks; };
// Write a function updateMarks(Student &s, int newMarks) that uses a reference parameter to modify marks.

// #include<iostream>
// using namespace std;
// struct Student{
//     string name;
//     int marks;
// };
// void updateMarks(Student &s,int newmarks){
//     s.marks=newmarks;
// }

// int main(){
//     Student s;
//       // Input student data
//     cout << "Enter student name: ";
//     getline(cin, s.name);

//     cout << "Enter initial marks: ";
//     cin >> s.marks;

//     cout << "\nBefore update:" << endl;
//     cout << "Name  : " << s.name << endl;
//     cout << "Marks : " << s.marks << endl;

//     int newMarks;
//     cout << "\nEnter new marks to update: ";
//     cin >> newMarks;

//     // Call function with Student passed by reference
//     updateMarks(s, newMarks);

//     cout << "\nAfter update:" << endl;
//     cout << "Name  : " << s.name << endl;
//     cout << "Marks : " << s.marks << endl;

//     return 0;
// }


// Call by reference with multiple parameters
// Write a function process(int &x, int &y) that:

// Increases x by 5

// Decreases y by 3
// Print x and y in main before and after calling the function to see the effect.


// #include<iostream>
// using namespace std;

// void SetNumbers(int x,int y){
//     cout<<"Set the value of x: "<<endl;
//     cin>>x;
//     cout<<"Set the value of y: "<<endl;
//     cin>>y;

// }
// void NewnumbyRefrence(int &x,int &y){
//     x=x+5;
//     y=y-3;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the values of x and y: "<<endl;
//     cin>>a>>b;

//     SetNumbers(a,b);
//     cout<<"Numbers value after set: "<<"a ="<<a<<" b ="<<b<<endl;
//     NewnumbyRefrence(a,b);
//     cout<<"Values after updation: "<<"a ="<<a<<" b ="<<b<<endl;
//     return 0;
// }



// Simple inline function for addition
// Define an inline function add(int a, int b) that returns the sum.

// Call it from main with different values.

// Print results and verify the function works.



// Inline function & default arguments (5 questions)
// 6.	Simple inline function for addition
// Define an inline function add(int a, int b) that returns the sum.
// o	Call it from main with different values.
// o	Print results and verify the function works.

// #include<iostream>
// using namespace std;
// inline int add(int a, int b){
//     return a+b;
// }

// int main(){
//     int x,y;
//     cout<<"Give the input values of x and y: "<<endl;
//     cin>>x>>y;
//     cout<<add(x,y);
//     return 0;
// }

// 7.	Inline function for max of two
// Write an inline function maxNum(int a, int b) that returns the larger of the two.
// o	Use it with different pairs of numbers and print the results.

// #include<iostream>
// using namespace std;
// inline int maxNum(int a,int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int main(){
//     int x,y;
//     cout<<"Give The input of two numbers"<<endl;
//     cin>>x>>y;
//     cout<<"The Max of the two values "<<x<<" and "<<y<<" is "<<maxNum(x,y);
//     return 0;
// }


// 8.	Function with default arguments (greeting)
// Create a function void greet(string name, string message = "Welcome", string suffix = "!").
// o	Call it with:
// 	Only name
// 	name and message
// 	All three parameters
// Observe how default arguments work.

// #include<iostream>
// using namespace std;
// void greet(string name,string message="Welcome",string suffix="!"){
//     cout<<message<<" "<<name<<suffix;
// }
// int main(){
//     greet("Pratik");
//     cout<<endl;
//     greet("Pratik","Hello");
//     cout<<endl;
//     greet("Pratik","Good Morning"," :)");
//     return 0;

// }

// // 9.	Area calculation with default argument
// // Write a function double area(double length, double width = 1.0) that computes rectangle area.
// // o	In main, call:
// // 	area(5.0, 4.0)
// // 	area(5.0) (width defaults to 1.0)
// // Print both areas.

// #include<iostream>
// using namespace std;

//doubleArea(double length,double width=1.0){
//     cout<<"Area Of Rectangle Is: "<<length*width<<"M**2"<<endl;
//     return length*breadth;
// }
// int main(){
//     doubleArea(5,4);
//     doubleArea(5);
//     return 0;
// }


// 10.	Inline + default arguments combined
// Create an inline function int multiply(int a, int b = 2) that multiplies a by b.
// o	Test it with different values of a, calling with and without b.

// #include<iostream>
// using namespace std;
// inline int multiply(int a,int b=2){
//     return a*b;
// }
// int main(){
//     cout<<multiply(3,6)<<endl;
//     cout<<multiply(4)<<endl;
//     return 0;
// }

// Recursive factorial
// Write a recursive function int factorial(int n) that returns n!.
// 	In main, read n from input and print factorial(n).
// 	Handle the base case correctly.

// #include<iostream>
// using namespace std;

// int factorial(int a){
//     if(a==0 or a==1){
//         return 1;
//     }
//     return a* factorial(a-1);
// }
// int main(){

//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl;
//     } else {
//         cout << "Factorial of " << n << " is " << factorial(n) << endl;
//     }

//     return 0;
// }

// 12.	Recursive sum of first N natural numbers
// Create int sumN(int n) that recursively returns 1 + 2 + ... + n.
// o	Ask user for n and print the sum.


// #include<iostream>
// using namespace std;
// int sumN(int n){
//     if(n>0){
//         return n+sumN(n-1);
//     }
//     else if(n<0){
//         return n+sumN(n+1);
//     }
//     else{
//         return 0;
//     }
    
// }
// int main(){
//     int x;
//     cout<<"Enter the value of x: "<<endl;
//     cin>>x;

//     cout<<sumN(x)<<endl;
//     return 0;

// }


// 13.	Recursive power function
// Implement int power(int base, int exp) using recursion.
// o	Compute base^exp (e.g., 2^5).
// o	Include base case exp == 0.

// #include <iostream>
// using namespace std;

// // Recursive power function: computes base^exp
// int power(int base, int exp) {
//     // Base case: any number to the power 0 is 1
//     if (exp == 0) {
//         return 1;
//     }

//     // Recursive case: base^exp = base * base^(exp - 1)
//     return base * power(base, exp - 1);
// }

// int main() {
//     int base, exp;

//     cout << "Enter base: ";
//     cin >> base;

//     cout << "Enter exponent (non-negative): ";
//     cin >> exp;

//     if (exp < 0) {
//         cout << "This simple version does not handle negative exponents." << endl;
//     } else {
//         int result = power(base, exp);
//         cout << base << "^" << exp << " = " << result << endl;
//     }

//     return 0;
// }


// Implement int fib(int n) that returns the nth Fibonacci number using recursion.
// o	Print the first n Fibonacci numbers by calling fib(i) for i from 0 to n-1.
// o	Note: this is not optimal but good for understanding recursion.


// #include<iostream>
// using namespace std;

// int fibonacci(int a){
//     if(a==0){
//         return 0;
//     }
//     if(a==1){
//         return 1;
//     }
//     return fibonacci(a-1)+fibonacci(a-2);
// }
// int main(){
//     int x;
//     cout<<"Enter the number whose Fibonacci you want: "<<endl;
//     cin>>x;
//     cout<<fibonacci(x);
//     return 0;
// }


// Function overloading (3 questions)
// 16.	Overload add for integers and doubles
// Overload add function:
// o	int add(int, int);
// o	double add(double, double);
// In main, call both versions and print results.


// #include<iostream>
// using namespace std;
// int add(int a,int b){
//     return a+b;
// }
// double add(double a,double b){
//     return a+b;
// }
// int main(){
//     cout<<add(3,5)<<endl;
//     cout<<add(7.6,9.5)<<endl;
//     return 0;
// }


// // 17.	Overload area for circle and rectangle
// // Overload area:
// // o	double area(double radius) for circle.
// // o	double area(double length, double width) for rectangle.
// // In main, show both uses.

// #include<iostream>
// using namespace std;
// double area(double radius){
//     return 3.14*radius*radius;
// }
// double area(double length,double breadth){
//     return length*breadth;
// }
// int main(){
//     double x,y,z;
//     cout<<"Enter the value of radius: "<<endl;
//     cin>>x;
//     cout<<"Enter the value of length: "<<endl;
//     cin>>y;
//     cout<<"Enter the value of breadth: "<<endl;
//     cin>>z;

//     cout<<area(x)<<endl;
//     cout<<area(y,z)<<endl;

// }



// 18.	Overload print function
// Create overloaded print functions:
// o	void print(int x);
// o	void print(double x);
// o	void print(string s);
// Call all three from main with different types.


// #include<iostream>
// using namespace std;
// void print(int x){
//     cout<<x<<endl;
// }
// void print(double x){
//     cout<<x<<endl;
// }
// void print(string x){
//     cout<<x<<endl;
// }
// int main(){
//     print(3);
//     print(3.6);
//     print("45");
//     return 0;
// }


// Basic OOP: classes, public/private, nesting, arrays of objects (7 questions)
// 19.	Simple Person class with public methods, private data
// Define a class Person with:
// o	Private data: string name; int age;
// o	Public methods: setData(string, int) and showData()
// In main, create a Person object, set data, and show data.

// #include<iostream>
// using namespace std;
// class Person{
//     string name;
//     int age;
// public:
//     void setData(string a,int b){
//         name=a;
//         age=b;
//     }    
//     void showdata(){
//         cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;

//         }
    
// };
// int main(){
//     Person p1;
//     p1.setData("Pratik",19);
//     p1.showdata();
//     return 0;
// }


// 20.	Rectangle class with area method (member function)
// Create a class Rectangle:
// o	Private double length, width;
// o	Public setDimensions, area member function.
// In main, create an object, set dimensions, and print area

// #include<iostream>
// using namespace std;
// class Rectangle{
//     double length,breadth;
// public:
//     void setDimensions(double x,double y){
//         length=x;
//         breadth=y;
//     }
//     void showArea(){
//         cout<<"Area; "<< length*breadth<<endl;
//     }
// };
// int main(){
//     Rectangle r1;
//     r1.setDimensions(6.7,8.3);
//     r1.showArea();
//     return 0;

// }

// 21.	Nesting of member function
// In a class Student, create:
// o	Private data: string name; int marks;
// o	Public functions: getData(), calculateGrade(), showResult()
// Let showResult() call calculateGrade() internally (member function calling another member function).
// In main, create a Student object and show result.

// #include<iostream>
// using namespace std;

// class Student{
//     string name;
//     int marks;
// public:
//     void getData(string a,int b){
//         name=a;
//         marks=b;
//     }    
//     void calculateGrade(){
//         if(marks>100){
//             cout<<"outstanding"<<endl;
//         }
//         if(marks<90 && marks>80){
//             cout<<"Great"<<endl;
//         }
//         if(marks<80 && marks>70){
//             cout<<"Good Job"<<endl;
//         }
//         if(marks<60 && marks>50){
//             cout<<"Well tried"<<endl;
//         }
//         if(marks<50 && marks>40){
//             cout<<"Satisfactory"<<endl;
//         }
//         if(marks<40 && marks>33){
//             cout<<"Work Hard"<<endl;
//         }
//         if(marks<33 && marks>0){
//             cout<<"You have Failed"<<endl;
//         }
//     }
//     void showresult(){
//         calculateGrade();
//     }
// };
// int main(){
//     Student s1;
//     s1.getData("Pratik ",89);
//     s1.showresult();
//     return 0;
// }



// 22.	Array of objects (multiple students)
// Define class Student with name and marks, with input() and display() methods.
// In main:
// o	Create an array of 5 Student objects.
// o	Input data for all students.
// o	Display all students’ data.

// #include<iostream>
// #include<string>
// using namespace std;
// class Student{
//     string name;
//     int marks;
// public:
//     void input(){
//         cout<<"Enter Student Name: "<<endl;
//         getline(cin,name);

//         cout<<"Enter Student Marks: "<<endl;
//         cin>>marks;
//         }
//     void display(){
//            cout << "Name: " << name << ", Marks: " << marks << endl;
    
//     }
   
// };
// int main(){
//     const int N=5;
//     Student  students[N];
//     for(int i=0;i<N;i++){
//         cout<<"Entering Data for student "<<i+1<<":"<<endl;
//         students[i].input();
//           cout << "\nAll students' data:" << endl;
//     for (int i = 0; i < N; ++i) {
//         students[i].display();
//     }
//     return 0;
//     }
// }


// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
//     string name;
//     int marks;

// public:
//     void input() {
//         cout << "Enter student name: ";
//         cin >> name;            // one word name; use getline if you want full names

//         cout << "Enter marks: ";
//         cin >> marks;
//     }

//     void display() {
//         cout << "Name: " << name << ", Marks: " << marks << endl;
//     }
// };

// int main() {
//     const int N = 5;
//     Student students[N];

//     // Input for all students
//     for (int i = 0; i < N; ++i) {
//         cout << "\nStudent " << i + 1 << ":\n";
//         students[i].input();
//     }

//     // Output all students
//     cout << "\nAll students' data:\n";
//     for (int i = 0; i < N; ++i) {
//         students[i].display();
//     }

//     return 0;
// }



// 22.	Array of objects (multiple students)
// Define class Student with name and marks, with input() and display() methods.
// In main:
// o	Create an array of 5 Student objects.
// o	Input data for all students.
// o	Display all students’ data.

// #include<iostream>
// using namespace std;
// class Student{
//     string name;
//     int marks;
// public:
//     void input(){
//         cout<<"Enter the name of Student: "<<endl;
//         cin>>name;
//         cout<<"Enter the Marks of Student: "<<endl;
//         cin>>marks;
//     }    
//     void display(){
//         cout<<"Name: "<<name<<"Marks: "<<marks<<endl;
//     }
// };
// int main(){
//     const int N=5;
//     Student students[5];
//     for(int i=0;i<N;i++){
//         cout<<"Student"<<i+1<<endl;
//         students[i].input();
//     }
//     cout<<"Data For all Students: "<<endl;
//     for(int i=0;i<N;i++){
        
//         students[i].display();
//     }
//     return 0;
// }




// 23.	Passing object as function argument
// Create a class Complex for complex numbers (real and imaginary).
// o	Write a non-member function addComplex(Complex c1, Complex c2) that returns the sum as a Complex.
// o	In main, create two Complex objects, call addComplex, and display the result.

// #include<iostream>
// using namespace std;
// class Complex{
// public:
//     double real;
//     double imag;
        
//     void input(){
//         cout<<"Enter the REAL part: "<<endl;
//         cin>>real;
//         cout<<"Enter the IMAGINARY part: "<<endl;
//         cin>>imag;
        
//     }
//     void show(){
//         cout<<real<<" + "<<imag<<"i"<<endl;
//     }

// };
// Complex addComplex(Complex c1,Complex c2){
//     Complex result;
//     result.real=c1.real+c2.real;
//     result.imag=c1.imag+c2.imag;
//     return result;
// }
// int main(){
//     Complex c1,c2,sum;
//     cout<<"Enter the first complex number: "<<endl;
//     c1.input();
//     cout<<"Enter the value of second complex: "<<endl;
//     c2.input();
//     sum=addComplex(c1,c2);

//     cout<<"The First complex is: "<<endl;
//     c1.show();
//     cout<<"The Second complex is: "<<endl;
//     c2.show();

//     cout<<"The Sum complex is: "<<endl;
//     sum.show();


//     return 0;
// }

    
// 24.	Static data member and method in Counter class
// Define a class Counter with:
// o	A static int count.
// o	A constructor that increments count.
// o	A static function showCount() that prints count.
// In main, create multiple Counter objects and call Counter::showCount().

// #include <iostream>
// using namespace std;

// class Counter {
//     // Static data member shared by ALL objects of this class
//     static int count;

// public:
//     // Constructor increments count each time an object is created
//     Counter() {
//         count++;
//     }

//     // Static member function to show current count
//     static void showCount() {
//         cout << "Number of Counter objects created: " << count << endl;
//     }
// };

// // Define and initialize the static data member outside the class
// int Counter::count = 0;

// int main() {
//     // Before creating any objects
//     Counter::showCount();   // should print 0

//     Counter c1;             // count = 1
//     Counter c2;             // count = 2
//     Counter c3;             // count = 3

//     // After creating 3 objects
//     Counter::showCount();   // should print 3

//     {
//         Counter c4;         // count = 4 (block scope just to show more objects)
//         Counter::showCount();   // should print 4
//     } // c4 goes out of scope, but count stays 4 (we are only incrementing in constructor)

//     Counter::showCount();   // still prints 4

//     return 0;
// }


// 25.	Object memory allocation using array in class
// Define a class Store that has:
// o	A fixed-size array int prices[5];
// o	Methods to input prices and display them.
// In main, create a Store object, input prices into the array, and print them.

// #include<iostream>
// using namespace std;
// class Store{
//     int prices[5];
// public:
//     void input(){
//         cout<<"Enter 5 item prices: "<<endl;
//         for(int i=0;i<5;i++){
//             cout<<"Price "<<i+1<<endl;
//             cin>>prices[i];
//         }
//     }
//     void display(){
//         cout<<"Arrays of Marks: "<<endl;
//         for(int i=0;i<5;i++){
//             cout<<"Price "<<i+1<<prices[i]<<endl;
//         }
//     }
// };
// int main(){
//     Store s;
//     s.input();
//     s.display();
//     return 0;
// }

// 26.	Friend function to access private data
// Create a class Box with private double length, width, height.
// o	Declare a friend void showVolume(Box b);
// Implement showVolume outside the class to compute and print volume using private data.
// In main, create a Box object, set values (via a public method or constructor), and call showVolume.

// #include<iostream>
// using namespace std;
// void Showvolume(){

// }
// class Box{
//     double length;
//     double width;
//     double height;
// public:
//     void setDimensions(double l,double w,double h){
//         length=l;
//         width=w;
//         height=h;
//     }
//     friend void Showvolume(Box b);
    
// };
// void Showvolume(Box b){
//     double volume=b.length*b.width*b.height;
//     cout << "Volume of the box = " << volume << endl;
// }
// int main(){
//     Box b1;
//     double l,w,h;
//     cout<<"Enter the values of dimensions: "<<endl;
//     cin>>l>>w>>h;
//     b1.setDimensions(l,w,h);
//     Showvolume(b1);
//     return 0;
// }


// 27.	Friend class example
// Have two classes: Engine and Car.
// o	Let Engine have a private int horsepower.
// o	Declare friend class Car; in Engine.
// In Car, write a method that reads Engine’s horsepower and prints it.
// In main, create Engine and Car objects and test.


// #include<iostream>
// using namespace std;
// class Car;
// class Engine{
//     int horsepower;
// public:
//     void setdata(int a){
//         horsepower=a;
//     }
//     friend class Car;
    
// };
// class Car{
// public:
//     void showHP(const Engine &e){
//         cout<<"HorsePower of car is: "<<e.horsepower<<endl;
//     }
        
// };
// int main(){
//     Engine e1;
//     Car c1;
//     e1.setdata(5600);
//     c1.showHP(e1);
//     return 0;
// }


// 28.	Member friend function across classes
// Define classes Alpha and Beta.
// o	Alpha has private int x;
// o	Beta has private int y;
// o	Declare friend int sumXY(Alpha, Beta); in both.
// Implement sumXY which returns x + y.
// In main, create objects, set values, and print the sum.

// #include<iostream>
// using namespace std;
// class Beta;
// class Alpha{
//     int x;

// public:
//     void setData(int a){
//         x=a;
//     }
//     friend int sumXY(Alpha a,Beta b);    

// };
// class Beta{
    
// int y;

// public:
//     void setData(int b){
//         y=b;
//     }
//     friend int sumXY(Alpha a,Beta b);
// };
// int sumXY(Alpha a,Beta b){
//     int sum=a.x+b.y;
//     return a.x+b.y;
    
// }   
// int main(){
//     Alpha a1;
//     Beta b1;
//     a1.setData(7);
//     b1.setData(23);
//     int sum=sumXY(a1,b1);
//     cout<<sum;

//     return 0;
// }


// 1. Sum of Complex Numbers (Same Class)
// Create a class Complex with private data members real and imag (both int).

// Write a friend Complex addComplex(Complex c1, Complex c2); that returns the sum of two complex numbers.

// In main, create two objects, input values, call addComplex, and display the result.

// 2. Maximum of Two Classes (Different Classes)
// Create two classes Alpha and Beta, each with one private int member (a and b).

// Declare a friend int maxValue(Alpha, Beta); that returns the maximum of the two integers.

// In main, create objects of both classes, set their values, and print the maximum.

// 3. Distance Comparison
// Create a class Distance with private members int meters and int centimeters.

// Declare a friend Distance greaterDistance(Distance d1, Distance d2); that returns the object with the larger distance.

// In main, create two Distance objects, input values, call the friend function, and display the greater distance.

// 4. Time Addition
// Create a class Time with private members int hours and int minutes.

// Declare a friend Time addTime(Time t1, Time t2); which adds two times and adjusts minutes if they exceed 59.

// In main, input two times from the user, add them using the friend function, and display the result in hh:mm format.

// 5. Swap Private Data of Two Classes
// Create two classes Box1 and Box2 with private int value1 and int value2.

// Declare a friend void swapValues(Box1 &, Box2 &); that swaps the private values of both objects.

// In main, set initial values, display them, call swapValues, and display again to show the swap.

// 6. Bank Balance Comparison
// Create a class BankAccount with private data string name and double balance.

// Declare a friend void compareBalance(BankAccount a, BankAccount b); that prints which account has higher balance (or if equal).

// In main, create two accounts, initialize them, and call the friend function.

// 7. Rectangle Area and Friend Function
// Create a class Rectangle with private members int length and int breadth.

// Declare a friend int area(Rectangle r); that calculates and returns the area.

// In main, create an array of 3 Rectangle objects, input their dimensions, and for each, use the friend function to print its area.

// 8. Student Marks Aggregation (Array + Friend)
// Create a class Student with private string name and int marks.

// Declare a friend double classAverage(Student s[], int n); that calculates and returns the average marks of all students in the array.

// In main, create an array of 5 students, input their data, and print the average marks using the friend function.

// 9. Coordinate Translation Using a Friend
// Create a class Point with private members int x and int y.

// Declare a friend void translate(Point &p, int dx, int dy); that changes the point’s coordinates by adding dx and dy.

// In main, create a Point, initialize it, call translate with some values, and print the updated coordinates.

// 10. Salary Update with Friend Function
// Create a class Employee with private string name and double salary.

// Declare a friend void giveRaise(Employee &e, double percent); which increases salary by the given percentage.

// In main, create an Employee, input details, call giveRaise with some percentage, and display the updated salary.


// 1. Sum of Complex Numbers (Same Class)
// Create a class Complex with private data members real and imag (both int).

// Write a friend Complex addComplex(Complex c1, Complex c2); that returns the sum of two complex numbers.

// In main, create two objects, input values, call addComplex, and display the result.

// #include<iostream>
// using namespace std;
// class Complex{
// public:
//     int real;
//     int imag;
//     void input(){
       
//         cout<<"Enter the value of real complex part: "<<endl;
//         cin>>real;
//         cout<<"Enter the value of imaginary part: "<<endl;
//         cin>>imag;
//     }
//     void show(){
//         cout<<"Result: "<<real<<"i "<<" + "<<imag<<endl;
//     }
// };
// Complex addComplex(Complex c1,Complex c2){
//     Complex result;
//     result.real=c1.real+c2.real;
//     result.imag=c1.imag+c2.imag;
// }
// int main(){
//     Complex c1,c2,sum;
//     cout<<"Enter the first complex number: "<<endl;
//     c1.input();
//     cout<<"Enter the value of second complex: "<<endl;
//     c2.input();
//     sum=addComplex(c1,c2);

//     cout<<"The First complex is: "<<endl;
//     c1.show();
//     cout<<"The Second complex is: "<<endl;
//     c2.show();

//     cout<<"The Sum complex is: "<<endl;
//     sum.show();


//    return 0;
// }