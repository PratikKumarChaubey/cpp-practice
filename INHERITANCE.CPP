// Section 1: Easy Warm-ups (5 Questions)
// Focus: Basic syntax, access specifiers, and simple single inheritance.
// 1.	Access Control Basics: Create a base class Person with a protected string member name and a public method setName(string).
//  Derive a class Student publicly from Person. In Student, add a method display() that prints name.
//   Demonstrate in main() that name cannot be directly accessed from main(), but display() works.

// #include<iostream>
// using namespace std;
// class Person{
// protected:
//     string name;
// public:
//     void setName(string a){
//         name=a;
//     }
// };
// class Student:public Person{
//     public:
//         void show(){
//             cout<<"The Name is: "<<name<<endl;
//         }
// };
// int main(){
//     Student s1;
//     s1.setName("Pratik Kumar Chaubey");
//     s1.show();
//     return 0;
// }






// 2.	Constructor Chain Check:
//  Write a base class Base with a default constructor that prints "Base Constructor" and a derived class Derived :
//   public Base whose default constructor prints "Derived Constructor".
//    Create a Derived object in main() and observe the order of constructor execution.

/*
#include<iostream>
using namespace std;

// class Base{
// public:
//     Base(){
//         cout<<"Base Constructor "<<endl;
//     }
// };
// class Derived:public Base{
// public:
//     Derived(){
//         cout<<"Derived Constructor "<<endl;
//     }
// };
// int main(){
//     Derived d1;
//     return 0;
// }


*/


// 3.	Protected Member Modification: Write a base class Shape with a protected integer width.
//  Create a derived class Square that has a method setSide(int s) which assigns s
//   directly to width and a method getArea() that returns width * width.

/*
#include<iostream>
using namespace std;
class Shape{
protected:
    double width;

};
class Square:public Shape{
public:
    void setSide(double a){
        width=a;
    }
    void getArea(){
        cout<<"The Area is: "<<width*width<<endl;
    }
};
int main(){
    Square s1;
    s1.setSide(15);
    s1.getArea();
    return 0;
}

*/



// 4.	Simple Single Inheritance with Parameters: Create a base class Vehicle with protected attributes brand and speed.
//  Pass these values via a parameterized constructor in Vehicle.
//   Derive Car publicly and add a showDetails() function inside Car to output both attributes.



// #include<iostream>
// using namespace std;
// class Vehicle{
// protected:
//     int speed;
//     string brand;
// public:
//     Vehicle(int a,string b){
//         speed=a;
//         brand=b;
//     }
// };
// class Car:public Vehicle{
// public:
//     Car(int a,string b):Vehicle(a,b){

//     }
//     void showDetails(){
//         cout<<"The car brand is: "<<brand<<endl<<"The car speed is: "<<speed<<endl;
//     }
// };
// int main(){
//     Car c1(90,"Ford");
//     c1.showDetails();
//     return 0;
// }






// 5.	this Pointer & Single Inheritance: Write a class Device with a protected member string brand.
//  Use this->brand = brand inside a setter method.
//   Derive a class Phone and write a method inside Phone that appends "-Mobile" to brand using this->brand.

// #include<iostream>
// using namespace std;
// class Device{
// protected:
//     string brand;
// public:
//     void set(string brand){
//         this->brand=brand;
//     }
// };
// class Phone:public Device{
// public:
//     void append(){
//         this->brand+="-Mobile";
//     }
//     void show() {
//         cout << "Final Brand Name: " << this->brand << endl;
//     }
// };
// int main(){
//     Phone p1;
//     p1.set("Samsung");
//     p1.append();
//     p1.show();
//     return 0;
// }







// Section 2: Medium Challenges (5 Questions)
// Focus: Friend functions, operator overloading, and protected vs. private visibility combinations.


// 6.	Protected Visibility Mode: 
// Given a base class Parent with a public variable int x = 10 and a protected variable int y = 20.
//  Inherit Child using protected inheritance (class Child : protected Parent).
//   Write a method inside Child to display x and y. What happens if you try to access childObj.x 
//   inside main()? Write the code and explain why.

