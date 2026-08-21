
// Question 1: Dynamic Bank Deposit (Dynamic Constructors)
// Goal: Create a Deposit class with dynamic initialization depending on whether the interest rate entered by the user is an integer (e.g., $5\%$) or
//  a decimal float (e.g., $0.05$).Time Allocation: 30 minut


// Question 2: Dynamic Buffer & Deep Copy (Copy Constructor)
// Goal: Create a CustomBuffer class that dynamically allocates memory for an integer array using new.
//  Write a custom copy constructor CustomBuffer(const CustomBuffer &obj) to execute a deep copy.
//  Verify that modifying the copy does not alter the original object's array.  Time Allocation: 30 minutes.



// Question 3: Block Scope & Destruction Order (Destructors)Goal: 
// Create a Tracker class with a static counter. 
// Print creation logs in the constructor and destruction logs in the destructor (~Tracker()). 
// Instantiate objects inside a nested { } block in main() to verify the exact order of object creation and destruction. 
//  Time Allocation: 30 minutes.





// 	Custom Copy Constructor with Inheritance:
//  Create a base class Component with a protected dynamically allocated integer pointer (int* id). Write a custom destructor,
//   parameterized constructor, and deep-copy constructor for Component.
//    Derive SubComponent publicly. Ensure memory is freed cleanly without memory leaks when SubComponent objects go out of scope.





// 13.	Combining Operator Overloading, Friend Function, and Inheritance:
// o	Base class Item with protected double price.
// o	Derived class Book : public Item with private string title.
// o	Overload the << operator using a friend function ostream& operator<<(ostream& os, const Book& b) to print both the title and the inherited price.




// 14.	Protected Constructor Pattern: Create a class RestrictedBase whose constructor is placed in the protected section (instead of public).
// o	Attempt to instantiate RestrictedBase directly in main() (observe what happens).
// o	Derive a class AllowedDerived : public RestrictedBase with a public constructor. Instantiate AllowedDerived in main() and explain why this works while direct instantiation fails.











// 15.	Base Class Pointer Assignment (Upcasting Intro): 
// Create a base class Animal with protected string sound and a method makeSound()
// . Derive Dog publicly with sound = "Woof".
//  In main(), create a Dog object, but assign its address to an Animal* pointer (Animal* ptr = &myDog). 
//  Call methods using ptr and explain what is accessible through ptr.








// 16.	Static Members in Single Inheritance:
//  Create a base class Counter with a protected static int count. 
//  Increment count in the constructor of Counter.
//   Derive InstanceTracker : public Counter. 
//   Create 3 objects of InstanceTracker in main() and display the value of count from a method inside InstanceTracker.









// Multiple Inheritance with Name Conflict (Ambiguity Intro):

// Class Printer has public void show() printing "Printing document...".

// Class Scanner has public void show() printing "Scanning document...".

// Class Copier : public Printer, public Scanner inherits both.

// In main(), try calling copierObj.show(). Observe the compiler error. Resolve it inside Copier or main() using the scope resolution operator (::).









// Class Layout & Data Size Analysis:

// Class A has int a (4 bytes).

// Class B : public A has int b (4 bytes).

// Class C : public B has int c (4 bytes).

// Write a program that uses sizeof(A), sizeof(B), and sizeof(C) to show how memory grows tier-by-tier in multilevel inheritance.











// 	Custom Copy Constructor with Inheritance: Create a base class Component with a protected dynamically allocated integer pointer (int* id).
// Write a custom destructor, parameterized constructor, and deep-copy constructor for Component.
//Derive SubComponent publicly. Ensure memory is freed cleanly without memory leaks when SubComponent objects go out of scope.



