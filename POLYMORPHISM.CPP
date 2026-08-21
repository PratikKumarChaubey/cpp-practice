// // 1. new and delete Keywords (Lec 50)new dynamically allocates memory on the heap at runtime.delete deallocates single heap objects; delete[] deallocates heap arrays.
// Always assign ptr = nullptr; 
// after deleting to prevent dangling pointers.2. Pointers to Objects & Arrow Operator -> (Lec 51)A pointer of type ClassName* can hold the address of a class instance:C++Complex c1;




// // Complex *ptr = &c1;
// // The arrow operator (->) dereferences a pointer and accesses its members in one step:$$\text{ptr->setData(1, 2)} \iff (*\text{ptr}).\text{setData}(1, 2)$$3.
//  Array of Objects Using Pointers (Lec 52)Allocate dynamically with Item *arr = new Item[size];
//  .Use standard indexing arr[i].method() or pointer arithmetic (arr + i)->method().
//  Important: Never increment the base pointer (arr++) if you plan to call delete[] arr; directly later, because delete[] requires the exact starting memory address.
 
 
//  4. The this Pointer (Lec 53)this is an implicit, hidden pointer passed to every non-static member function.It points directly to the calling object (this == &currentObject).Use Cases:Disambiguation: Differentiating member variables from local parameter names:C++void setA(int a) { this->a = a; }
// // Method Chaining: Returning *this by reference to chain calls:C++Complex& setA(int a) { this->a = a; return *this; }
// // // Allows: c1.setA(5).setB(10);





// // 5. Polymorphism & Pointers to Derived Classes (Lec 54)Polymorphism means "one entity, many forms" (Compile-time vs. Run-time).
//Key Rule (Base Pointer $\to$ Derived Object):A pointer of a Base Class can point to an object of a Derived Class:C++BaseClass *basePtr;
// // DerivedClass derivedObj;
// // basePtr = &derivedObj; // Valid in C++!
// // Limitation without virtual (Compile-Time / Early Binding):Even though basePtr points to a DerivedClass object, 

//calling basePtr->display() will invoke the Base Class version of display(), because the compiler binds calls based strictly on the pointer's type, not the underlying object type








// // Level 1: Object Pointers & Arrow Operator (Lec 51)Q1: The Arrow Dereference TestCreate a class Coordinate with protected variables int x, y.
// Write void setPoints(int x, int y) and void show().In main(), instantiate an object dynamically on the heap using new Coordinate.Assign values using ->,
//display them, and safely deallocate the memory using delete.


// #include<iostream>
// using namespace std;
// class  Coordinate{
// protected:
//     int x,y;
// public:
//     void setPoints(int a,int b){
//         x=a;
//         y=b;
//     }
//     void show(){
//         cout<<"The X point is: "<<x<<endl;
//         cout<<"The Y point is: "<<y<<endl;
//     }
// };
// int main(){
//     Coordinate *obj=new Coordinate;
//     cout<<"Set the values for object: "<<endl;
//     obj->setPoints(7,8);
//     obj->show();
//     delete obj;
//     obj=nullptr;
//     return 0;

// }




//Q2: Pointer Swapping of Objects Create a class Number with int val. Write a constructor Number(int v).
//In main(), allocate two dynamic objects n1 = new Number(10) and n2 = new Number(99).
//Write a standalone function void swapObjects(Number* &a, Number* &b) that swaps the pointers themselves (not the internal integers).
//Print the values pointed to by n1 and n2 before and after calling swapObjects. Free both objects at the end.Level 2: 
//Dynamic Array of Objects (Lec 52)


// #include <iostream>
// using namespace std;

// class Number {
// public:
//     int val;
//     // Constructor to initialize value
//     Number(int v) : val(v) {}
    
//     void display() const {
//         cout << val;
//     }
// };

// // Passing pointers BY REFERENCE (Number* &a) so the swap affects the original pointers in main()
// void swapObjects(Number* &a, Number* &b) {
//     Number* temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     // 1. Allocate two dynamic objects on the heap
//     Number* n1 = new Number(10);
//     Number* n2 = new Number(99);

//     cout << "--- Before Swapping ---" << endl;
//     cout << "n1 points to value: " << n1->val << " at address: " << n1 << endl;
//     cout << "n2 points to value: " << n2->val << " at address: " << n2 << endl;