// #include<iostream>
// using namespace std;
// class Parent{
// protected:
//     int y=20;
// public:
//     int x=10;
// };
// class Child:protected Parent{
// public:
//     void show(){
//         cout<<"The Values of X AND Y are: "<<x<<" , "<<y<<endl;
//     }
// };
// int main(){
//     Child c1;
//     c1.show();
//     /*c1.Y;  , IT IS PRIVATE DATA MEMBER OF PARENT CLASS, CANT BE ACCESED DIRECTLY
//     c1.X;   , EVEN THOUGH IT IS PUBLIC BUT THE INHERITANCE IS PROTECTED WHICH MAKES IT UNACCESIBLE DIRECTLY*/  
//     return 0;
// }







// 7.	Friend Function across Base and Derived: 
// Create a base class Account with a protected double balance. Derive SavingsAccount publicly.
//  Write a global friend function void audit(SavingsAccount acc)
//   (declared as a friend inside SavingsAccount) that accesses balance to print an audit report.


// #include<iostream>
// using namespace std;
// class Account{
// protected:
//     double balance;
// public:
//     void setBalance(double a){
//         balance=a;
//     }
//     friend void audit(Account a);
// };
// class SavingsAccount : public Account {
// public:
//     // Declare audit() as a friend inside SavingsAccount
//     friend void audit(SavingsAccount acc);
// };

// void audit(Account a){
//     cout<<"THE BALANCE IN THE SAVING ACCOUNTS IS: "<<a.balance<<endl;
// }
// int main(){
//     Account a;
//     a.setBalance(56980);
//     audit(a);
//     return 0;
// }









// 8.	Single Inheritance + Operator Overloading (+): 
// Create a base class Number with a protected integer val. 
// Derive a class ComplexNumber publicly from Number which adds a second member imag.
//  Overload the + operator as a member function of ComplexNumber to add two ComplexNumber objects.


// #include<iostream>
// using namespace std;
// class Number{
// protected:
//     int real;
// };
// class ComplexNumber:public Number{
//     int img;
// public:
// // Parameterized constructor to initialize real and imaginary parts
//     ComplexNumber(int r = 0, int i = 0) {
//         real = r; // Assigning directly to inherited 'real'
//         img = i;
//     }
// // Overloading the '+' operator as a member function
//     ComplexNumber operator+(const ComplexNumber& c) {
//         ComplexNumber temp;
        
//         // Add current object's real part + incoming object's real part
//         temp.real = real + c.real;
        
//         // Add current object's imaginary part + incoming object's imaginary part
//         temp.img = img + c.img;
        
//         return temp;
//     }

//     void display() {
//         cout << real << " + " << img << "i" << endl;
//     }
// };

// int main(){
//     ComplexNumber c1(3, 4); // 3 + 4i
//     ComplexNumber c2(5, 6); // 5 + 6i

//     // Equivalent to: ComplexNumber c3 = c1.operator+(c2);
//     ComplexNumber c3 = c1 + c2; 

//     cout << "c1 = "; c1.display();
//     cout << "c2 = "; c2.display();
//     cout << "c1 + c2 = "; c3.display(); // Output: 8 + 10i

//     return 0;
// }




// 9.	Object Copying with Inheritance: Write a base class BaseData with a protected integer data.
//  Write a parameterized constructor and a copy constructor for BaseData.
//   Derive DerivedData publicly. Create an object of DerivedData,
//    copy it to another DerivedData object, and verify that the base data is correctly copied.

// #include<iostream>
// using namespace std;
// class BaseData{
// protected:
//     int data;
// public:
//     BaseData(int a){
//         data=a;
//     }
//     BaseData(const BaseData & a){
//         data=a.data;
    
//     }
//     void display() {
//         cout << "Data: " << data << endl;
//     }
// };
// class DerivedData:public BaseData{
// public:
//     DerivedData(int a):BaseData(a){}
// };
// int main(){
//     DerivedData d1(100);
//     DerivedData d2 = d1;  // Copy d1 into d2 using the copy constructor

