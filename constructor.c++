// Create a function (Hint: Make it a friend function) Which takes 2 points objects and computes the distance between the two points
// #include<iostream>
// #include<cmath>
// using namespace std;
// class Points{
//     int x;
//     int y;
// public:
//     Points(int a,int b){
//         x=a;
//         y=b;
//     }
//     void display(){
//         cout<<"Point is: ("<<x<<","<<y<<endl;
        
//     }
//     friend double CalculateDistance(Points a,Points b);
// };
// double CalculateDistance(Points a,Points b){
//    double distance=(b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y);
//    distance=sqrt(distance);
//    return distance;
// }
// int main(){
//     Points p1(4,5);
//     Points p2(1,1);
//     p1.display();
//     p2.display();

//     cout<<"The Distance Between Two Points is: "<<CalculateDistance(p1,p2)<<endl;
//     return 0;
// }



// Complex Number Addition
// Create a class Complex with private real and imag.

// Use a constructor to initialize values.

// Use a friend function to add two complex numbers and display the result.

// #include<iostream>
// using namespace std;
// class Complex{
//     int real,imag;
// public:
//     Complex(int a,int b){
//         real=a;
//         imag=b;
//     }
//     void display(){
//         cout<<"IMAGINARY PART IS: "<<imag<<endl<<"REAL PART IS: "<<real<<endl;
//     }
    
//     friend void AddComplex(Complex c1,Complex c2);
// };
// void AddComplex(Complex c1,Complex c2){
//     int Real,Imag;
//     Real=c1.real+c2.real;
//     Imag=c1.imag+c2.imag;
//     cout<<"The Combined Complex Number is: "<<Real<<" + "<<Imag<<"i"<<endl;
// }
// int main(){
//     Complex c1(5,6);
//     Complex c2(7,9);
//     c1.display();
//     c2.display();

//     AddComplex(c1,c2);
//     return 0;
// }




// Point Distance
// Create a class Point with private x and y.

// Use a constructor to initialize coordinates.

// Use a friend function to calculate the distance between two points.


// #include<iostream>
// #include<cmath>
// using namespace std;

// class Point{
//     double x,y;
// public:
//     Point(double a, double b){
//         x=a;
//         y=b;
//     }
//     void show(){
//         cout<<"X COORD: "<<x<<" Y COORD: "<<y<<endl;
//     }
// friend  double  Distance(Point p1,Point p2);

// };
// double Distance(Point p1,Point p2){
//     int distance=(p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y);
//     distance=sqrt(distance);
//     cout<<"Distance Between Two Points is: "<<distance<<endl;

// }
// int main(){
//     Point p1(6,23);
//     Point p2(5,9);
//     p1.show();
//     p2.show();
//     cout<<Distance(p1,p2)<<endl;
//     return 0;
// }




// // Time Addition
// // Create a class Time with private hours and minutes.

// // Use a constructor to set time.

// // Use a friend function to add two times and normalize minutes.

// #include<iostream>
// using namespace std;
// class Time{
//     int hours,minutes;
// public:
//     Time(int a,int b){
//         hours=a;
//         minutes=b;
//         time();
//     }
//     void time(){
//         if(minutes>=60){
//            hours+=minutes/60;
//            minutes+=minutes%60;
//         }
//     }
//     void show(){
//         cout<<"Time: "<<hours<<"Hours "<<minutes<<" Minutes"<<endl;
//     }
//     friend int addTime(Time t1,Time t2);
// };
// int addTime(Time t1,Time t2){
//     int Hours=t1.hours+t2.hours;
//     int Minutes=t1.minutes+t2.minutes;
// }
// int main(){
//     Time t1(5,45);
//     Time t2(7,89);
//     t1.show();
//     t2.show();
//     addTime(t1,t2);
//     t1.show();
//     t2.show();
//     return 0;
// }





// Rectangle Area
// Create a class Rectangle with private length and breadth.

// Use a constructor to set dimensions.

// Use a friend function to calculate area.

// #include<iostream>
// using namespace std;
// class Rectangle{
//     int length,breadth;
// public:
//     Rectangle(int a,int b){
//         length=a;
//         breadth=b;
//     }
//     friend int calcArea(Rectangle r1);
// };
// int calcArea(Rectangle r1){  
//     int area=r1.breadth*r1.length;
//     cout<<"AREA IS: "<<area;
//     return area;
// }
// int main(){
//     Rectangle r1(4,5);
//     calcArea(r1);
//     return 0;
// }




// Moderate
// Student Result System
// Create a class Student with private name, rollNo, and marks in 3 subjects.

