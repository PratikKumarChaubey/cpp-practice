// Question 1: The Diamond Problem & Virtual Base Class
// Goal: Understand how virtual inheritance solves duplicate instance creation.

// Create a base class GrandParent with public: int grand_id = 99;.

// Create two classes, Parent1 and Parent2, that inherit from GrandParent. Use the virtual keyword for both.

// Create a class Child that inherits from both Parent1 and Parent2.

// Inside main(), create a Child c; object and print c.grand_id. Verify that it compiles without any "ambiguous member" errors.

// #include<iostream>
// using namespace std;

// class GrandParent{
// public:
//     int grand_id=99;
// };

// class Parent1:virtual public GrandParent{};

// class Parent2:virtual public GrandParent{};
// class Child:public Parent1,public Parent2{};
// int main(){
//     Child c1;
//     cout<<c1.grand_id<<endl;
//     return 0;
// }

// Question 2: Constructor Order of Execution
// Goal: Predict and verify constructor execution order in complex inheritance.

// Create class Base1 (constructor prints "Base1 Constructor").

// Create class Base2 (constructor prints "Base2 Constructor").

// Create class Derived : public Base2, virtual public Base1 (constructor prints "Derived Constructor").

// In main(), instantiate Derived d;.

// Question: Which constructor runs first—Base1 or Base2? (Hint: Remember the priority rule for virtual base classes!)

// #include<iostream>
// using namespace std;
// class Base1{
// public:
//    Base1(){
//       cout<<"Base 1 Constructor initialized "<<endl;
//    }
// };
// class Base2{
// public:
//    Base2(){
//       cout<<"Base 2 Constructor initialized "<<endl;
//    }
// };
// class Derived:public Base2,virtual public Base1{
// public:
//    Derived(){
//       cout<<"Derived Constructor Initialized "<<endl;
//    }
// };
// int main(){
//    Derived d1;    // Base 1 will run first even though it is written later becuase virtual class has more priority than a normal class.
//    return 0;
// }

// Question 3: Initialization List Order Pitfall
// Goal: Spot a classic C++ initialization bug.

// Analyze the following code snippet and explain why b will output garbage or an unexpected value:

// C++
// class Test {
//     int a;
//     int b;
// public:
//     // Notice the order of initialization vs declaration above!
//     Test(int val) : b(val), a(b + 10) {
//         cout << "a = " << a << ", b = " << b << endl;
//     }
// };
// Fix the code so a and b initialize correctly using the initialization list.

// #include<iostream>
// using namespace std;
// class Test{
//    int a;
//    int b;
// public:
//    Test(int val):b(val),a(val+10){
//       cout<<"a = "<<a<<" , b= "<<b<<endl;
//    }
// };
// int main(){
//    Test t1(5);
//    return 0;
// }

// Question 4: Passing Arguments to Base Constructors
// Goal: Combine virtual base classes/derived constructors with initialization lists.

// Class Alpha takes int x in its constructor.

// Class Beta takes int y in its constructor.

// Class Gamma : public Alpha, public Beta takes (int a, int b, int c) in its constructor and initializes Alpha with a, Beta with b, and has its own int z = c.

// Write a show() function in Gamma to display all three values.

// #include<iostream>
// using namespace std;
// class Alpha{
//    int x;
// public:
//    Alpha(int a):x(a){
//       cout<<"The value of Alpha fn is: "<<x<<endl;
//    };
// };

// class Beta{
//    int y;
// public:
//    Beta(int b):y(b){
//       cout<<"The value of Beta fn is: "<<y<<endl;
//    };
// };
// class Gamma:public Alpha,public Beta{
// int a;
// public:
//    Gamma(int u,int v,int w):Alpha(u),Beta(v){
//       cout<<"The value of gamma function is: "<<u<<endl;
//    }
// };
// int main(){
//    Gamma g1(4,6,7);
//    return 0;
// }