//     // 2. Swap the pointers themselves
//     swapObjects(n1, n2);

//     cout << "\n--- After Swapping ---" << endl;
//     cout << "n1 points to value: " << n1->val << " at address: " << n1 << endl;
//     cout << "n2 points to value: " << n2->val << " at address: " << n2 << endl;

//     // 3. Clean up memory safely
//     delete n1;
//     delete n2;
//     n1 = nullptr;
//     n2 = nullptr;

//     return 0;
// }



//Q3: Inventory Store ManagerCreate a class Product with int id, string name, 
//and float price.Add a method void input() to take user input and void display() to print formatted product data.Ask the user for the number of products $N$.
//Dynamically allocate an array Product *store = new Product[N].Loop through the array using pointer arithmetic (store + i)->input() to fill the catalog.Display the entire inventory,
///calculate the total store value, and properly free the array with delete[].


// #include<iostream>
// using namespace std;

// class Product{
// protected:
//     int id;
//     string name;
//     float price;
// public:
//     void set(int a,string b,float c){
//         id=a;
//         name=b;
//         price=c;
//     }
//     void display(){
//         cout<<"Product ID: "<<id<<endl
//         <<"Product name: "<<name<<endl
//         <<"Price: "<<price<<endl;
//     }
// };
// int main(){
//     int size;
//     cout<<"Enter the number products for which you want the input to be given: "<<endl;
//     cin>>size;
//     int a;
//     float b;
//     string c;
//     Product *arr=new Product[size];
//     Product *arrTemp=arr;
//     for(int i=0;i<size;i++){
//         cout<<"Enter the Id,Name and Price Respectively: "<<endl;
//         cin>>a>>c>>b;
//         arr->set(a,c,b);
//         arr++;
//     }
//     cout<<"Product Details are as Follows: "<<endl;
//     for(int i=0;i<size;i++){
//         arrTemp->display();
//         arrTemp++;
//     }
//     delete [](arr-size);
//     arr=nullptr;
//     arrTemp=nullptr;
//     return 0;
// }







//Q4: The Highest Score FilterCreate a class Applicant with string name and int score.Dynamically allocate an array of 4 applicants.
//Populate the array with names and scores.Write a loop that finds and prints the details of the applicant with the highest score using pointer navigation.
// Deallocate the array safely.Level 3: The this Pointer & Method Chaining (Lec 53)


// #include<iostream>
// using namespace std;
// class Applicant{
// protected:
//     string name;
//     int score;
// public:
//     void set(string a,int b){
//         name=a;
//         score=b;
//     }
//     void display(){
//         cout<<"Name of applicant= "<<name<<endl
//         <<"Score of applicant= "<<score<<endl;
//     }
//     int getScore(){
//         return score;
//     }
// };
// int main(){
//     string x;
//     int b;
//     Applicant *arr=new Applicant[4];
//     Applicant *ptr=arr;
//     Applicant *ptrTemp=arr;

//     for(int i=0;i<4;i++){
//         cout<<"Enter Name and Score "<<endl;
//         cin>>x>>b;
//         ptr->set(x,b);
//         ptr++;
//     }
//     cout<<"Details of every candidate: "<<endl;
//     for(int i=0;i<4;i++){
//         ptrTemp->display();
//         ptrTemp++;
//     }
//     // 2. Highest Score Filter using Pointer Navigation
//     Applicant *topApplicant = arr; // Assume first applicant is highest
//     for (int i = 1; i < 4; i++) {
//         if ((arr + i)->getScore() > topApplicant->getScore()) {
//             topApplicant = (arr + i);
//         }
//     }

//     cout << "\n--- Top Performing Applicant ---" << endl;
//     topApplicant->display();
//     delete []arr;
//     arr=nullptr;
//     ptr=nullptr;
//     ptrTemp=nullptr;
//     topApplicant=nullptr;
//     return 0;
// }







// Q5: Variable DisambiguationCreate a class BankAccount with int accountNumber and double balance.Write a setter void setDetails(int accountNumber, double balance) 
// where the parameter names are identical to the member variables.Use the this pointer to resolve naming conflicts.Display the account details in main().



