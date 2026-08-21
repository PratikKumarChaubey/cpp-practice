// Level 2: Classes, Objects & Memory (Lec 20–28)
// 4.	Shop Inventory System (Array of Objects)
// o	Concepts: Static data members, static methods, array of objects.
// o	Task: Create an Item class with itemId, price, and a static variable totalItemsCount.
//  Track item details across an array of 3 objects and display the global item count using a static member function getTotalItems().

// #include<iostream>
// using namespace std;
// class Items{
//     int itemid,price;
//     static int itemcount;
// public:
//     void setdata(){
//         cout<<"Enter Item Id: "<<endl;
//         cin>>itemid;
//         cout<<"Enter Item Price: "<<endl;
//         cin>>price;
//         itemcount++;
//     }
//     void show(){
//         cout<<"The Item id is: "<<itemid<<", "<<"The Price of item is: "<<price<<endl;
//     }
//     static void getTotalItems(){
//         cout<<"The total items created is: "<<itemcount<<endl;
//     }
// };
// int Items::itemcount=0;
// int main(){
//     const int size=3;
//     Items array[size];
//     for(int i=0;i<3;i++){
//         cout<<"Enter the item id and prices respectively for item no : "<<i+1<<endl;
//         array[i].setdata();
//     }
//     cout<<"The Scores are as follows :"<<endl;
//     for(int i=0;i<size;i++){
//         array[i].show();
//     }
//     Items::getTotalItems();
//     return 0;
// }












// Try writing a simple 10-line main() function in C++ that:

// Takes cin >> n;

// Creates int *scores = new int[n];

// Reads values into scores[i] using a loop.

// Correctly uses delete[] at the end.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of scores you want to enter in the dynamic array: "<<endl;
//     cin>>n;
//     int *scores=new int[n];
//     for(int i=0;i<n;i++){
//         cout<<"Emter the marks: "<<endl;
//         cin>>scores[i];
//     }
//     // 3. Print the scores to verify
//     cout << "\nScores stored in Heap memory: ";
//     for (int i = 0; i < n; i++) {
//         cout << scores[i] << " ";
//     }
//     cout << endl;

//     // 4. Free the allocated Heap memory (Crucial!)
//     delete[] scores;
//     return 0;
// }




// 4.	Complex Number Addition (Passing Objects to Functions)
// o	Concepts: Objects as function arguments.
// o	Task: Create a Complex class (real, imag). 
// Write a member function void addComplex(Complex c1, Complex c2) that sets the current object's real and imaginary values to the sum of c1 and c2.

// #include<iostream>
// using namespace std;
// class Complex{
//     double real,imag;
// public:
//     void set(double a,double b){
//         real=a;
//         imag=b;
//     }
//     void addComplex(Complex c1,Complex c2){
//         real=c1.real+c2.real;
//         imag=c1.imag+c2.imag;
//     }
//     void show(){
//         cout<<"The complex number after being added is: "<<real<<" + "<<imag<<"i"<<endl;
//     }
// };
// int main(){
//     Complex c1,c2,c3;
//     c1.set(3.4,5.6);
//     c2.set(6.8,9);
//     // Showing Values of c1 and c2 inputs.
//     c1.show();
//     c2.show();
//     c3.addComplex(c1,c2);
//     c3.show();
//     return 0;
// }







// 4.	Friend Function across Two Classes
// o	Concepts: Friend functions, forward declaration.
// o	Task: Create two classes, DM (distances in meters & centimeters) and DB (distances in feet & inches).
//  Write a friend function that takes an object of DM and an object of DB, adds them together, and prints the result in meters.

// #include<iostream>
// using namespace std;
// class DB;
// class DM{
//     double meters,centimeters;