// Section 1: Easy Warm-ups (5 Questions)
// Focus: Basic syntax, access specifiers, and simple single inheritance.
// 	Access Control Basics: Create a base class Person with a protected string member name and a public method setName(string).
// Derive a class Student publicly from Person. In Student, add a method display() that prints name. Demonstrate in main() that name cannot be directly accessed from main(),
// but display() works.

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
// public:
//     void display(){
//         cout<<"The name of student is: "<<name<<endl;
//     }
// };
// int main(){
//     Student s1;
//     s1.setName("Pratik Kumar Chaubey");
//     s1.display();
//     return 0;
// }

// 	Constructor Chain Check: Write a base class Base with a default constructor that prints
//  "Base Constructor" and a derived class Derived : public Base whose default constructor prints "Derived Constructor".
//   Create a Derived object in main() and observe the order of constructor execution.

// #include<iostream>
// using namespace std;
// class Base{
// public:
//     Base(){
//         cout<<"Base Constructor Initialized "<<endl;
//     }
// };
// class Derived:public Base{
// public:
//     Derived(){
//         cout<<"Derived Constructor initialized "<<endl;
//     }
// };
// int main(){
//     Derived d1;
//     return 0;
// }

// 	Protected Member Modification: Write a base class Shape with a protected integer width.
// Create a derived class Square that has a method setSide(int s) which assigns s directly to width and a method getArea() that returns width * width.

// #include<iostream>
// using namespace std;
// class Shape{
// protected:
//     int width;
// };
// class Square:public Shape{
// public:
//     void setSide(int s){
//         width=s;
//     }
//     int getarea(){
//         return width*width;
//     }
// };
// int main(){
//     Square s1;
//     s1.setSide(7);
//     cout<<s1.getarea()<<endl;
//     return 0;
// }

// 	Simple Single Inheritance with Parameters: Create a base class Vehicle with protected attributes brand and speed.
// Pass these values via a parameterized constructor in Vehicle. Derive Car publicly and add a showDetails() function inside Car to output both attributes.

// #include<iostream>
// using namespace std;
// class Vehicle{
// protected:
//     string brand;
//     int speed;
// public:
//     Vehicle(string a,int b){
//         brand=a;
//         speed=b;
//     }
// };
// class Car:public Vehicle{
// public:
//     Car(string a,int b):Vehicle(a,b){};
//     void showDetails(){
//         cout<<"The Brand of Car is: "<<brand<<"The speed of car is: "<<speed<<endl;
//     }
// };
// int main(){
//     Car v1("Ford",220);
//     v1.showDetails();
//     return 0;

// }

// 	this Pointer & Single Inheritance: Write a class Device with a protected member string brand.
//  Use this->brand = brand inside a setter method. Derive a class Phone and write a method inside Phone that appends "-Mobile" to brand using this->brand.

// #include<iostream>
// using namespace std;
// class Device{
// protected:
//     string brand;
// public:
//     void set(string a){
//         this->brand=a;
//     }
// };
// class Phone:public Device{
// public:
//     void append(){
//         this->brand+=+" -Mobile";
//         cout<<this->brand<<endl;
//     }
// };
// int main(){
//     Phone d1;
//     d1.set("Samsung");
//     d1.append();
//     return 0;
// }

// Section 2: Medium Challenges (5 Questions)
// Focus: Friend functions, operator overloading, and protected vs. private visibility combinations.
// 	Protected Visibility Mode: Given a base class Parent with a public variable int x = 10 and a protected variable int y = 20. Inherit Child using protected inheritance (class Child : protected Parent). Write a method inside Child to display x and y. What happens if you try to access childObj.x inside main()? Write the code and explain why.

// #include<iostream>
// using namespace std;
// class Parent{
// protected:
//     int y=20;
// public:
//     int x=10;
// };
// class Child:public Parent{
// public:
//     void show(){
//         cout<<"The value of X is: "<<x<<endl;
//         cout<<"The value of Y is: "<<y<<endl;
//     }
// };
// int main(){
//     Child c1;
//     cout<<c1.x<<endl;
//    // cout<<c1.y<<endl;  Y is protected Data member hence it cant be accessed directly.
//    c1.show();
//    return 0;
// }