// #include<iostream>
// using namespace std;
// class BankAccount{
// protected:
//     int accountNumber;
//     double balance;
// public:
//     void setDetails(int accountNumber,double balance){
//         this->accountNumber=accountNumber;
//         this->balance=balance;
//     }
//     void display(){
//         cout<<"The Account number is: "<<accountNumber<<endl;
//         cout<<"The Account Balance is: "<<balance<<endl;
//     }
// };
// int main(){
//     BankAccount b;
//     b.setDetails(45353,8990);
//     b.display();
//     return 0;
// }




//Q6: Method Chaining (Fluent Interface)Create a class Calculator with a single double result = 0.0;.Implement methods Calculator& add(double val), 
//Calculator& subtract(double val),and Calculator& multiply(double val) that each return *this.In main(), test method chaining in a single line:C++Calculator calc;
// calc.add(10).multiply(5).subtract(4);
// Add a void printResult() method to verify the answer is 46.0.Level 4: Pointers to Derived Classes & Early Binding (Lec 54)

// #include<iostream>
// using namespace std;
// class Calculator{
// protected:
//     double result=0.0;
// public:
//     Calculator& add(double val){
//         result+=val;
//         return *this;
//     }
//     Calculator& sub(double val){
//         result-=val;
//         return *this;
//     }
//     Calculator& mul(double val){
//         result*=val;
//         return *this;
//     }
//     double getResult(){
//         return result;
//     }

//     void show()const{
//         cout<<"Current Result "<<result<<endl;
//     }
// };
// int main(){
//     Calculator c1;
//     c1.add(8).sub(4).mul(11);
//     c1.show();
//     return 0;
// }






//Q7: Base Pointer to Derived Object (The Classic Test)Create a base class BaseClass with int var_base and void display().
//Create a derived class DerivedClass :
// public BaseClass with int var_derived and its own void display().In main():Create a BaseClass *base_ptr.
 //Create a DerivedClass obj_derived.Point base_ptr = &obj_derived.Assign base_ptr->var_base = 34;.
 //Call base_ptr->display().Observe & Verify: 
 //Which display() method executes? What error happens if you try to execute base_ptr->var_derived = 98;?
 
 

// #include<iostream>
// using namespace std;
// class BaseClass{
// protected:
//     int var_base=1;
// public:
//     void virtual display(){
//         cout<<"Base Class Variable is: "<<var_base<<endl;
//     }
// };

// class DerivedClass:public BaseClass{
//     int var_der=2;
// public:
//     void display(){
//         cout<<"Derived Class Variable is: "<<var_der<<endl;
//     }
// };
// int main(){
//     BaseClass *b1;
//     DerivedClass d1;
//     b1=&d1;
//     b1->display();
//     //b1->var_der=98;            BY DEFAULT B1 WILL ONLY WORK ON BASE CLASS, IT WILL THROW AN ERROR UNTIL EXPLICTY BASE CLASS DISPLAY IS VIRTUAL;
//     return 0;
// }




 //Q8: Derived Class Pointer AccessUsing the classes from Q7:Create a DerivedClass *derived_ptr = &obj_derived;.
 //Assign both var_base and var_derived through derived_ptr.Call derived_ptr->display().
 //Note down why derived_ptr can access both base and derived attributes, whereas base_ptr cannot.Level 5: Mixed / Interview Challenge
 






 
 //Q9: Heterogeneous Object Storage ArrayCreate a base class Shape and a derived class Circle : public Shape.In main(), 
 //create an array of base pointers: Shape* shapes[3].
 //Dynamically allocate 3 Circle objects into this array:C++shapes[0] = new Circle();
// shapes[1] = new Circle();
// shapes[2] = new Circle();
// Iterate through the array to interact with the objects, and deallocate each element using a for loop with delete shapes[i];.

