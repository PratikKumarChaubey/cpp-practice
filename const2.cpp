







//








// Practice questions
// Create a Student class with a default constructor that sets name to "Unknown" and age to 0. Print the values.
// #include<iostream>
// using namespace std;
// class Student{
// string name;
// int age;
// public:
//     Student(){
//         name="Unknown";
//         age=0;
//         cout<<"Name: "<<name<<endl;
//         cout<<"AGE: "<<age<<endl;
//     }
// };
// int main(){
//     Student s();
//     return 0;
// }



// Create a Book class with a parameterized constructor that takes title and price, then display them.

// #include<iostream>
// using namespace std;
// class Book{
//     string title;
//     int price;
// public:
//     Book(string x,int y){
//         title=x;
//         price=y;
//     }
//     void display(){
//         cout<<"Title of the Book is: "<<title<<endl<<"Price of the book is: "<<price<<endl;
//     }
// };
// int main(){
//     Book b1("Physics",9000);
//     b1.display();
//     return 0;
// }


    

// Write a Rectangle class with a constructor that takes length and breadth, and another constructor overload that takes only length and sets breadth to 1.

// #include<iostream>
// using namespace std;

// class Rectangle{
//     int length,breadth;
// public:
//     Rectangle(int a,int b){
//         length=a;
//         breadth=b;
//     }
//     Rectangle(int a){
//         length=a;
//         breadth=1;

//     }
//     void display_area(){
//         cout<<"The area of Rectangle is: "<<length*breadth<<"M**2"<<endl;
//     }
// };
// int main(){
//     Rectangle r1(4,8);
//     Rectangle r2(7);
//     r1.display_area();
//     r2.display_area();

//     cout<<"Area Computed Succesfully: "<<endl;
//     return 0;
// }


// Create a BankAccount class with a constructor that initializes account number, holder name, and balance. Display all details.

// #include<iostream>
// using namespace std;
// class BankAccount{
//     int account_number;
//     string holder_name;
//     int balance;
// public:
//     BankAccount(int a,int b,string c):account_number(a),holder_name(c),balance(b) {}
//     void display(){
//         cout<<"Account Holder Name: "<<holder_name<<endl<<"Account Number: "<<account_number<<endl<<"Balance: "<<balance<<endl;
//     }
// };
// int main(){
//     BankAccount b1(100983,90800,"Pratik Kumar Chaubey");
//     b1.display();
//     return 0;
// }



// Write a Car class with constructor overloading:

// no arguments,

// one argument for brand,

// two arguments for brand and model.


// #include<iostream>
// using namespace std;
// class Car{
// public:
//     Car(){
//         cout<<"No Arguments given"<<endl;
//     }
//     Car(string brand){
//         cout<<"The Car brand is:"<<brand<<endl;
//     }
//     Car(string brand,string model){
//         cout<<"Car Brand AND Model are: "<<brand<<","<<model<<endl;
//     }
// };
// int main(){
//     Car c1;
//     Car c2("Ford");
//     Car c3("Ford","Aspire");
//     return 0;
// }







//Create a Point class with a constructor having default arguments like Point(int x = 0, int y = 0). Show how different objects are initialized.

// Make a Movie class with constructors:

// default constructor,

// parameterized constructor,

// copy constructor.
// Print the values of all objects.



// #include<iostream>
// using namespace std;
// class Point{
//     int x,y;
// public:
//     Point(int a,int b){
//         x=a;
//         y=b;
//     }
//     void display(){
//         cout<<"The X-COORDINATE IS: "<<x<<endl;
//         cout<<"The Y-COORDINATE IS: "<<y<<endl;
//     }
//     friend void resultent(Point x,Point y);
// };
// void resultent(Point p1,Point p2){
//     cout<<"The Added X COORDINATE IS: "<<p1.x+p2.x<<endl;
//     cout<<"The Added Y COORDINATE IS: "<<p1.y+p2.y<<endl;
// }
// int main(){
//     Point p1(4,5);
//     Point p2(5,6);
//     p1.display();
//     p2.display();
//     resultent(p1,p2);
//     return 0;
// }