// ###################

// #include<iostream>
// using namespace std;
// class Account{
// protected:
//     double Balance;
// public:
//     void setBalance(double a){
//         Balance=a;
//     }
//     friend void audit(Account acc);
// };
// void audit(Account acc){
//     cout<<"The Account Balance of the Account Holder is: "<<acc.Balance<<endl;
// }
// int main(){
//     Account a1;
//     a1.setBalance(78900);
//     audit(a1);
//     return 0;
// }

// 	Shadowing vs. Inheritance: Create a base class Base with a protected variable int code = 100. Create a derived class Derived that also declares a public variable named int code = 200. Write a method inside Derived that prints both the derived code and the base class Base::code explicitly.
// #include<iostream>
// using namespace std;
// class Base{
// protected:
//     int code=100;
// };
// class Derived:public Base{
// public:
//     int code=200;
//     void display(){
//         cout<<"The code of BASE class is: "<<Base::code<<endl;
//         cout<<"The code of Derived class is: "<<code<<endl;
//     }
// };
// int main(){
//     Derived d1;
//     d1.display();
//     return 0;
// }

// Section 3: Difficult / Deep-Dive Problems (10 Questions)
// Focus: Complex logic, pointer interaction, edge cases in protected access, and custom implementations.
// 	Protected Member Access Rule Edge Case:
// 	Rule: A derived class can access protected members of a base class, but only through objects of the derived class type (or its subtypes), not through a plain base class object instance passed into a method.
// 	Task: Write a base class Base with protected int secret = 42. Write a derived class Derived : public Base. Inside a member function of Derived, accept two parameters: Base b and Derived d. Try accessing b.secret vs d.secret. Code this up and write a comment explaining which one causes a compiler error and why.

// #include<iostream>
// using namespace std;
// class Base{
// protected:
//     int secret=42;
// };
// class Derived:public Base{
//     int secret =84;
// public:
//     void show(Base b1,Derived d1){
//         //cout<<"The secret integer value of base class is: "<<b1.secret<<endl;        ,, b.secret Will Cause an Compiler Error as b1.secret is not accesible
//         cout<<"The secret integer value of Derived class is: "<<d1.secret<<endl;
//     }
// };
// int main(){
//     Base b1;
//     Derived d1,d2;
//    // d2.show(b1,d1);
//     return 0;
// }

// 	Combining Operator Overloading, Friend Function, and Inheritance:
// 	Base class Item with protected double price.
// 	Derived class Book : public Item with private string title.
// 	Overload the << operator using a friend function ostream& operator<<(ostream& os, const Book& b) to print both the title and the inherited price.

// #include<iostream>
// using namespace std;
// class Item{
// protected:
//     double price;
// public:
//     Item(int b){
//         price=b;
//     }
// };
// class Book:public Item{
//     string title;
// public:
//     Book(string a,int b):Item(b),title(a){};

//     friend ostream& operator<<(ostream& os,const Book& b);
// };
// ostream& operator<<(ostream& os,const Book& b){
//     os<<"The Book Title is: "<<b.title<<"Its price is: "<<b.price<<" $"<<endl;
//     return os;
// }
// int main(){
//     Book b1("Physics Galaxy",4599);
//     cout<<b1<<endl;
//     return 0;
// }

// 	Protected Constructor Pattern: Create a class RestrictedBase whose constructor is placed in the protected section (instead of public).
// 	Attempt to instantiate RestrictedBase directly in main() (observe what happens).
// 	Derive a class AllowedDerived : public RestrictedBase with a public constructor. Instantiate AllowedDerived in main() and explain why this works while direct instantiation fails.

// #include<iostream>
// using namespace std;
// class RestrictedBase{
// protected:
//     RestrictedBase(){
//         cout<<"Restricted Base Initialized "<<endl;
//     };
// };
// class AllowedDerived:public RestrictedBase{
// public:
//     AllowedDerived(){
//         cout<<"Derived class constructor initialized "<<endl;
//     }
// };
// int main(){
//     // RestrictedBase();     WONT BE INITIALIZED AS THE CLASS CONSTRUCTOR IS PROTECTED...
//     AllowedDerived();
//     return 0;
// }