// #include<iostream>
// using namespace std;
// class Shape{
// protected:
//     int radius;
// public:
//     void set(int a){
//     radius=a;
//     }
// };
// class Circle:public Shape{
// public:
//     void set(int a){
//         Shape::set(a);
//     }
//     void area(){
//         cout<<"The Area of circle is: "<<(3.14)*radius*radius<<endl;
//     }
// };
// int main(){
//     Circle *shapes=new Circle[3];
//     Circle *shapesX=shapes;
//     Circle *shapeTemp=shapes;
//     for(int i=0;i<3;i++){
//         int x;
//         cout<<"Enter the radius "<<endl;
//         cin>>x;
//         shapesX->set(x);
//         shapesX++;
//     }
//     cout<<"Area of all the circles: "<<endl;
//     for(int i=0;i<3;i++){
//         shapeTemp->area();
//         shapeTemp++;
//     }
//     delete[] shapes;
//     shapes=nullptr;
//     shapesX=nullptr;
//     shapeTemp=nullptr;
//     return 0;
// }





//Q10: Memory Leak & Trap IdentifierSpot and correct the two memory bugs in the following snippet:C++class Node {
//     int data;
// public:
//     Node(int d) : data(d) {}
// };

// int main() {
//     Node* list = new Node[5]{Node(1), Node(2), Node(3), Node(4), Node(5)};
//     Node* walker = list;

//     for (int i = 0; i < 5; i++) {
//         walker++;
//     }

//     delete walker; 
//     return 0;
// }




















// 1. Dynamic Primitive vs Array Allocation ,Allocate an integer pointer int* p = new int(25); and a dynamic array int* arr = new int[5];.Populate arr with the first 5 multiples of 5.Properly free memory using delete and delete[], setting both pointers to nullptr.


// #include<iostream>
// using namespace std;

// int main(){
//     int *p=new int(25);
//     int *arr=new int[5];
//     int *arrTemp=arr;
//     for(int i=0;i<5;i++){
//         arr[i]=5*(i+1);
//     }
//     for(int i=0;i<5;i++){
//         cout<<"Multiple of 5 are: "<<arr[i]<<endl;
//     }
//     cout<<*p<<endl;
//     delete p;
//     delete []arr;
//     p=nullptr;
//     arr=nullptr;
//     arrTemp=nullptr;
//     return 0;
// }







// 2. Arrow Operator BasicsCreate a class Complex with private fields int real, imag.Add void setData(int r, int i) and void display()
//.In main(), instantiate an object dynamically: Complex* ptr = new Complex;. Call both methods using ->, then free the memory with delete.


// #include<iostream>
// using namespace std;

// class Complex{
//     int real,imag;
// public:
//     void setData(int a,int b){
//         real=a;
//         imag=b;
//     }
//     void display(){
//         cout<<"The Real Part is: "<<real<<endl;
//         cout<<"The Imaginary Part is: "<<imag<<endl;
//     }
// };
// int main(){
//     Complex *ptr=new Complex;
//     ptr->setData(5,8);
//     ptr->display();
//     delete ptr;
//     ptr=nullptr;
//     return 0;
// }




// 3. Pointer Dereferencing vs Arrow OperatorUsing the same Complex class, write code in main() showing that (*ptr).display() and ptr->display() produce identical results
//Section B: Array of Objects using Pointers (Lec 52)

// #include<iostream>
// using namespace std;

// class Complex{
//     int real,imag;
// public:
//     void setData(int a,int b){
//         real=a;
//         imag=b;
//     }
//     void display(){
//         cout<<"The Real part is: "<<real<<endl;
//         cout<<"The imaginary part is: "<<imag<<endl;
//     }
// };
// int main(){
//     Complex *ptr=new Complex;
//     (*ptr).setData(6,8);
//     (*ptr).display();
//     ptr->setData(6,8);      //// BOTH THE OPERATION WILL PRODUCE SAME RESULT BECAUSE THE DIFFRENCE IS JUST IN SYNTAX WRITING, IT HAS NOTHING TO DO WITH THE OUTPUT CHANGE 
//     ptr->display();
//     delete ptr;
//     ptr=nullptr;
//     return 0;
// }







// 4. Dynamic Shop InventoryCreate a class ShopItem with int id and float price.Add methods void setData(int a, float b) and void getData()
//.In main(), take an integer $N$ from the user and dynamically allocate ShopItem* items = new ShopItem[N];.
//Use a loop with pointer arithmetic (items + i)->setData(...) to populate data, then loop to display all items. Clean up with delete[] items;.