// Write a Time class with a constructor that accepts hours and minutes, and another constructor that accepts only hours.

// #include<iostream>
// using namespace std;
// class Time{
// public:
//     Time(int a,int b){
//         cout<<"The Time in this Constructor is in both HOURS AND MINUTES: "<<a<<":"<<b<<endl;
//     }
//     Time(int a){
//         cout<<"The Time here is given only in hours format: "<<a<<" Hours"<<endl;
//     }

// };
// int main(){
//     Time t1(5,45);
//     Time t2(7);
//     return 0;
// }



// Create a Student class where constructor initializes roll number and marks. Add a function to check whether marks are pass or fail.


// #include<iostream>
// using namespace std;
// class Student{
//     int roll_number,marks;
// public:
//     Student(int a,int b):roll_number(a),marks(b){}
//     void check(){
//         if(marks>=33){
//             cout<<"Student Holding Roll No: "<<roll_number<<" Has Scored: "<<marks<<endl<<"And Passed His EXAMS."<<endl;
//         }
//         else{
//             cout<<"The Student Has Failed His Exams "<<endl;
//         }
//     }
//     void display(){
//         cout<<"Studnet Roll No: "<<roll_number<<endl;
//         cout<<"Student Marks: "<<marks<<endl;
//     }
// };
// int main(){
//     Student s1(78,90);
//     Student s2(12,22);
//     s1.display();
//     s2.display();
//     s1.check();
//     s2.check();
//     return 0;
// }







// Write a Complex class with constructor overloading to initialize:

// real and imaginary parts,

// only real part,

// no values.

// #include<iostream>
// using namespace std;
// class Complex{
// double real,imag;
// public:
//     Complex(double a,double b){
//         real=a;
//         imag=b;
//     }
//     Complex(double a){
//         real=a;
//         imag=0;
//         cout<<"The Real Part is: "<<real<<endl;
//     }
//     Complex(){
//         real=0;
//         imag=0;
//         cout<<"NO VALUES TAKEN"<<endl;
//     }
//     void show(){
//         cout<<"The Real and Imaginary Part are: "<<real<<" and "<<imag<<endl;
//     }
// };
// int main(){
//     Complex c1(6.7,8.9);
//     Complex c2(7);
//     Complex c3;
//     c1.show();
//     c2.show();
//     c3.show();
//     return 0;
// }





// Extra challenge questions
// If you want harder ones, try these:



// 

//Constructor chaining using multiple constructors.

// #include<iostream>
// using namespace std;
// class Try{
// int x,y,z;
// public:
//     Try(int a,int b){
//         x=a;
//         y=b;
//         z=0;
//     }
//     Try(int a,int b,int c){
//         x=a;
//         y=b;
//         z=c;
//     }
//     Try(int a){
//         x=a;
//         y=0;
//         z=0;
//     }
//     Try(){
//         x=0;
//         y=0;
//         z=0;
//     }
//     void show(){
//         cout<<"Value of x,y and z respectively are: "<<x<<","<<y<<","<<z<<endl;
//     }

// };
// int main(){
//     Try t1(3,45,6);
//     Try t2(24,6);
//     Try t3(7);
//     Try t4;
//     t1.show();
//     t2.show();
//     t3.show();
//     t4.show();
//     return 0;
// }








// Constructor for a Triangle class that calculates area.
// #include<cmath>
// #include<iostream>
// using namespace std;
// class Triangle{
//     double x,y,z;
// public:
//     Triangle(double a,double b,double c){
//         x=a;
//         y=b;
//         z=c;
//     }
//     double area(){
//        double semip=(x+y+z)/2.0;
//        double calc=semip*(semip-x)*(semip-y)*(semip-z);
//        return sqrt(calc);
//     }
//     void show(){
//         cout<< "The area of triangle is: " << area() << " m^2" << endl;         
//     }
// };