// 	Static Members in Single Inheritance: Create a base class Counter with a protected static int count.
// Increment count in the constructor of Counter. Derive InstanceTracker : public Counter.
// Create 3 objects of InstanceTracker in main() and display the value of count from a method inside InstanceTracker.

// #include<iostream>
// using namespace std;
// class Counter{
// protected:
//     static int count;
// public:
//     Counter(){
//         count+=1;
//     }
//     void show(){
//         cout<<count<<endl;
//     }
// };
// class InstanceTracker:public Counter{};
// int Counter::count=0;
// int main(){
//     InstanceTracker i1;
//     i1.show();
//     InstanceTracker i2;
//     i2.show();
//     InstanceTracker i3;
//     i3.show();
//     return 0;

// }

// 	Multi-level Protected Data Pipeline: Write a base class RawData with protected int buffer[5].
// Write a derived class ProcessedData : public RawData that has a method fillAndSquare() which fills buffer with squared values of indices 0^2,1^2,2^2,3^2,4^2.
// Write a method printSum() in ProcessedData that computes the total sum of buffer.

// #include<iostream>
// #include<cmath>
// using namespace std;
// class RawData{
// protected:
//     int buffer[5];
// };
// class ProcessedData:public RawData{
// public:
//     void fillAndSquare(){
//         for(int i=0;i<5;i++){
//             buffer[i]=pow(i,i);
//         }
//     }
//     int total=0;
//     void printSum(){
//         for(int i=0;i<5;i++){
//             total+=buffer[i];
//         }
//         cout<<total<<endl;
//     }

// };

// int main(){
//     ProcessedData p1;
//     p1.fillAndSquare();
//     p1.printSum();
//     return 0;
// }

// 	Method Overriding Basics in Single Inheritance: Base class Printer has a public method void print() that displays "Printing from Base".
// Derived class LaserPrinter : public Printer has its own void print() method displaying "Printing high quality from Derived".
// Show in main() how to call both the derived version and the base version explicitly using obj.Printer::print().

// #include<iostream>
// using namespace std;
// class Printer{
// public:
//     void print(){
//         cout<<"Printing from Base "<<endl;
//     }
// };
// class LaserPrinter:public Printer{
// public:
//     void print(){
//         cout<<"Printing high quality from Derived "<<endl;
//     }
// };
// int main(){
//     LaserPrinter l1;
//     l1.Printer::print();
//     l1.print();
//     return 0;
// }

// 	Comprehensive Mini-System:
// 	Build a base class BankAccount with protected string accNumber and protected double balance.
// 	Include a parameterized constructor and a friend function bool compareBalance(const BankAccount& a, const BankAccount& b).
// 	Derive CurrentAccount : public BankAccount with a private double overdraftLimit.
// 	Add a method withdraw(double amount) in CurrentAccount that allows withdrawing up to balance + overdraftLimit. If valid, update balance directly.
// 	In main(), test depositing, withdrawing beyond balance (within overdraft), and comparing two CurrentAccount balances using the friend function.