// Use a constructor to initialize all fields.

// Use a friend function to calculate total, average, and grade.

// #include<iostream>
// using namespace std;
// class Student{
//     string name;
//     int rollNo;
//     int marks1,marks2,marks3;
// public:
//     Student(string a,int b,int c,int d,int e){
//         name=a;
//         rollNo=b;
//         marks1=c;
//         marks2=d;
//         marks3=e;
//     }

//     void show(){
//         cout<<"Name Of Student : "<<name<<endl;
//         cout<<"Roll No of Student: "<<rollNo<<endl;
//         cout<<"Marks in 1st Subject: "<<marks1<<endl;
//         cout<<"Marks in 2nd Subject: "<<marks2<<endl;
//         cout<<"Marks in 3rd Subject: "<<marks3<<endl;
//     }
//     friend  int calculate(Student a);
// };
// int calculate(Student a){
//     int total=(a.marks1+a.marks2+a.marks3);
//     int avgMarks=(a.marks1+a.marks2+a.marks3)/3;
//     if(avgMarks>=90 && avgMarks<=100){
//         cout<<"A+"<<endl;
//     }
//     else if(avgMarks>=80 && avgMarks<=90){
//         cout<<"A"<<endl;
//     }
//     else if(avgMarks<=80 && avgMarks>60){
//         cout<<"B"<<endl;
//     }
//     else if(avgMarks>=50 && avgMarks<=60){
//         cout<<"C"<<endl;
//     }
//     else{
//         cout<<"FAIL"<<endl;
//     }
// }
// int main(){
//     Student a("Pratik",23,78,97,93);
//     a.show();
//     calculate(a);
//     return 0;
// }



// Bank Balance Comparison
// Create a class BankAccount with private name and balance.

// Use a constructor to initialize details.

// Use a friend function to compare balances of two accounts.

// #include<iostream>
// using namespace std;
// class BankAccount{
//     string name;
//     int balance;
// public:
//     BankAccount(string a,int b){
//         name=a;
//         balance=b;
//     }
//     void show(){
//         cout<<"Name of Account Holder: "<<name<<endl;
//         cout<<"Initial amount of Bank: "<<balance<<endl;
//     }
//     friend  void CompareBalance(BankAccount b1,BankAccount b2);
// };

// int main(){
//     BankAccount a("Pratik",9000);
//     BankAccount b("Papa",10000);
    
//     a.show();
//     b.show();
//     CompareBalance(a,b);
//     return 0;   
// }



// Employee Salary Raise
// Create a class Employee with private name and salary.

// Use a constructor to set details.

// Use a friend function to increase salary by a given percentage.

// #include<iostream>
// using namespace std;
// class Employee{
//     string name;
//     int salary;
// public:
//     Employee(string a,int b){
//         name=a;
//         salary=b;
//     }
//     void show(){
//         cout<<"The Employee Name is: "<<name<<endl;
//         cout<<"The Salary of Employee is: "<<salary<<endl;
//     }
//     friend int increaseSalary(Employee e1);
// };
// int increaseSalary(Employee e1){
//     int percent;
//     cout<<"Enter the percent by which salary has to be increased: "<<endl;
//     cin>>percent;
//     e1.salary+=(e1.salary*percent)/100;
//     cout<<e1.salary<<endl;
// }
// int main(){
//     Employee e1("PRATIK",80000);
//     e1.show();
//     increaseSalary(e1);
//     return 0;
// }


// Two-Class Maximum
// Create two classes Alpha and Beta with private integer values.

// Use constructors to assign values.

// Use a friend function to return the bigger value.

// #include<iostream>
// using namespace std;
// class Beta;
// class Alpha{
//     int a;
// public:
//   Alpha(int y){
//         a=y;
//     }
//     void show(){
//         cout<<"The integer stored in alpha is: "<<a<<endl;

// }
//     friend void CompareValues(Alpha a,Beta b);
// };
// class Beta{
//     int b;
// public:
//     Beta(int x){
//         b=x;
//     }
    
//     void show(){
//         cout<<"The Value stored inside the "<<b<<endl;
//     }
//     friend void CompareValues(Alpha,Beta );
// };
// void CompareValues(Alpha a,Beta b){
//     if(a.a> b.b){
//         cout<<"First Class has greater integer value than the other: "<<endl;
//     }
//     else if(a.a<b.b){
//         cout<<"Second class has greater value than the other: "<<endl;
//     }
//     else{
//         cout<<"Both Have equal values "<<endl;
//     }
// }
// int main(){
//     Alpha a(78);
//     Beta b(89);
//     a.show();
//     b.show();
//     CompareValues(a,b);
//     return 0;
// }



