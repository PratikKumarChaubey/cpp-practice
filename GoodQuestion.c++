// Hard practice questions
// Inventory management system
// Create a Product class with private id, name, price, and stock.

// Add methods to purchase, restock, and show details.

// Use a static variable to count total products.

// Find the product with the highest stock.











// Complex number calculator
// Create a Complex class with private real and imaginary parts.

// Write functions to add, subtract, and multiply two complex numbers.

// Use friend functions where needed.

// Display results in standard form.

// Employee payroll system
// Create an Employee class with private name, salary, and designation.

// Calculate gross salary with allowance and deduction.

// Use a friend function to compare two employees’ salaries.

// Apply raise based on percentage.

// Library book tracker
// Create a Book class with private title, author, price, and issued status.

// Add methods to issue and return books.

// Track total issued books using a static member.

// Use an array of objects for several books.

// Time and date operations
// Create Time and Date classes.

// Add times and compare dates.

// Handle minute/hour carry properly.

// Write functions to display the result in proper format.

// Distance converter and comparer
// Create a Distance class with meters and centimeters.

// Add two distances.

// Compare two distance objects.

// Use a friend function to return the larger distance.

// Rectangle utility program
// Create a Rectangle class with private length and breadth.

// Find area, perimeter, and compare two rectangles.

// Use a friend function to compare areas.

// Store multiple rectangles in an array.

// Marks analysis system
// Create a Marks class with private student name and subject marks.

// Calculate highest, lowest, and average marks.

// Use a friend function to calculate class average from an array of objects.

// Display the student with the highest total.

// Extra hard challenge
// Mini ATM system
// Create a class that supports:

// account creation,

// deposit,

// withdraw,

// transfer,

// balance check,

// static account number generation,

// friend function for fund transfer.

// Shape class hierarchy
// Create a base class Shape and derived classes Circle, Rectangle, and Triangle.

// Use constructors, method overriding, and object arrays.

// Calculate area for each shape.

// Display the largest area among all objects.



// Student result management
// Create a Student class with private name, rollNo, and marks in 3 subjects.

// Find total, average, and grade.

// Use an array of objects for multiple students.

// Display the topper.











// 12.	Custom Copy Constructor with Inheritance:
//  Create a base class Component with a protected dynamically allocated integer pointer (int* id). Write a custom destructor,
//   parameterized constructor, and deep-copy constructor for Component.
//    Derive SubComponent publicly. Ensure memory is freed cleanly without memory leaks when SubComponent objects go out of scope.













// Build a class template named Stack that manages dynamic memory on the heap using raw pointers.
// Requirements:Template Header: template <typename T>Private Members:T* arr; (Pointer to dynamically allocated heap array)int topIndex; 
// (Tracks top element index, starts at -1)int capacity; (Total maximum elements allowed)Public Methods:Constructor: Stack(int size) $\implies$ Allocates new T[size], 
// sets capacity = size, and topIndex = -1.
//Destructor: ~Stack() $\implies$ Frees heap memory using delete[] arr;.void push(T val) $\implies$ Adds val to the stack
// if not full (topIndex < capacity - 1). 
// If full, print overflow.T pop() $\implies$ Decrements and returns the top element if not empty (topIndex >= 0). 
// If empty, print underflow.T peek() const $\implies$ Returns top element without removing it
// .bool isEmpty() const $\implies$ Returns topIndex == -1.bool isFull() const $\implies$ Returns topIndex == capacity - 1.