//     cout << "d1 details: "; d1.display();
//     cout << "d2 details: "; d2.display();

//     return 0;
//     return 0;
// }









// 10.	Shadowing vs. Inheritance: Create a base class Base with a protected variable int code = 100.
//  Create a derived class Derived that also declares a public variable named int code = 200.
//   Write a method inside Derived that prints both the derived code and the base class Base::code explicitly.



// #include<iostream>
// using namespace std;
// class Base{
// protected:
//     int code=100;

// };
// class Derived:public Base{
// public:
//     int code=200;
//     void show(){
//         cout<<"THE CODE FOR BASE CLASS IS: "<<Base::code<<endl;
//         cout<<"THE CODE FOR DERIVED CLASS IS: "<<code<<endl;
//     }
// };
// int main(){
//     Derived d1;
//     d1.show();
//     return 0;
// }






// Section 3: Difficult / Deep-Dive Problems (10 Questions)
// Focus: Complex logic, pointer interaction, edge cases in protected access, and custom implementations.


// 11.	Protected Member Access Rule Edge Case:
// o	Rule: A derived class can access protected members of a base class, 
// but only through objects of the derived class type (or its subtypes),
//  not through a plain base class object instance passed into a method.
// oTask: Write a base class Base with protected int secret = 42.
// Write a derived class Derived :
// public Base. Inside a member function of Derived, accept two parameters:
// Base b and Derived d. Try accessing b.secret vs d.secret.
//  Code this up and write a comment explaining which one causes a compiler error
// and why.


// #include<iostream>
// using namespace std;
// class Base{
// protected:
//     int secret=42;
// };
// class Derived:public Base{
//     int x;
//     int y;
// public:
//     void set(int a,int b){
//         x=a;
//         y=b;
//     }
//     void accept(Base b,Derived d){
//        // b.secret=x;// THIS IS NOT ACCESIBLE, AS SECRET IS A PROTECTED DATA.
//         d.secret=y;
//         cout << "d.secret successfully set to: " << d.secret << endl;
//     }
// };
// int main(){
//     Derived d1,d2;
//     Base b1;
//     d1.set(34,56);
//     d1.accept(b1,d2);
//     return 0;
// }








// Create a project with three classes:

// SimpleCalculator

// Takes two numbers as input from the user (using a member function).

// Performs basic arithmetic operations: addition (+), subtraction (-), multiplication (*), and division (/).

// Displays the results using a member function.

// ScientificCalculator

// Takes two numbers as input from the user (using a member function).

// Performs 4 scientific/mathematical operations (e.g., square root, power / exponentiation, sine, cosine, logarithm, or tangent).

// Displays the results using a member function.

// HybridCalculator

// Inherits from both SimpleCalculator and ScientificCalculator using Multiple Inheritance (class HybridCalculator : public SimpleCalculator, public ScientificCalculator).

// Create an object of HybridCalculator in main() and execute methods of both simple and scientific calculators.

// Questions asked in the video to answer in your comments/code:

// Q1: What type of inheritance are you using?

// Q2: Which mode of code visibility/access specifier are you using for inheritance?

// Q3: Create an object of HybridCalculator and display results of both simple and scientific operations.

// Q4: How are SimpleCalculator and ScientificCalculator initialized?



// #include <iostream>
// #include <cmath>
// using namespace std;

// class SimpleCalculator {
// protected:
//     double x, y;
// public:
//     void setSimple(double a, double b) {
//         x = a;
//         y = b;
//     }
//     void add() {
//         cout << "The addition of the two numbers will be: " << x + y << endl;
//     }
//     void subtraction() {
//         cout << "The subtraction of the two numbers will be: " << x - y << endl;
//     }
//     void mul() {
//         cout << "The Multiplication of the two numbers will be: " << x * y << endl;
//     }
//     void div() {
//         if (y != 0)
//             cout << "The Division of the two numbers will be: " << x / y << endl;
//         else
//             cout << "Division by zero error!" << endl;
//     }
// };