// #include<iostream>
// using namespace std;
// class ShopItem{
//     int id;
//     float price;
// public:
//     void setData(int a,float b){
//         id=a;
//         price=b;
//     }
//     void getData(){
//         cout<<"The Product ID is: "<<id<<endl;
//         cout<<"The Price of Item is: "<<price<<endl;
//     }
// };
// int main(){
//     int size;
//     cout<<"Enter the number of Products to be created: "<<endl;
//     cin>>size;
//     ShopItem *arr=new ShopItem[size];
//     ShopItem *disp=arr;
//     for(int i=0;i<size;i++){
//         int x;
//         float b;
//         cout<<"Enter Item id and Price Respectively: "<<endl;
//         cin>>x>>b;
//         (arr+1)->setData(x,b);
//     };
//     for(int i=0;i<size;i++){
//         cout<<"Item Details for item no: "<<i+1<<endl;
//         (disp+i)->getData();
//         disp++;
//     }
//     delete [](arr);
//     arr=nullptr;
//     disp=nullptr;
//     return 0;

// }





// 5.Marks CalculatorCreate a class Student with string name and float marks.Dynamically allocate an array of 4 students.
///Take input for all 4 students, calculate the marks , and display the student with the highest marks
//.Section C: The this Pointer & Chaining (Lec 53)

// #include<iostream>
// using namespace std;
// class Student{
//     string name;
//     float marks;
// public:
//     void set(string a,float b){
//         name=a;
//         marks=b;
//     }
//     void show(){
//         cout<<"NAME: "<<name<<endl;
//         cout<<"MARKS: "<<marks<<endl;
//     }
//     float mark(){
//         return marks;
//     }
// };
// int main(){
//     Student *stu=new Student[4];
//     Student *disp=stu;
//     for(int i=0;i<4;i++){
//         string a;
//         float b;
//         cout<<"Enter the Name and Marks here: "<<endl;
//         cin>>a>>b;
//         (stu+i)->set(a,b);
//     }
//     for(int i=0;i<4;i++){
//         cout<<"The Details for Student: "<<i+1<<" is: "<<endl;
//         (disp+i)->show();
//     }
//     int maxIndex = 0;
//     for (int i = 1; i < 4; i++) {
//         if (stu[i].mark() > stu[maxIndex].mark()) {
//             maxIndex = i;
//         }
//     }

//     cout << "\n=== Top Student ===" << endl;
//     stu[maxIndex].show(); // Call show() directly without wrapping in cout
//     delete []stu;
//     stu=nullptr;
//     disp=nullptr;
//     return 0;
// }





// // 6. Variable Shadowing ResolutionCreate a class Person with private fields string name and int age.
// //Write a constructor Person(string name, int age) where parameter names match member variables exactly.Use this->name = name; and this->age = age; to resolve ambiguity.

// #include<iostream>
// using namespace std;
// class Person{
//     string name;
//     int age;
// public:
//     Person(string name,int age){
//         this->name=name;
//         this->age=age;
//     }
//     void show(){
//         cout<<"The Name of Person is: "<<name<<endl;
//         cout<<"The age of person is: "<<age<<endl;
//     }
// };
// int main(){
//     Person p1("Pratik Chaubey",43);
//     p1.show();
//     return 0;
// }







// 7. Method Chaining (Fluent Interface)Create a class Box with double length = 0, width = 0, height = 0;.
//Write setters Box& setLength(double l), Box& setWidth(double w), and Box& setHeight(double h) where each returns *this.In main(), 
//chain all three calls in a single statement:C++Box b;
// b.setLength(10).setWidth(5).setHeight(2);
// Add a double getVolume() method to print the final volume ($100$).Section D: Pointers to Derived Classes & Early Binding (Lec 54)


// #include<iostream>
// using namespace std;
// class Box{
//     double length=0,width=0,height=0;
// public: 
//     Box& setLength(double l){
//         length=l;
//        return  *this;
//     }
    
//     Box& setWidth(double w){
//         width=w;
//         return *this;
//     }
//     Box& setHeight(double h){
//         height=h;
//         return *this;
//     }
//     double getVolume()const{
//        return length*width*height;
//     }
// };
// int main(){
//     Box b1;
//     b1.setLength(7).setWidth(5).setHeight(4);
//     b1.getVolume();
//     cout<<"The Volume of the Box is: "<<b1.getVolume()<<endl;
//     return 0;
// }