// Swap Private Data
// Create two classes Box1 and Box2 with private integers.

// Use constructors to assign initial values.

// Use a friend function to swap the private values.

// #include<iostream>
// using namespace std;
// class Box2;
// class Box1{
//     int a;
// public:
//     Box1(int x){
//         a=x;
//     }
//     void show(){
//         cout<<"Value of first class object before invoking swap function: "<<a<<endl;
//     }
//     friend void swap(Box1 &,Box2 &);
// };
// class Box2{
//     int b;
// public:
//     Box2(int y){
//         b=y;
//     }
//     void show(){
//         cout<<"Value of Second class object before invoking swap function: "<<b<<endl;
//     }
//     friend void swap(Box1 &,Box2 &);
// };
// void swap(Box1 &p,Box2 &r){
//     int temp=p.a;
//     p.a=r.b;
//     r.b=temp;
//     cout<<"Values of first and second class objects respectively: "<<p.a<<" and "<<r.b<<endl;
// }
// int main(){
//     Box1 p(78);
//     Box2 r(80);
//     p.show();
//     r.show();
//     swap(p,r);
//     p.show();
//     r.show();
//     return 0;

// }



// Difficult
// Bank Account Transfer System
// Create a BankAccount class with private name, accountNumber, and balance.

// Use a constructor to auto-generate account numbers with a static member.

// Use a friend function to transfer money between two accounts.

// #include<iostream>
// #include<random>
// using namespace std;
// class BankAccount{
//     string name;
//     static int accountNumber;
//     int balance;
// public:
//     BankAccount(string a,int c){
//         name=a;
//         balance=c;
//     }
//     void show(){
//         cout<<"INITIAL MONEY IN BANK ACCOUNTS: "<<balance<<endl;
//     }
//     friend void transferMoney(BankAccount & b1,BankAccount & b2);
// };

// static int accountNumber=100;

// void transferMoney(BankAccount &b1,BankAccount & b2){
//     int money;
//     cout<<"Enter the money to be transferred from one account to another: "<<endl;
//     cin>>money;
//     if(money<=b2.balance){
//         b1.balance+=money;
//         b2.balance-=money;
//         cout<<"Updated balance of first account; "<<b1.balance<<endl;
//         cout<<"Remaining amount in second account: "<<b2.balance<<endl;
//     }
//     else{
//        cout<< "Not Enough MONEY"<<endl;
//     }
// }
// int main(){
//     BankAccount b1("Pratik",9000);
//     BankAccount b2("Anubhav",12000);
//     b1.show();
//     b2.show();
//     transferMoney(b1,b2);
//     b1.show();
//     b2.show();
//     return 0;
// }



// Topper Finder
// Create a Student class with private name, rollNo, and marks.

// Use a constructor to initialize all fields.

// Use an array of objects and a friend function to find the topper.

// #include<iostream>
// using namespace std;
// class Student{
//     string name;
//     int rollNo;
//     int marks;
// public:
//     Student(string a,int b,int c){
//        name=a;
//        rollNo=b;
//        marks=c;
// }
//     void show(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Roll NO: "<<rollNo<<endl;
//         cout<<"Marks: "<<marks<<endl;
//     }
//     friend void topper(Student s[],int n);
    
// };
// void topper(Student s[],int n){
//     int topperIndex=0;
//     for(int i=0;i<n;i++){
//         if(s[i].marks>s[topperIndex].marks){
//             topperIndex=i;
//     }
//      cout << "\nTopper details:\n";
//     cout << "Name: " << s[topperIndex].name << endl;
//     cout << "Roll No: " << s[topperIndex].rollNo << endl;
//     cout << "Marks: " << s[topperIndex].marks << endl;
// }
// }
// int main(){
// Student s[4]={
//     Student("Pratik",3,60),
//     Student("Pratik",6,98),
//     Student("Pratik",23,45),
//     Student("Pratik",7,93)
// };
//     for(int i=0;i<4;i++){
//         s[i].show();
//     }
//     topper(s,3);
//     return 0;
// }



// Inventory System
// Create a Product class with private id, name, price, and stock.

// Use a constructor to initialize product details.

// Use a friend function to compare stock and find the highest-stock product.