// class ScientificCalculator {
// protected:
//     double x, y;
//     int a;
// public:
//     void setScientific(double base, double power) {
//         x = base;
//         y = power;
//     }
//     void setInteger(int squareroot) {
//         a = squareroot;
//     }
//     void exponentation() {
//         cout << x << " to the power " << y << " will be: " << pow(x, y) << endl;
//     }
//     void squareRoot() {
//         cout << "The Square Root of " << a << " is: " << sqrt(a) << endl;
//     }
// };

// class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
// public:
//     // Single unified set function passing values up to both base classes explicitly
//     void set(double a, double b) {
//         SimpleCalculator::setSimple(a, b);
//         ScientificCalculator::setScientific(a, b);
//     }
// };

// int main() {
//     HybridCalculator h1;
//     h1.set(4.0, 7.0);
//     h1.setInteger(625);

//     h1.add();
//     h1.subtraction();
//     h1.mul();
//     h1.div();
//     h1.exponentation();
//     h1.squareRoot();

//     return 0;
// }









// Section 1: Easy / Fundamentals (4 Questions)
// Multiple Inheritance Basic Assembly:

// Create class Alpha with public integer a and class Beta with public integer b.

// Derive Gamma publicly from both Alpha and Beta.

// Write a function inside Gamma that displays the sum of a and b.


// #include<iostream>
// using namespace std;
// class Alpha{
// public:
//     int a;
// };
// class Beta{
// public:
//     int b;
// };
// class Gama: public Alpha,public Beta{
// public:
//     void set(int x,int y){
//         a=x;
//         b=y;
//     }
//     void sum(){
//         cout<<"The Sum will be: "<<a+b<<endl;
//     }
// };
// int main(){
//     Gama g1;
//     g1.set(5,8);
//     g1.sum();
//     return 0;
// }









// Multilevel Inheritance Chain:

// Class GrandParent has protected int gen1_id = 100.

// Class Parent : public GrandParent adds protected int gen2_id = 200.

// Class Child : public Parent adds a public function showIDs() that prints all three generation IDs (gen1_id, gen2_id, and its own gen3_id = 300).

// #include<iostream>
// using namespace std;
// class GrandParent{
// protected:
//     int gen1_id=100;
// };
// class Parent:public GrandParent{
// protected:
//     int gen2_id=200;
// };
// class Child:public Parent{
// protected:
//     int gen3_id=300;
// public:
//     void show(){
//         cout<<"The Genration id for the 1st gen is: "<<gen1_id<<endl;
//         cout<<"The Genration id for the 2nd gen is: "<<gen2_id<<endl;
//         cout<<"The Genration id for the 3rd gen is: "<<gen3_id<<endl;
//     }
// };
// int main(){
//     Child c1;
//     c1.show();
//     return 0;
// }








// Visibility Mode Verification:

// If class Derived : protected Base inherits a public variable x from Base, what visibility does x have inside Derived? Can main() access d1.x directly? Write a 4-line snippet demonstrating this.

// #include<iostream>
// using namespace std;
// class Base{
// public:
//     int x=20;
// };
// class Derived:protected  Base{
// public:
//     void show(){
//         cout<<"The value of x is: "<<x<<endl;
//     }
// };
// int main(){
//     Derived d1;
//     //d1.x;  // X WILL BE PROTECED INSIDE DERIVED CLASS  CAUSE IT WAS PUBLIC INSIDE BASE CLASS AND THE INHERITANCE IS PROTECTED.
//     d1.show();
//     return 0;// SHOW METHOD CREATED ABOVE MAY BE USED TO GET THE VALUE OF X.
// }


// Default Constructor Order in Multiple Inheritance:

// Create class Device (prints "Device Ready") and class Network (prints "Network Connected").

// Derive SmartPhone : public Device, public Network.

// Write main() with SmartPhone p1; and verify which constructor executes first. What happens if you change inheritance to public Network, public Device?