// int main(){
//     Triangle t1(5.7,8.9,4.8);
//     t1.show();
//     return 0; 

// }



// #include <cmath>
// #include <iostream>
// using namespace std;

// class Triangle {
//     double x, y, z;

// public:
//     Triangle(double a, double b, double c) {
//         x = a;
//         y = b;
//         z = c;
//     }

//     double area() {
//         double semip = (x + y + z) / 2.0;
//         double calc = semip * (semip - x) * (semip - y) * (semip - z);
//         return sqrt(calc);
//     }

//     void show() {
//         cout << "The area of triangle is: " << area() << " m^2" << endl;
//     }
// };

// int main() {
//     Triangle t1(5.7, 8.9, 4.8);
//     t1.show();
//     return 0;
// }


//Constructor chaining using multiple constructors.

// #include<iostream>
// using namespace std;
// class Try{
// int x,y,z;
// public:
//     Try(int a,int b){
//         x=a;
//         y=b;
//         z=0;
//     }
//     Try(int a,int b,int c){
//         x=a;
//         y=b;
//         z=c;
//     }
//     Try(int a){
//         x=a;
//         y=0;
//         z=0;
//     }
//     Try(){
//         x=0;
//         y=0;
//         z=0;
//     }
//     void show(){
//         cout<<"Value of x,y and z respectively are: "<<x<<","<<y<<","<<z<<endl;
//     }

// };
// int main(){
//     Try t1(3,45,6);
//     Try t2(24,6);
//     Try t3(7);
//     Try t4;
//     t1.show();
//     t2.show();
//     t3.show();
//     t4.show();
//     return 0;
// }





// Practice questions














// Create a Student class with public and private members. Make name private and rollNo public. Add functions to set and display the private data.

// #include<iostream>
// #include<string>
// using namespace std;
// class Student{
//     string name;
// public:
//     int rollNo;
//     void setDetails(string a,int b){
//         name=a;
//         rollNo=b;
//     }
//     void show(){
//         cout<<"Name of Student: "<<name<<endl<<"Roll No of student: "<<rollNo<<endl;
//     }
// };
// int main(){
//     Student s1;
//     s1.setDetails("Pratik Kumar Chaubey",36);
//     s1.show();
//     return 0;
// }






// Write a BankAccount class where balance is private. Provide deposit() and withdraw() functions to modify it safely.

// #include<iostream>
// using namespace std;
// class BankAccount{
//     int balance=0;
// public:
//     void deposit(int a){
//         balance+=a;
//     }
//     void withdraw(int b){
//         if(b>balance){
//             cout<<"Withdraw not possible, Not Enough Money "<<endl;
//         }
//         else{
//             balance-=b;
//         }
//     }
//     void display(){
//         cout<<"Balance: "<<balance<<endl;
//     }
// };
// int main(){
//     BankAccount b1;
//     b1.deposit(56000);
//     b1.display();
//     b1.withdraw(7800);
//     b1.display();
//     return 0;
// }





// Create a class Employee with a static data member companyName. Show that all objects share the same company name.

// #include<iostream>
// using namespace std;
// class Employee{
//     static string Company_name;
//     string employee_name;
//     int salary;
// public:
//     void set_data(string a,int b){
//         employee_name=a;
//         salary=b;
//     }
//     void increment(int b){
//         salary+=(salary*b)/100;
//     }
//     void show(){
//         cout<<"The Employee Name is: "<<employee_name<<endl<<"Employee's salary is: "<<salary<<endl<<"Employee company name is: "<<Company_name<<endl;
//     }
// };
// string Employee::Company_name="Google";
// int main(){
//     Employee e1;
//     Employee e2;
//     e1.set_data("Pratik",90000);
//     e2.set_data("Anubhav",100000);
//     cout<<"BEFORE INCREMENT OF SALARY: "<<endl;
//     e1.show();
//     e2.show();
//     e1.increment(33);
//     e2.increment(30);
//     cout<<"AFTER INCREMENT OF THE SALARIES: "<<endl;
//     e1.show();
//     e2.show();
//     return 0;
// }