// #include<iostream>
// using namespace std;
// class Product{
//     int id,price,stock;
//     string name;
// public:
//     Product(string a,int b,int c,int d){
//         name=a;
//         id=b;
//         price=c;
//         stock=d;
//     }
//     void show(){
//         cout<<"The Product Details are as follows: "<<endl;
//         cout<<"Name: "<<name<<endl;
//         cout<<"ID: "<<id<<endl;
//         cout<<"PRICE: "<<price<<endl;
//         cout<<"Stock: "<<stock<<endl;
//     }
//     friend void Compare(Product p[],int n);
// };
// void Compare(Product p[],int n){
//     int topStock=0;
//     for(int i=1;i<n;i++){
//         if(p[i].stock>p[topStock].stock){
//             topStock=i;
//         }
//         cout<<"TOP STOCK DETAILS: "<<endl;
//         cout<<"The Product with Top Stock is: "<<p[topStock].name<<endl;
//         cout<<"TOP STOCK ID: "<<p[topStock].id<<endl;
//         cout<<"TOP STOCK PRICE: "<<p[topStock].price<<endl;
//         cout<<"TOP STOCK stocks: "<<p[topStock].stock<<endl;
//     }
// }
// int main(){
//     Product p[3]={
//         Product("APPLE",4,5666,4555),
//         Product("Google",45,78,4545),
//         Product("RAYMONDS",45,564,53)
//     };
//     for(int i=0;i<3;i++){
//        p[i].show();
//        cout<<endl;
//     }
//     Compare(p,3);
//     return 0;
// }



// Triangle Area from Three Points
// Create a Point class with private coordinates.

// Use constructors for points.

// Use a friend function to compute the area of a triangle formed by three points.

#include<iostream>
#include<cmath>// Triangle Area from Three Points
// Create a Point class with private coordinates.

// Use constructors for points.

// Use a friend function to compute the area of a triangle formed by three points.
// using namespace std;
// class Point{
//     double x,y;
// public:
//     Point(double a,double b){
//         x=a;
//         y=b;
//     }
//     void show(){
//         cout<<"The x coordinate is: "<<x<<endl;
//         cout<<"The Y coordinate is: "<<y<<endl;
//     }
//     friend double Area(Point p1,Point p2,Point p3);
//     friend double Distance(Point p1,Point p2);
// };
// double Distance(Point p1,Point p2){
//     double d=(p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y);
//     return sqrt(d);
// }
// double Area(Point p1,Point p2,Point p3){
//     double a=Distance(p1,p2);
//     double b=Distance(p1,p3);
//     double c=Distance(p2,p3);
//     double s=(a+b+c)/2;
//     return sqrt(s*(s-a)*(s-b)*(s-c));
// }
// int main(){
//     Point p1(1.0,6.7);
//     Point p2(4.5,7.9);
//     Point p3(6.2,9.0);
//     cout<<"COORDINATES BEFORE AREA CALCULATION: "<<endl;
//     p1.show();
//     p2.show();
//     p3.show();

//     cout<<"Area of Triangle: "<<Area(p1,p2,p3)<<endl;
//     return 0;
// }


// Mini ATM System
// Create a BankAccount class with deposit, withdraw, display, and static account number generation.

// Use constructors and a friend function for fund transfer.

// Add menu-driven options in main().

// #include<iostream>
// using namespace std;
// class BankAccount{
//     string name;
//     int balance;
//     int accountNumber;
//     static int nextaccountNumber;
    
// public:
//     BankAccount(string a,int b){
//         name=a;
//         balance=b;
//         accountNumber=nextaccountNumber++;
//     }
//     void show(){
//         cout<<"ACCOUNT DETAILS: "<<endl;
//         cout<<"NAME: "<<name<<endl;
//         cout<<"BALANCE: "<<balance<<endl;
//         cout<<"Acc No: :"<<accountNumber<<endl;
//     }
//     void deposit(int a){
//         balance+=a;
//         cout<<"Balance is: "<<balance<<endl;
//     }
//     void withdraw(int b){
//         if(b>balance){
//             cout<<"Not Enough Balance in account to withdraw: "<<endl;
//         }
//         else{balance-=b;
//         cout<<"Amount Withdrew from account: "<<b<<endl;
//         cout<<"Remaining Balance: "<<balance<<endl;
//         }
//     }
//     friend void transfer(BankAccount &b1,BankAccount &b2,int x);
// };