// #include<iostream>
// using namespace std;
// class Device{
// public:
//    Device(){
//     cout<<"Device is ready"<<endl;
//    }
// };
// class Network{
// public:
//     Network(){
//         cout<<"Netwrok Connected "<<endl;
//     }
// };
// class Smartphone:public Device ,public Network{};
// int main(){
//     Smartphone p1;
//     return 0;   // The Output will get reversed if we reversed the inheritance order
// }







// Section 2: Medium Challenges (4 Questions)
// Inheritance-Based Student Result System (Multilevel):

// Base Class Student: holds protected string name and protected int roll_number.

// Derived Class Test : public Student: holds protected float marks1, marks2.

// Derived Class Result : public Test: has a method displayResult() that calculates and prints total marks and percentage alongside name and roll_number.


// #include<iostream>
// using namespace std;

// class Student{
// protected:
//     string name;
//     int roll_no;
// public:
//     void set(string a,int b){
//         name=a;
//         roll_no=b;
//     }
// };
// class Test{
// protected:
//     float marks1,marks2;
// public:
//     void set2(int a,int b){
//         marks1=a;
//         marks2=b;
//     }
// };
// class Result:public Test,public Student{
// public:
//     void displayResult(){
//         cout<<"The name of student is: "<<name<<endl;
//         cout<<"The students roll no is: "<<roll_no<<endl;
//         cout<<"The total marks scored by Student is: "<<marks1+marks2<<endl;
//         cout<<"The Percentage scored by student is: "<<(marks1+marks2)/2<<endl;
//     }
// };

// int main(){
//     Result r1;
//     r1.set("Pratik Kumar Chaubey",8);
//     r1.set2(91,96);
//     r1.displayResult();
//     return 0;
// }



// E-Commerce Order System (Multiple Inheritance):

// Class ItemDetails: holds protected double itemPrice and protected string itemName.

// Class ShippingDetails: holds protected double shippingCost.

// Class Invoice : public ItemDetails, public ShippingDetails: has a function printInvoice() that computes totalAmount = itemPrice + shippingCost and prints a formatted bill.


// #include<iostream>
// using namespace std;

// class ItemDetails{
// protected:
//     double itemPrice;
//     string itemName;
// public:
//     void setItemDetail(double a,string b){
//         itemName=b;
//         itemPrice=a;
//     }
// };
// class ShippingDetails{
// protected: 
//     double shippingCost;
// public:
//     void setShippingCost(double a){
//         shippingCost=a;
//     }
// };
// class invoice:public ShippingDetails,public ItemDetails{
// public:
//     void display(){
//         cout<<"The Item Name is: "<<itemName<<endl;
//         cout<<"The total cost here is: "<<itemPrice+shippingCost<<endl;

//     }
// };
// int main(){
//     invoice i1;
//     i1.setItemDetail(120000,"FORD ECOSPORT");
//     i1.setShippingCost(5000);
//     i1.display();
//     return 0;
// }






// Member Variable Shadowing across Inheritance:

// Base class BaseVal has protected int value = 50.

// Derived class DerivedVal : public BaseVal has its own public int value = 500.

// Write a function inside DerivedVal that explicitly prints both the derived value and the base BaseVal::value.


// #include<iostream>
// using namespace std;

// class BaseVal{
// protected:
//     int value=50;
// };
// class DerivedVal:public BaseVal{
// public:
//     int value=500;
//     void show(){
//         cout<<"The base class integer value is: "<<BaseVal::value<<endl;
//         cout<<"The Derived clas integer value is: "<<value<<endl;
//     }
// };
// int main(){
//     DerivedVal d1;
//     d1.show();
//     return 0;
// }







// Protected Member Function Access:

// Base class Security has a protected function void logAccess().

// Derived class DoorLock : public Security calls logAccess() inside its public function unlockDoor(). Explain why main() cannot call lock.logAccess() directly.


