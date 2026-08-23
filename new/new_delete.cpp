// Question 1: Dynamic Array AllocatorWrite a C++ program that dynamically allocates memory for an integer array of size $N$ specified by the user at runtime using the new operator.
// Populate the array with values $10, 20, 30 \dots (N \times 10)$.
// Print all elements using pointer arithmetic (*(ptr + i) instead of ptr[i]).Deallocate the memory cleanly using delete[] and set the pointer to nullptr.





// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     // 1. Dynamic memory allocation on the heap
//     int* ptr = new int[n];

//     // 2. Populate array with multiples of 10 (10, 20, 30...)
//     for (int i = 0; i < n; i++) {
//         *(ptr + i) = (i + 1) * 10; // Using pointer arithmetic to assign values
//     }

//     // 3. Print elements using pointer arithmetic
//     cout << "Array elements: ";
//     for (int i = 0; i < n; i++) {
//         cout << *(ptr + i) << " ";
//     }
//     cout << endl;

//     // 4. Deallocate heap memory and prevent dangling pointers
//     delete[] ptr;
//     ptr = nullptr;

//     return 0;
// }






// Question 2: Dynamic Object Instantiation
// Create a class ComplexNumber with private members real and imag.
// •	Write a parameterized constructor ComplexNumber(double r, double i).
// •	In main(), instantiate a ComplexNumber object on the heap using the new operator.
// •	Access its member function display() using both the arrow operator (->) and dereferencing ((*ptr).display()).
// •	Free the memory using delete.








// Section B: Array of Objects Using Pointers
// Question 3: Inventory Manager
// Create a class ShopItem with private attributes int id and float price.
// •	Add a method setData(int a, float b) and a method getData().
// •	In main(), create an array of pointers to ShopItem objects (or allocate an array of objects using ShopItem *ptr = new ShopItem[size]).
// •	Use a loop and pointer movement to input data for 3 items, and a second loop to display all 3 items cleanly.


// #include<iostream>
// using namespace std;
// class Shopitem{
//     int id;
//     float price;
// public:
//     void setData(int a,float b){
//         id=a;
//         price=b;
//     }
//     void getData(){
//         cout<<"The ID is: "<<id<<endl<<"The Price is: "<<price<<endl;
//     }
// };
// int main(){
//     int size;
//     cout<<"Enter the size of array to be created: "<<endl;
//     cin>>size;
//     int p;
//     float q;
//     Shopitem *ptr= new Shopitem[size];
//     for(int i=0;i<size;i++){
//         cout<<"Enter the data: "<<endl;
//         cin>>p>>q;
//         ptr[i].setData(p,q);
//     }
//     for(int i=0;i<size;i++){
//         ptr[i].getData();
//     }
// }






// Question 4: Pointer Traversal Challenge
// Create a class Student with int rollNo and float marks.
// •	Dynamically allocate an array of 4 Student objects using Student *ptr = new Student[4].
// •	Store the starting memory location in a backup pointer Student *ptrTemp = ptr;.
// •	Use ptr with increment operators (ptr++) to set and display data for all students.
// •	Explain why ptrTemp is needed when deallocating or re-traversing the array.


// #include<iostream>
// using namespace std;
// class Student{
//     int rollNo;
//     float marks;
// public:
//     void setData(int a,float b){
//         rollNo=a;
//         marks=b;
//     }
//     void getData(){
//         cout<<"Roll no: "<<rollNo<<endl;
//         cout<<"Marks: "<<marks<<endl;
//     }
// };
// int main(){
//     int size;
//     int roll;
//     float mark;
//     cout<<"Enter the size of array to be created: "<<endl;
//     cin>>size;
//     Student *ptr=new Student[size];
//     Student *ptrTemp=ptr;
//     for(int i=0;i<size;i++){
//         cout<<"Enter the values of Roll no and Marks Respectively: "<<endl;
//         cin>>roll>>mark;
//         ptr->setData(roll,mark);
//         ptr++;
//     }
//     cout<<"The Details Of Student marks and Roll no are given below: "<<endl;
//     for(int i=0;i<size;i++){
//         ptrTemp->getData();
//         ptrTemp++;
//     }
//     delete[] (ptrTemp - size);
//     ptr=nullptr;
//     ptrTemp=nullptr;
//     return 0;
// }








// Section C: The this Pointer & Method Chaining
// Question 5: Shadowing & this Pointer
// Create a class Box with private dimensions int length, int width, and int height.
// •	Write a constructor Box(int length, int width, int height) where the parameter names are identical to the private member variable names.
// •	Use the this-> pointer inside the constructor to resolve the naming ambiguity and correctly initialize the instance variables.
// •	Write a method calculateVolume() to verify the initialization worked.



// #include<iostream>
// using namespace std;
// class Box{
//     int length,width,height;
// public:
//     Box(int length,int width,int height){
//         this->length=length;
//         this->width=width;
//         this->height=height;
//     }
//     void calculateVolume(){
//         cout<<"VOLUME: "<<length*width*height<<endl;
//     }
// };
// int main(){
//     Box b1(6,7,9);
//     b1.calculateVolume();
//     return 0;
// }





// Question 6: Method Chaining using return *this
// Create a class Calculator with a private attribute double value.
// •	Initialize value = 0 in the default constructor.
// •	Implement methods add(double x), subtract(double x), and multiply(double x).
// •	Make each of these methods return a reference to the current object (Calculator&) by returning *this.
// •	In main(), demonstrate method chaining on a single line:
// C++
// calc.add(10).subtract(2).multiply(5).display(); // Output should be 40


// #include<iostream>
// using namespace std;
// class Calculator{
//     double value;
// public:
//     Calculator(double v=0):value(v){};
//     Calculator& add(double x){
//         this->value+=x;
//         return *this;
//     }
//     Calculator& sub(double y){
//         this->value-=y;
//         return *this;
//     }
//     Calculator& mul(double z){
//         this->value*=z;
//         return *this;
//     }
//     void display() const{
//         cout<<"Value: "<<value<<endl;
//     }

// };
// int main(){
//     Calculator c1(45);
//     c1.add(4).sub(7).mul(11);
//     c1.display();
//     return 0;
// }