// #include<iostream>
// using namespace std;
// class BankAccount{
// protected:
//     string accNumber;
//     double balance;
// public:
//         BankAccount(string a,double b):accNumber(a),balance(b){};
//         void deposit(double amount){
//             if(amount>0){
//                 balance+=amount;
//                 cout<<"The current Balance is: "<<balance<<endl;
//             }
//         }
//         friend bool compareBalance(const BankAccount& a,const BankAccount& b);
// };
// bool compareBalance(const BankAccount& a, const BankAccount& b) {
//     return a.balance > b.balance;
// }
// class CurrentAccount:public BankAccount{
//     double overdraftlimit;
// public:
//     CurrentAccount(string a,double b,double amount):BankAccount(a,b),overdraftlimit(amount){};
//     void withdraw(double amount){
//         if(amount<=BankAccount::balance+overdraftlimit){
//             BankAccount::balance-=amount;
//             cout<<"Balance is: "<<balance<<endl;
//         }
//     }
//     void display() const {
//         cout << "Acc: " << accNumber << " | Balance: $" << balance
//              << " | Overdraft Limit: $" << overdraftlimit << endl;
//     }
// };
// int main(){
//     // 1. Create two accounts with ($1,000 balance + $500 overdraft) and ($2,000 balance + $1,000 overdraft)
//     CurrentAccount c1("ACC-101", 1000.0, 500.0);
//     CurrentAccount c2("ACC-102", 2000.0, 1000.0);

//     cout << "--- Initial Accounts ---" << endl;
//     c1.display();
//     c2.display();

//     cout << "\n--- Step 1: Depositing Money ---" << endl;
//     c1.deposit(300.0); // Balance becomes 1300

//     cout << "\n--- Step 2: Withdrawing Beyond Balance (Within Overdraft) ---" << endl;
//     // Balance is 1300, but we withdraw 1600 (uses $300 of $500 overdraft)
//     c1.withdraw(1600.0);

//     cout << "\n--- Step 3: Comparing Balances using Friend Function ---" << endl;
//     if (compareBalance(c1, c2)) {
//         cout << "c1 has a higher balance than c2." << endl;
//     } else {
//         cout << "c2 has a higher balance than c1." << endl;
//     }
//     return 0;
// }

// : Basic & Multiple Inheritance (Questions 1–4)
// 	Simple Inheritance Check: Create a base class Vehicle with attributes speed and fuel. Derive a class Car that adds num_doors. Write a method in Car to display all three values.

// #include<iostream>
// using namespace std;
// class Vehicle{
// protected:
//     int speed;
//     double fuel;
// public:
//     Vehicle(int a,double b):speed(a),fuel(b){};

// };
// class Car:public Vehicle{
//     int num_doors;
// public:
//     Car(int a,double b,int c):Vehicle(a,b),num_doors(c){};
//     void display(){
//         cout<<"The Speed of car is: "<<speed<<" ,"<<"The fuel in car is: "<<fuel<<" ,"<<"The number of doors in car is: "<<num_doors<<endl;
//     }
// };
// int main(){
//     Car c1(220,52,4);
//     c1.display();
//     return 0;
// }

// 	Ambiguity Resolution: Create class A with void show() (prints "Class A") and class B with void show() (prints "Class B").
// Derive class C from both A and B. Use the scope resolution operator (::) inside C's show() function to explicitly call A's version.

// #include<iostream>
// using namespace std;
// class A{
// public:
//     void show(){
//         cout<<"Class A"<<endl;
//     }
// };
// class B{
// public:
//     void show(){
//         cout<<"Class B"<<endl;
//     }
// };
// class C:public A,public B{
// public:
//     void show(){
//       A::show();
//       B::show();
//     }
// };

// int main(){
//     C c1;
//     c1.show();
//     cout << "\n--- Calling explicitly from main() ---" << endl;
//     c1.A::show();
//     c1.B::show();
//     return 0;
// }

// 	Protected Access Modifier: Create a class Person with a protected variable age.
// Derive Student from Person and attempt to access age directly inside a Student method versus inside main(). Verify which one compiles.

// #include<iostream>
// using namespace std;
// class Person{
// protected:
//     int age;
// };
// class Student:public Person{
// public:
//     void show(){
//         cout<<"The age of the Person is: "<<age<<endl;
//     }
// };
// int main(){
//     Student s1;
//     // s1.age;             THIS WILL THROW AN ERROR AS AGE IS A PROTECTED VRIABLE OF A CLASS,WHICH CANT BE EXPLICTLY CALLED IN MAIN OR ANY OTHER FUCNTIOJN WHICH HAS NOT INHERITED IGT.
//     s1.show();
// }