// #include<iostream>
// using namespace std;
// class Security{
// protected:
//     void logAccess(){
//         cout<<"Your access has been granted "<<endl;
//     }
// };
// class DoorLock:public Security{
// public:
//     void unlockDoor(){
//         logAccess();
//         cout<<"The door has been unlocked"<<endl;
//     }
// };
// int main(){
//     DoorLock d1;
//     d1.unlockDoor();
//     return 0;
// }






// Section 3: Advanced / Deep-Dive Problems (4 Questions)
// Hybrid Calculator Implementation (Tutorial 42 Challenge):

// Implement the complete HybridCalculator using SimpleCalculator and ScientificCalculator using <cmath> functions (sqrt, pow, sin, log).

// Ensure user inputs are safely validated (e.g., prevent division by zero or square root of negative numbers).

// #include<iostream>
// #include<cmath>
// using namespace std;

// class SimpleCalculator{
// protected:
//     double x,y;
// public:
//     void setSimple(double a,double b){
//         x=a;
//         y=b;
//     }
//     void sum(){
//         cout<<"The Sum is: "<<x+y<<endl;
//     }
//     void sub(){
//         cout<<"The Subtraction is: "<<x-y<<endl;
//     }
//     void mul(){
//         cout<<"The Multiplication is: "<<x*y<<endl;
//     }
//     void div(){
//         if(y!=0){
//             cout<<"The Division is: "<<x/y<<endl;
//         }
//         else{
//             cout<<"Divison with Denumerator = 0 is not possible "<<endl;
//         }
//     }   
   

// };
// class ScientificCalculator{
// protected:
//     double x,y;
//     int a;
// public:
//     void squareroot(int number){
//         a=number;
//         if(a>=0){
//             cout<<"The square root of "<<a<<" is:"<<sqrtf(a)<<endl;
//         }
//         else{
//             cout<<"Square root is not defined for any number less than or equal to zero"<<endl;
//         }
//     }
//     void SinFunction(double number){
//         x=number;   
//         cout<<"The sin value of "<<x<<" is: "<<sin(x)<<endl;
        
//     }
//      void exponent(double base,double power){
//         x=base;
//         y=power;
//         cout<<"The exponet value of: "<<x<<" to the power "<<y <<" is: "<<pow(x,y)<<endl;
//     }
// };
// class HybridCalculator:public ScientificCalculator,public SimpleCalculator{};

// int main(){
//     HybridCalculator h1;
//     h1.setSimple(5,6);
//     h1.sum();
//     h1.sub();
//     h1.mul();
//     h1.div();
//     h1.squareroot(625);
//     h1.SinFunction(1);
//     h1.exponent(2,10);
//     return 0;
// }








// Passing Parameters across Multi-tier Constructors:

// Base Class Person(string name, int age).

// Derived Class Employee(string name, int age, int emp_id) : Person(...).

// Derived Class Manager(string name, int age, int emp_id, string department) : Employee(...).

// Implement all constructors with proper initializer list chaining from Manager down to Person.

// #include <iostream>
// #include <string>
// using namespace std;

// class Person {
// protected:
//     string name;
//     int age;
// public:
//     Person(string a, int b) {
//         name = a;
//         age = b;
//     }
// };

// class Employee : public Person {
// protected:
//     int employee_id;
// public:
//     // Pass 'name' and 'age' up to Person's constructor
//     Employee(string name, int age, int a) : Person(name, age) {
//         employee_id = a;
//     }
// };

// class Manager : public Employee {
// protected:
//     string department;
// public:
//     // Pass 'name', 'age', and 'emp_id' up to Employee's constructor
//     Manager(string name, int age, int emp_id, string a) : Employee(name, age, emp_id) {
//         department = a;
//     }

//     void show() {
//         cout << "The Employee Details are as follows: " << endl;
//         cout << "NAME: " << name << endl;
//         cout << "AGE: " << age << endl;
//         cout << "Employee ID: " << employee_id << endl;
//         cout << "Department: " << department << endl;
//     }
// };

// int main() {
//     Manager m1("Pratik Chaubey", 28, 7060, "Engineering");
//     m1.show();
//     return 0;
// }