//8. Base Pointer to Derived Object (Early Binding Test)Create class BaseClass with int var_base and void display() { cout << "Base var: " << var_base << endl; }.
// Create class DerivedClass : public BaseClass with int var_derived and void display() { cout << "Derived var: " << var_derived << endl; }.
// In main(), create a BaseClass* base_ptr and point it to a DerivedClass instance.Assign base_ptr->var_base = 34; and call base_ptr->display().
// Observe why the compiler calls BaseClass::display() instead of DerivedClass::display().

// #include<iostream>
// using namespace std;
// class BaseClass{
// public:
//     int var_base;
// public:
//     void display(){
//         cout<<"Base Variable is: "<<var_base<<endl;
//     }
// };
// class DerivedClass:public BaseClass{
//     int var_der=90;
// public:
//     void display(){
//         cout<<"Derived class Variable is: "<<var_der<<endl;
//     }
// };
// int main(){
//     DerivedClass d1;
//     BaseClass *ptr=&d1;
//     ptr->var_base=34;
//     ptr->display();
// }



//9. create a pointer of type DerivedClass* derived_ptr pointing to the derived object.
// Set both var_base and var_derived through derived_ptr and call derived_ptr->display().
// Note down why derived_ptr can access derived members while base_ptr cannot.Section E: Virtual Functions & Late Binding (Lec 55)

// #include<iostream>
// using namespace std;
// class BaseClass{
// public:
//     int var_base;
//     void display(){
//         cout<<"The Base Class Variable is: "<<var_base<<endl;
//     }
// };
// class DerivedClass:public BaseClass{
// public:
//     int var_der;
//     void display(){
//         cout<<"The Base class Variable is: "<<var_base<<endl;
//         cout<<"The Derived Class Variable is: "<<var_der<<endl;
//     }
// };
// int main(){
//     DerivedClass d1;
//     DerivedClass *ptr=&d1;
//     ptr->var_base=89;
//     ptr->var_der=67;
//     ptr->display();
//     return 0;
// }







// // 10. Enabling Late Binding with virtualModify Question 8 by adding the virtual keyword to BaseClass::display().
// //Call base_ptr->display() again through the base pointer pointing to the derived object.Verify that DerivedClass::display() now executes at runtime.


// #include<iostream>
// using namespace std;
// class BaseClass{
// public:
//     int var_base;
//     void virtual display(){
//         cout<<"The Base Class1 Variable is: "<<var_base<<endl;
//     }
// };
// class DerivedClass:public BaseClass{
// public:
//     int var_der;
//     void  display(){
//         cout<<"The Base clas2 Variable is: "<<var_base<<endl;
//         cout<<"The Derived Class Variable is: "<<var_der<<endl;
//     }
// };
// int main(){
//     DerivedClass d1;
//     BaseClass *ptr=&d1;
//     ptr->var_base=89;
//     ptr->display();
//     return 0;
// }






// 11. Animal Kingdom PolymorphismCreate a base class Animal with virtual void sound() { cout << "Generic sound\n"; }.Derive Dog (prints "Bark"), Cat (prints "Meow"), 
//and Cow (prints "Moo").In main(), create an array of base pointers: Animal* zoo[3]; holding one of each animal.Loop through the array and invoke zoo[i]->sound().


// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void sound() {
//         cout << "Generic Sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() override {
//         cout << "Bark" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void sound() override {
//         cout << "Meow" << endl;
//     }
// };

// class Cow : public Animal {
// public:
//     void sound() override {
//         cout << "Moo" << endl;
//     }
// };

// int main() {
//     // Array of 3 base class pointers
//     Animal* zoo[3];

//     zoo[0] = new Dog();
//     zoo[1] = new Cat();
//     zoo[2] = new Cow();

//     // Polymorphic loop
//     for (int i = 0; i < 3; i++) {
//         zoo[i]->sound();
//     }

//     // Clean up each allocated derived object
//     for (int i = 0; i < 3; i++) {
//         delete zoo[i];
//         zoo[i] = nullptr;
//     }

//     return 0;
// }