// 	Hierarchical Structure: Create a base class Shape with a double area. Derive two classes, Circle and Rectangle, that calculate and set area using their respective formulas.
// #include<iostream>
// using namespace std;
// class Shape{
// protected:
//     double area;
// };
// class Circle:public Shape{
// public:
//     void set(double a){
//         area=(3.14)*(a*a);
//     }
//       void show(){
//         cout<<"The area of Circle is: "<<area<<endl;
//     }

// };

// class Rectangle:public Shape{
//     double length,breadth;
// public:
//     void set(double a,double b){
//         length=a;
//         breadth=b;
//         area=length*breadth;
//     }
//     void show(){
//         cout<<"The area of Rectangle is: "<<area<<endl;
//     }

// };
// int main(){
//     Rectangle r1;
//     Circle c1;
//     r1.set(5,8);
//     c1.set(7);
//     r1.show();
//     c1.show();
//     return 0;

// }

// Section 2: Virtual Base Classes & The Diamond Problem (Questions 5–7)
// 	The Diamond Structure: Recreate the classic diamond pattern: Class Device → Classes Phone and Camera (both inheriting from Device) → Class SmartPhone (inheriting from Phone and Camera). Make sure SmartPhone can access Device attributes without ambiguity.

// #include<iostream>
// using namespace std;
// class Device{
// protected:
//     string deviceName;
// };
// class Phone:virtual public Device{
// protected:
//     string phoneCompany;
//     int manufactruingYear;
// };
// class Camera:virtual public Device{
// protected:
//     string cameraPixel;
//     string Zoom;
// };
// class Smartphone:public Phone,public Camera{
//     string a,b,c,d;
//     int e;
// public:
//     void setDetails(string a,string b,string c,string d,int e){
//         deviceName=a;
//         phoneCompany=b;
//         manufactruingYear=e;
//         cameraPixel=c;
//         Zoom=d;
//     }
//     void show(){
//         cout<<"The Details of the device are as follows: "<<endl;
//         cout<<"DEVICE: "<<deviceName<<endl<<"Brand: "<<phoneCompany<<endl<<" Manufacturing year: "<<manufactruingYear<<endl<<"Camera: "<<cameraPixel<<"ZOOM: "<<Zoom<<endl;
//     }
// };
// int main(){
//     Smartphone s1;
//     s1.setDetails("Mobile","Samsung","108 MEGAPIXEL","50 X",2026);
//     s1.show();
// }

// 	Virtual Keyword Order: Write a class D that inherits from B and C using class D : public B, virtual public C. Explain which base class constructor will run first when an object of D is instantiated.

// #include <iostream>
// using namespace std;

// class B {
// protected:
//     int radius;
// public:
//     B(int a) : radius(a) {
//         cout << "[2] Non-virtual Base class B constructor called (Circle Area: " 
//              << 3.14159 * radius * radius << ")" << endl;
//     }
// };

// class C {
// protected:
//     int side;
// public:
//     C(int a) : side(a) {
//         cout << "[1] Virtual Base class C constructor called (Square Area: " 
//              << side * side << ")" << endl;
//     }
// };

// // C is virtual, B is non-virtual
// class D : public B, virtual public C {
// public:
//     D(int a, int b) : C(a), B(b) {
//         cout << "[3] Derived class D constructor called." << endl;
//     }
// };

// int main() {
//     cout << "--- Instantiating Object d1 of Class D ---" << endl;
//     D d1(7, 5);

//     return 0;
// }










// Section 3: Derived Class Constructors & Execution Order (Questions 8–11)
// 	Constructor Tracing: Create classes L1, L2, and L3. Write L3 : public L1, public L2. Instantiate L3 and print messages inside each constructor to verify 
//the exact order of execution.

// #include<iostream>
// using namespace std;
// class L1{
// public:
//     L1(){
//         cout<<"L1 Constructor Initialized "<<endl;
//     }
// };
// class L2{
// public:
//     L2(){
//         cout<<"L2 Constructor Initialized "<<endl;
//     }
// };