// Write a Car class and create an array of objects for 5 cars. Input and display details of all cars.

// #include <iostream>
// #include <string>
// using namespace std;

// class Car {
// private:
//     string brand;
//     string model;
//     double price;

// public:
//     // Default constructor is required when creating an array of objects
//     Car() {
//         brand = "";
//         model = "";
//         price = 0.0;
//     }

//     void inputDetails(int carNum) {
//         cout << "\nEnter details for Car " << carNum << ":" << endl;
//         cout << "Brand: ";
//         cin >> brand;
//         cout << "Model: ";
//         cin >> model;
//         cout << "Price: ";
//         cin >> price;
//     }

//     void showDetails(int carNum) {
//         cout << "Car " << carNum << " -> Brand: " << brand 
//              << ", Model: " << model 
//              << ", Price: $" << price << endl;
//     }
// };

// int main() {
//     Car cars[5]; // Array of 5 Car objects

//     // Input loop
//     cout << "=== INPUT CAR DETAILS ===" << endl;
//     for (int i = 0; i < 5; i++) {
//         cars[i].inputDetails(i + 1);
//     }

//     // Display loop
//     cout << "\n=== DISPLAYING ALL CARS ===" << endl;
//     for (int i = 0; i < 5; i++) {
//         cars[i].showDetails(i + 1);
//     }

//     return 0;
// }





// Create a Book class and pass an object of Book to a function that prints its title and price.


// #include<iostream>
// using namespace std;
// class Book{
//     string title;
//     int price;
// public:
//     void set(string a,int b){
//         title=a;
//         price=b;
//     }
//     void show(){
//         cout<<"Book Title: "<<title<<endl<<"Price: "<<price<<endl;
//     }
// };
// int main(){
//     Book b1;
//     Book b2;
//     b1.set("Physics Galaxy",9090);
//     b2.set("Automate The Boring Stuff With Python",12000);
//     b1.show();
//     b2.show();
//     return 0;
// }







// Write a class Point and pass two objects to a function that calculates the distance between them.


// #include<iostream>
// #include<cmath>
// using namespace std;
// class Point{
//     double x,y;
// public:
//     void set_points(double a,double b){
//         x=a;
//         y=b;
//     }
//     void show(){
//         cout<<"X-COORDINATE IS: "<<x<<" Y COORDINATE IS: "<<y<<endl;
//     }
//     friend void calculateDistance(Point p1,Point p2);
// };
// void calculateDistance(Point p1,Point p2){
//     double distance=(p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y);
//     cout<<"The Distance between the two coordinates are: "<<sqrtf(distance)<<endl;
// }
// int main(){
//     Point p1;
//     Point p2;
//     p1.set_points(13.6,14.2);
//     p2.set_points(10,9);
//     p1.show();
//     p2.show();
//     calculateDistance(p1,p2);
//     return 0;
// }







// Create a Rectangle class with a function to calculate area. Use an object array of 3 rectangles and print each area.


#include<iostream>
// using namespace std;
// class Rectangle{
//     double x,y;
// public:
//     void setData(){
//         cout<<"Enter the length of Rectangle: "<<endl;
//         cin>>x;
//         cout<<"Enter the Breadth of Rectangle: "<<endl;
//         cin>>y;
//     }
//     void calcArea(){
//         double area=x*y;
//         cout<<"The Area of rectangle is: "<<area<<endl;
//     }
    
// };
// int main(){
//     Rectangle rect[3];
//     for(int i=1;i<3;i++){
//         rect[i].setData();
//     }
//     for(int i=1;i<3;i++){
//         rect[i].calcArea();
//     }
//     return 0;
// }








// Write a Student class with private marks and a member function to calculate grade. Create 4 student objects and store them in an array.