// 12. Default Fallback BehaviorIn your Animal hierarchy, create a derived class Snake : public Animal that does not override sound().
//Point Animal* a = new Snake(); and call a->sound();.Observe how C++ falls back to the base class implementation when no override exists.
//Section F: Pure Virtual Functions & Abstract Classes (Lec 56)

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void sound() {
//         cout << "Generic Sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() override {
//         cout << "Bark" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void sound() override {
//         cout << "Meow" << endl;
//     }
// };

// class Cow : public Animal {
// public:
//     void sound() override {
//         cout << "Moo" << endl;
//     }
// };
// class Snake:public Animal{};

// int main() {
//     // Array of 4 base class pointers
//     Animal* zoo[4];

//     zoo[0] = new Dog();
//     zoo[1] = new Cat();
//     zoo[2] = new Cow();
//     zoo[3]= new Snake();


//     // Polymorphic loop
//     for (int i = 0; i < 4; i++) {
//         zoo[i]->sound();
//     }

//     // Clean up each allocated derived object
//     for (int i = 0; i < 4; i++) {
//         delete zoo[i];
//         zoo[i] = nullptr;
//     }

//     return 0;
// }





// 13. Abstract Shape Area CalculatorCreate an abstract class Shape containing a pure virtual function:C++virtual double calculateArea() = 0;
// Derive Rectangle (with length, width) and Circle (with radius).Implement calculateArea() in both derived classes.Verify that attempting to declare Shape s; 
//produces a compiler error.

// #include<iostream>
// using namespace std;
// class Shape{
// public:
//     virtual double calculateArea()=0;
// };
// class Rectangle:public Shape{
// double length,breadth;
// public:
//     void set(double a,double b){
//         length=a;
//         breadth=b;
//     }
//     double calculateArea(){
//         return length*breadth;
//     }
// };
// class Circle:public Shape{
// double radius;
// public:
//     void set(double a){
//         radius =a;
//     }
//     double calculateArea(){
//         return 3.14*radius*radius;
//     }
// };
// int main(){
//     //  Shape s;        // will Give Compliation Error.
//     cout<<s.calculateArea()<<endl;
//     Rectangle r1;
//     r1.set(7.8,9.2);
//     cout<<r1.calculateArea()<<endl;
//     Circle c1;
//     c1.set(8.6);
//     cout<<c1.calculateArea()<<endl;
//     return 0;
// }





// 14. Pure Virtual Functions with CodeWithHarry Example (Lec 56)
// Create the classic CWH tutorial hierarchy:

// Requirements:

// Base class CWH:

// Fields: string title;, float rating;

// Constructor: CWH(string s, float r) to initialize fields.

// Pure virtual function: virtual void display() = 0;

// Derived class CWHVideo : public CWH:

// Field: float videoLength;

// Constructor passing s and r to CWH constructor, and initializing videoLength.

// Override void display() override to print title, rating, and length.

// Derived class CWHText : public CWH:

// Field: int words;

// Constructor passing s and r to CWH constructor, and initializing words.

// Override void display() override to print title, rating, and word count.

// In main():

// Instantiate one CWHVideo and one CWHText.

// Create two CWH* base pointers pointing to them and call display() on both.


// #include<iostream>
// using namespace std;
// class CWH{
// protected:
//     string title;
//     float rating;
// public:
//     CWH(string a,float b):title(a),rating(b){};
//     void virtual display()=0;
// };

// class CWHvideo:public CWH{
//     float VideoLength;
// public:
//     CWHvideo(string a,float b,float c):CWH(a,b),VideoLength(c){};
//     void display()override{
//         cout<<"The title is: "<<title<<endl<<"The rating is: "<<rating<<endl<<"The video length is: "<<VideoLength<<endl;
//     }
// };
// class CWHText:public CWH{
// protected:
//     int words;
// public:
//     CWHText(string a,float b,int c):CWH(a,b),words(c){};
//     void display(){
//         cout<<"TITLE: "<<title<<endl
//         <<"RATING: "<<rating<<endl<<"Word Count: "<<words<<endl;
//     }
// };
// int main(){
//     CWHvideo c1("HERO",45,67);
//     CWHText c2("VILLEN",67,89);
//     CWH *q1=&c1;
//     CWH *q2=&c2;
//     q1->display();
//     q2->display();
//     return 0;
// }