// class L3:public L1,public L2{
// public: 
//     L3(){
//         cout<<"L3 Constructor Initialized "<<endl;
//     }
// };

// int main(){
//     L3 l1;
//     return 0;
// }







// // 	Passing Arguments Up: Create a base class Rectangle taking length and width in its constructor. 
// //Derive Box taking length, width, and height. Pass the first two arguments directly to Rectangle's constructor.


// #include<iostream>
// using namespace std;
// class Rectangle{
// protected:
//     int length;
//     int breadth;
// public:
//     Rectangle(int a,int b):length(a),breadth(b){};
// };
// class Box:public Rectangle{
//     int height;
// public:
//     Box(int a,int b,int c):Rectangle(a,b),height(c){};
//     void show(){
//         cout<<"The Volume of Box is: "<<length*breadth*height<<endl;
//     }
// };

// int main(){
//     Box b1(8,6,4);
//     b1.show();
//     return 0;
// }








// 	Multiple Base Arguments: Create Engine(int hp) and Body(string color). Derive Car(int hp, string color, string model) and pass parameters to both base constructors simultaneously.

// #include<iostream>
// using namespace std;

// class Engine{
// protected:
//     int hp;
// public:
//     Engine(int x):hp(x){};
// };

// class Body{
// protected:
//     string color;
// public:
//     Body(string a):color(a){};
// };

// class Car:public Engine,public Body{
//     string model;
// public:
//     Car(int a,string b,string c):Engine(a),Body(b),model(c){};
//     void show(){
//         cout<<"*************************  The Spectification of car is *******************************"<<endl<<"HP: "<<hp<<endl<<"COLOR: "<<color<<endl<<"MODEL: "<<model<<endl;
//     }
// };

// int main(){
//     Car c1(153,"WHITE","SEDAN");
//     c1.show();
//     return 0;
// }




// // 	Virtual Base Constructor Priority: Create Class X, Class Y, and Class Z. 
// // Inherit Z as class Z : public X, virtual public Y. Pass arguments to all three constructors and verify that Y's constructor executes before X's.

// #include<iostream>
// using namespace std;
// class X{
// public:
//     X(){
//         cout<<"X has been intialized "<<endl;
//     }
// };

// class Y{
// public:
//     Y(){
//         cout<<"Y constructor has been initialized "<<endl;
//     }
// };

// class Z:public X,virtual public Y{
// public:
//     Z(){
//         cout<<"Z Constructor has been intialized "<<endl;
//     }
// };
// int main(){
//     Z z1;
//     return 0;
// }



// Section 4: Constructor Initialization Lists (Questions 12–15)
// 	Basic Initialization List: Convert a standard constructor that assigns variables inside { } to use a C++ initialization list (: var1(val1), var2(val2)).

// #include<iostream>
// using namespace std;
// class Val1{
// protected:
//     int x;
// public:
//     Val1(int a){
//         x=a;
//     }

// };
// class Val2{
// protected:
//     int y;
// public:
//     Val2(int b){
//         y=b;
//     }
// };
// class Val3:public Val1,public Val2{
// public:
//     Val3(int a,int b):Val1(a),Val2(b){};
//     void show(){
//         cout<<"X IS: "<<x<<endl;
//         cout<<"Y IS: "<<y<<endl;
//     }
// };

// int main(){
//     Val3 v1(5,6);
//     v1.show();
//     return 0;
// }









// // Section 1: Basics (Single Values & Arrays)
// // Question 1: Dynamic Integer & Arithmetic
// // Dynamically allocate an int on the heap using new.

// // Dynamically allocate a float on the heap.

// // Assign values, print their sum, and properly deallocate both with delete.
//  //Set the pointers to nullptr afterward.



// #include<iostream>
// using namespace std;