// void transfer(BankAccount &b1,BankAccount &b2,int x){
//     if(x<=b2.balance){
//         b2.balance-=x;
//         b1.balance+=x;
//         cout<<"1St account balance: "<<b1.balance<<endl;
//         cout<<"2nd Account balance: "<<b2.balance<<endl;
//     }
//     else{
//         cout<<"Not Possible"<<endl;
//     }
// }
// int BankAccount::nextaccountNumber = 100;
// int main(){
//     BankAccount b1("Pratik",56000);
//     BankAccount b2("Satyam",23000);
//     b1.show();
//     b2.show();
//     b1.deposit(1000);
//     b2.withdraw(4500);
//     transfer(b1,b2,5600);
//     b1.show();
//     b2.show();
//     return 0;
// }






// Extra challenge
// Mark Analysis with Array of Objects
// Create a Student class with constructor-based initialization.

// Use a friend function to compute class average and identify the topper from an array of objects.




// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
//     string name;
//     int marks;

// public:
//     Student(string a, int b) {
//         name = a;
//         marks = b;
//     }

//     void show() {
//         cout << "Name: " << name << endl;
//         cout << "Marks: " << marks << endl;
//     }

//     friend void average(Student s[], int n);
// };

// void average(Student s[], int n) {
//     int totalMarks = 0;
//     int topIndex = 0;

//     for (int i = 0; i < n; i++) {
//         totalMarks += s[i].marks;
//         if (s[i].marks > s[topIndex].marks) {
//             topIndex = i;
//         }
//     }

//     cout << "Class average: " << (double)totalMarks / n << endl;
//     cout << "Topper details:\n";
//     cout << "Name: " << s[topIndex].name << endl;
//     cout << "Marks: " << s[topIndex].marks << endl;
// }

// int main() {
//     Student s[3] = {
//         Student("Pratik", 98),
//         Student("Anubhav", 78),
//         Student("Satyam", 97)
//     };

//     for (int i = 0; i < 3; i++) {
//         s[i].show();
//     }

//     average(s, 3);

//     return 0;
// }




// Car Comparison
// Create a Car class with private brand, speed, and price.

// Use constructors.

// Use a friend function to compare two cars and print which is faster.


// #include<iostream>
// using namespace std;
// class Car{
//     string brand;
//     int speed,price;
// public:
//     Car(string a,int b,int c){
//         brand=a;
//         speed=b;
//         price=c;
//     }    
//     void show(){
//         cout<<"Brand of car is: "<<brand<<endl;
//         cout<<"Price of car is: "<<price<<endl;
//         cout<<"Speed Of Car is: "<<speed<<endl;
//     }
//     friend void Compare(Car a, Car b);

// };
// void Compare(Car a,Car b){
//     if(a.speed>b.speed){
//         cout<<"First Car is Faster than the second car, with a diffrence of speed of: "<<a.speed-b.speed<<" KMPH "<<endl;

//     }
//     else if(a.speed==b.speed){
//         cout<<"Both The Car Have EQUAL Speed "<<a.speed<<" 2nd car Speed: "<<b.speed<<endl;
//     }
//     else{
//         cout<<"2nd Car is Fastest Among the two, with a diffrence of speed of: "<<b.speed-a.speed<<" KMPH "<<endl;
//     }
// }
// int main(){
//     Car c1("FORD",220,890000);
//     Car c2("Mahindra",235,120000);
//     c1.show();
//     c2.show();
//     Compare(c1,c2);
//     return 0;
// }




// Cube Volume and Comparison
// Create a Cube class with side length.

// Use a constructor.

// Use a friend function to compare volumes of two cubes.

// #include<iostream>
// using namespace std;
// class Cube{
//     double length,breadth,height;
// public:
//     Cube(double a,double b,double c){
//         length=a;
//         breadth=b;
//         height=c;
//     }
//     void show(){
//         cout<<"The Dimensions Are: "<<endl;
//         cout<<"LENGTH: "<<length<<endl<<"BREADTH: "<<breadth<<endl<<"HEIGHT: "<<height<<endl;
//     }
//     friend void Compare(Cube c1,Cube c2);
// };
// void Compare(Cube c1,Cube c2){
//     int volume1=c1.length*c1.breadth*c1.height;
//     int volume2=c2.length*c2.breadth*c2.height;
//     if(volume2>volume2){
//         cout<<"2nd cube has larger volume than 1st: "<<volume2<<endl;
//     }
//     else if(volume1==volume2){
//         cout<<"Both the cube have same volunme: "<<volume1<<endl;
//     }
//     else{
//         cout<<"1st Cube has the largest volume: "<<volume1<<endl;
//     }
// }
// int main(){
//     Cube b(56,8.7,87);
//     Cube c(7.8,6.7,8.9);
//     c.show();
//     b.show();
//     Compare(b,c);
//     return 0;
// }