// #include<iostream>
// using namespace std;
// class Student{
//     int marks;
// public:
//     void set(){
//         cout<<"Enter marks for student"<<endl;
//         cin>>marks;
//     }
//     void grade(){
//         if(marks>80 && marks<=100){
//             cout<<"A"<<endl;
//         }
//         else if(marks>60 && marks<=80){
//             cout<<"B"<<endl;
//         }
//         else if(marks>40 && marks<=60){
//             cout<<"C"<<endl;
//         }
//         else if(marks>33 && marks<=40){
//             cout<<"D"<<endl;
//         }
//         else{
//             cout<<"FAIL"<<endl;
//         }
//     }
//     void showMarks(){
//         cout<<"The Student has scored: "<<marks<<" marks"<<endl;
//     }
// };
// int main(){
//     Student student[4];
//     for(int i=0;i<4;i++){
//         cout<<"INPUT MARKS FOR STUDENT"<<i<<endl;
//         student[i].set();
//     }
//     for(int i=0;i<4;i++){
//         cout<<"OUTPUT FOR STUDENT"<<i<<endl;
//         student[i].showMarks(); 
//     for(int i=0;i<4;i++){
//         cout<<"GRADEE FOR STUDENT"<<i<<endl;
//         student[i].grade(); 
//     }
//     cout<<"COMPLETED "<<endl;
//     return 0;
// }

// }









// Create a class Test with a friend function that can access private data and print it.

// #include<iostream>
// using namespace std;
// class Test{
//     string name;
//     int marks;
// public:
//     Test(string a,int b){
//         name=a;
//         marks=b;
//     }
//     friend void show(Test t1);
// };
// void show(Test t1){
//     cout<<"Name of Test is: "<<t1.name<<endl;
//     cout<<"Qualifying marks for test is: "<<t1.marks<<endl;
// }
// int main(){
//     Test t("JEE",90);
//     show(t);
//     return 0;
// }






// Write a program with a Circle class and a friend function that compares the areas of two circles.

// #include<iostream>
// using namespace std;
// class Circle{
//     double radius;
// public:
//     Circle(double a):radius(a){}

//     void area(){
//         cout<<"Area is: "<<3.14*radius*radius<<endl;
//     }
//     friend void compareArea(Circle c1,Circle c2);
// };
// void compareArea(Circle c1,Circle c2){
//     double area1=c1.radius*c1.radius*3.14;
//     double area2=c2.radius*c2.radius*3.14;
//     if(area1>area2){
//         cout<<"Circle 1 with radius: "<<c1.radius<<" has greater area than circle 2 with radius: "<<c2.radius<<endl;
//     }
//     if(area1<area2){
//         cout<<"Circle 2 with radius: "<<c2.radius<<" has greater area than circle 1 with radius: "<<c1.radius<<endl;
//     }
//     else{
//         cout<<"Both the circles have equal area "<<endl;
//     }
// }
// int main(){
//     Circle c1(7.8);
//     Circle c2(8.6);
//     c1.area();
//     c2.area();
//     compareArea(c1,c2);
//     return 0;
// }








// Mixed challenge questions
// If you want a little harder practice, try these too:





//
// Use friend function to add two complex numbers.


// Create a class with both static and non-static members and compare their behavior.

// #include<iostream>
// using namespace std;
// class Student{
//     string name;
//     int standard;
//     string section;
//     static int rollNo;
//     int nextrollNO=rollNo++;
// public:
//     Student(string a,int b,string c){
//         name=a;
//         standard=b;
//         section=c;
//     }
//     void show(){
//        cout<<"NAME OF STUDENT: "<<name<<endl
//        <<"Standard of Student: "<<standard<<endl<<
//        "SECTION OF STUDNET: "<<section<<endl<<
//        "Roll NO of Student: "<<rollNo<<endl;
       
//     }

// };
// int Student::rollNo=100;
// int main(){
//     Student s1("Pratik",12,"C");
//     Student s2("Anubhav",11,"A");
//     s1.show();
//     s2.show();
//     return 0;
// }