// class Marks{
// protected:
//     int marks;
//     int rollNo;
// public:
//     void set(int a,int b){
//         marks=a;
//         rollNo=b;
//     }
//     void getData(){
//         cout<<"Marks: "<<marks<<endl<<"Roll no: "<<rollNo<<endl;
//     }
// };
// int main(){
//     int size;
//     cout<<"Enter size of array to be created: "<<endl;
//     cin>>size;
//     int roll;
//     int mark;
//     Marks *ptr=new Marks[size];
//     Marks *ptrTemp=ptr;
//     for(int i=0;i<size;i++){
//         cout<<"Enter the Marks and Roll no: "<<endl;
//         cin>>mark>>roll;
//         ptr->set(mark,roll);
//         ptr++;
//     }
//     cout<<"******************DETAILS***************"<<endl;
//     for(int i=0;i<size;i++){
//         ptrTemp->getData();
//         ptrTemp++;
//     }
//     delete[] ptr;
//     ptr=nullptr;
//     ptrTemp=nullptr;
//     return 0;
// }




// // Section 2: Dynamic Objects & Constructors
// // Question 3: Dynamic Object with Constructor
// // Create a class Student with attributes name (string) and marks (double).

// // Write a parameterized constructor Student(string n, double m) that prints "Student Created".

// // Write a destructor ~Student() that prints "Student Destroyed".

// // In main():

// // Create a Student dynamically using new Student("Alex", 92.5).

// // Call a method display().

// // Free the object using delete. Verify that the destructor is called.


// #include<iostream>
// using namespace std;

// class Student{
//     string name;
//     double marks;
// public:
//     Student(string n,double m):name(n),marks(m){
//         cout<<"Constructor Created "<<endl;
//     };
//     ~Student(){
//         cout<<"Student Destroyed "<<endl;
//     }
//     void display(){
//         cout<<"The name and roll no is: "<<name<<" ,"<<marks<<endl;
//     }

// };
// int main(){
//     Student s1("Alex",92.5);
//     s1.display();
//     return 0;

// }







// Question 2: Dynamic 1D Array with User InputAsk the user for the size $N$.
// Dynamically allocate an array of integers of size $N$ using new int[N].
// Fill the array with values, calculate the average, print it, and free the memory using delete[].




// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter the size of array to be created: "<<endl;
//     cin>>size;
//     if(size<=0){
//         cout<<"Failed to Create "<<endl;
//         return 1;
//     }
//     int *arr=new int[size];
//     for(int i=0;i<size;i++){
//         cout<<"Input Marks for "<<i+1<<" Object"<<endl;
//         cin>>arr[i];
//     }
//     // 3. Compute total sum and average
//     double sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     double average = sum / size;

//     // 4. Output the results
//     cout << "\n--- Array Details ---" << endl;
//     cout << "Elements: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\nTotal Sum: " << sum << endl;
//     cout << "Average  : " << average << endl;

//     // 5. Deallocate the memory block safely
//     delete[] arr; // arr still holds the base address
//     arr = nullptr; // Prevent dangling pointer

//     return 0;

// }





// Question 4: Dynamic Array of Objects
// Using the same Student class:

// Dynamically allocate an array of 3 students using new Student[3].

// (Hint: You will need a default constructor for this!)

// Delete the array using delete[]. What happens if you accidentally use delete instead of delete[]?


// #include<iostream>
// using namespace std;

// class Student{
// protected:
//     int marks;
// public:
   
//     Student(){};
//     void input(int a){
//         marks=a;
//     }
//     void show(){
//         cout<<"Marks are: "<<marks<<endl;
//     }
// };

// int main(){
//     int size=3;
//     Student s1;
//     Student *arr=new Student[size];
//     Student *arrTemp=arr;
//     for(int i=0;i<size;i++){
//         int x;
//         cout<<"Enter marks for "<<i+1<< " object"<<endl;
//         cin>>x;
//         arr->input(x);    
//         arr++;  
//     }
//     cout<<"Marks Details: "<<endl;
//     for(int i=0;i<size;i++){
//         arrTemp->show();
//         arrTemp++;
//     }
//     delete[] (arr-size);
//     arr=nullptr;
//     arrTemp=nullptr;
//     return 0;
// }