// public:
//     void set(double a,double b){
//         meters=a;
//         centimeters=b;
//     }
//     void show(){
//         cout<<"Meters is equal to: "<<meters<<endl;
//         cout<<"Centimeter is equal to: "<<centimeters<<endl;
//     }
//     friend void addTwo(DM d1,DB d2);
// };
// class DB{
//     double feets;
//     double inches;
// public:
//     void set(double x,double y){
//         feets=x;
//         inches=y;
//     }
//     void show(){
//         cout<<"Feet : "<<feets<<endl;
//         cout<<"Inches: "<<inches<<endl;
//     }
//     friend void addTwo(DM d1,DB d2);
// };
// void addTwo(DM d1, DB d2) {
//     // Convert DM entirely to meters
//     double totalMetersFromDM = d1.meters + (d1.centimeters / 100.0);

//     // Convert DB entirely to meters (1 foot = 0.3048m, 1 inch = 0.0254m)
//     double totalMetersFromDB = (d2.feets * 0.3048) + (d2.inches * 0.0254);

//     double grandTotalMeters = totalMetersFromDM + totalMetersFromDB;

//     cout << "\n======================================" << endl;
//     cout << "Total Distance in Meters: " << grandTotalMeters << " m" << endl;
//     cout << "======================================" << endl;
// }
// int main(){
//     DM d1;
//     DB d2;
//     d1.set(45,324);
//     d2.set(786,8990);
//     d1.show();
//     d2.show();
//     addTwo(d1,d2);
//     return 0;
// }









// 8.	Overloaded Box Dimensions
// o	Concepts: Default constructor, parameterized constructor, constructor overloading.
// o	Task: Create a Box class (length, width, height). Implement three constructors:
// 1.	Default constructor setting dimensions to 0.
// 2.	One-parameter constructor setting all dimensions to the same value (Cube).
// 3.	Three-parameter constructor setting custom dimensions. Calculate and display volume.

// #include<iostream>
// using namespace std;
// class Box{
//     double length,width,height;
// public:
//     Box(double side){
//         length=side;
//         width=side;
//         height=side;
//     }
//     Box(){
//         length=0;
//         width=0;
//         height=0;
//     };
//     Box(double a,double b,double c){
//         length=a;
//         width=b;
//         height=c;
//     }
//     void show(){
//         double Volume=length*width*height;
//         cout<<"THE VOLUME IS: "<<Volume<<endl;
//     }
// };
// int main(){
//     Box b1;
//     Box b2(8,12,4);
//     Box b3(25);
//     b1.show();
//     b2.show();
//     b3.show();
//     return 0;
// }






// Level 3: Constructors & Dynamic Memory (Lec 29–33)
// 	Bank Deposit with Default Interest Rate
// 	Concepts: Constructors with default arguments.
// 	Task: Create a Deposit class (principal, years, rate).//
// Define a constructor where the interest rate defaults to 0.05 (5%) if not provided by the user. Calculate simple interest.


// #include<iostream>
// using namespace std;
// class Deposit{
//     double principal,rate;
//     int years;
//     double interest;
// public:
//     Deposit(double a,int c,double b=0.05){
//         principal=a;
//         rate=b;
//         years=c;
//     }
//     void Calculate(){
//         interest=(principal*rate*years);
//     }
//     void show(){
//         cout<<"The Intrest on principal is: "<<interest<<endl;
//     }
// };
// int main(){
//     Deposit d1(3400,11,4);
//     Deposit d2(5600,11);
//     d1.Calculate();
//     d2.Calculate();
//     d1.show();
//     d2.show();
//     return 0;
// }







// 8.	Dynamic Matrix Allocator
// o	Concepts: Dynamic memory allocation (new / delete), dynamic initialization via constructors.
// o	Task: Create a Matrix class with private pointers int **data, int rows, int cols.
// Use a constructor Matrix(int r, int c) that dynamically allocates memory for a 2D array using new and fills it with zeroes.








// Level 4: Copy Constructors & Destructors (Lec 34–35)
// 11.	Deep vs Shallow Copy Simulation
// o	Concepts: Copy constructor, dynamic memory pointers.
// o	Task: Create a CustomBuffer class that stores a dynamically allocated integer array.
//  Implement a user-defined copy constructor CustomBuffer(const CustomBuffer &obj)
//   that allocates separate dynamic memory for the copy (deep copy) so modifying the duplicate doesn't corrupt the original object.
