// // Write a C++ program using function templates and class templates to solve two common tasks.

// // Task 1: Function Template — Linear Search
// // Create a generic function template searchElement:

// // Signature: int searchElement(T arr[], int size, T target)

// // Behavior: Searches for target in array arr.

// // Return: The 0-based index if found, or -1 if not found.

// // Test cases: Test it with an array of int and an array of string (or char).



// // #include <iostream>
// // #include <string>
// // using namespace std;

// // template <typename T>
// // int searchElement(T arr[], int size, T target) {
// //     for (int i = 0; i < size; i++) {
// //         if (arr[i] == target) {
// //             return i; // Found: return matching index
// //         }
// //     }
// //     return -1; // Not found after checking full array
// // }

// // int main() {
// //     // Test 1: Integer array
// //     int intArr[] = {10, 25, 30, 45, 50};
// //     int intIndex = searchElement(intArr, 5, 30);
// //     cout << "Element 30 found at index: " << intIndex << endl;

// //     // Test 2: String array
// //     string strArr[] = {"apple", "banana", "cherry"};
// //     int strIndex = searchElement(strArr, 3, string("cherry"));
// //     cout << "Element 'cherry' found at index: " << strIndex << endl;

// //     // Test 3: Element not present
// //     int notFound = searchElement(intArr, 5, 99);
// //     cout << "Element 99 search result: " << notFound << endl;

// //     return 0;
// // }






// // Problem: Generic Fixed-Size Stack (Stack<T, Capacity>)
// // Create a generic class template for a Fixed-Capacity Stack using a standard array.

// // Requirements
// // Template Parameters:

// // Type parameter typename T

// // Non-type parameter int Capacity = 10 (default size 10 if not specified).

// // Private Members:

// // An array T data[Capacity]

// // An integer top initialized to -1 (tracks the index of the top element).

// // Public Member Functions:

// // void push(T element): Adds an item to the stack. If the stack is full (top == Capacity - 1), print "Stack Overflow!" and do not add.

// // void pop(): Removes the top item. If the stack is empty (top == -1), print "Stack Underflow!".

// // T peek(): Returns the element at the top without removing it.

// // bool isEmpty(): Returns true if top == -1, otherwise false.

// // int size(): Returns the current number of elements (top + 1).








// // Section 1: Function Templates (Basics & Logic)
// // 1. Generic Swap and Array Reversal

// // Write a template function customSwap(T &a, T &b) that swaps two values without using std::swap.

// // Write a second template function reverseArray(T arr[], int size) that utilizes your customSwap to reverse an array of any data type in place.

// // Test types: int, double, char.


// // #include<iostream>
// // using namespace std;
// // template<class T>
// // void customSwap(T &a,T &b){
// //     T temp=a;
// //     a=b;
// //     b=temp;
// // }
// // template<class T>
// // void reverseArray(T arr[],int size){
// //     int start=0;
// //     int end = size - 1;

// //     while (start < end) {
// //         customSwap(arr[start], arr[end]); // Swap elements at boundaries
// //         start++;
// //         end--;
// //     }

// // }
// // template <class T>
// // void printArray(T arr[], int size) {
// //     for (int i = 0; i < size; i++) {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl;
// // }

// // int main() {
// //     // Test with int
// //     int intArr[] = {1, 2, 3, 4, 5};
// //     reverseArray(intArr, 5);
// //     cout << "Reversed int: ";
// //     printArray(intArr, 5);

// //     // Test with double
// //     double dblArr[] = {1.1, 2.2, 3.3, 4.4};
// //     reverseArray(dblArr, 4);
// //     cout << "Reversed double: ";
// //     printArray(dblArr, 4);

// //     // Test with char
// //     char charArr[] = {'H', 'E', 'L', 'L', 'O'};
// //     reverseArray(charArr, 5);
// //     cout << "Reversed char: ";
// //     printArray(charArr, 5);

// //     return 0;
// // }









// // 2. Array Statistics (Min, Max, Sum, Average)

// // Create a template function getArrayStats(T arr[], int size, T &minVal, T &maxVal, T &sumVal, double &avgVal).

// // It must compute and return all 4 metrics using pass-by-reference.

// // Test types: int[], float[].


// // #include<iostream>
// // using namespace std;
// // template<class T>
// // void getArrayStats(T arr[],int size){
// //     cout<<"****************Maximum Value**************"<<endl;
// //     T maxIndex=arr[0];
// //     for(int i=0;i<size;i++){
// //         if(arr[i]>=maxIndex){
// //             maxIndex=arr[i];
// //         }
// //     }
// //     cout<<"The Maximum Value in array is: "<<maxIndex<<endl;

// //     cout<<"***********MINIMUM VALUE****************"<<endl;
// //     T minIndex=arr[0];
// //     for(int i=0;i<size;i++){
// //         if(arr[i]<=minIndex){
// //             minIndex=arr[i];
// //         }
// //     }
// //     cout<<"The Minimum Value in array is: "<<minIndex<<endl;
// //     T sumval=0;
// //     cout<<"**********SUM OF ALL VALUES IN ARRAY*************"<<endl;
// //     for(int i=0;i<size;i++){
// //         sumval+=arr[i];
// //     }
// //     cout<<"The sum of all the values in array is: "<<sumval<<endl;
// //     T avgVal=0;
// //     avgVal=sumval/size;
// //     cout<<"The average value is: "<<avgVal<<endl;
// // }
    
// // int main(){
// //     int a[]={56,78,34,35,76,89,45,89};
// //     int size=8;
// //     getArrayStats(a,size);
// //     return 0;
// // }















// // Section 2: Multiple Types & Non-Type Parameters
// // 4. Multi-Type Generic Pair Display

// // Write a template function printKeyAndValue(T1 key, T2 value) taking two different types.

// // Format the output as [Key: <key> (Size: X bytes) | Value: <value> (Size: Y bytes)] using sizeof().

// // Test cases: ("Age", 19), (101, "Pratik"), ('A', 99.95).


// // #include <iostream>
// // #include <string>

// // // Multi-type template function
// // template <typename T1, typename T2>
// // void printKeyAndValue(const T1& key, const T2& value) {
// //     std::cout << "[Key: " << key 
// //               << " (Size: " << sizeof(T1) << " bytes) | Value: " 
// //               << value 
// //               << " (Size: " << sizeof(T2) << " bytes)]\n";
// // }

// // int main() {
// //     // Test Case 1: (const char*, int) or (std::string, int)
// //     // Passing string literal decays to const char*
// //     printKeyAndValue("Age", 19);

// //     // Test Case 2: (int, const char*)
// //     printKeyAndValue(101, "Pratik");

// //     // Test Case 3: (char, double)
// //     printKeyAndValue('A', 99.95);

// //     // Explicit std::string test case to see dynamic type differences
// //     printKeyAndValue(std::string("StudentID"), 2026);

// //     return 0;
// // }











// // . Non-Type Parameterized Array Wrapper

// // Write a class template template <typename T, int Size> named StaticBuffer.

// // Implement methods:

// // void fill(T value) — fills every index with value.

// // T& at(int index) — returns the element with bounds checking (throw an exception or print an error if index < 0 || index >= Size).

// // int capacity() — returns Size.

// // Test case: StaticBuffer<int, 5> and StaticBuffer<string, 3>.













// // Section 3: Class Templates (Data Structures)
// // 6. Generic Matrix Class

// // Create a class template template <typename T, int Rows, int Cols> class Matrix.

// // Implement:

// // void input() to read elements from standard input.

// // void display() const to print the matrix in a grid format.

// // Matrix<T, Cols Rows,> add(const Matrix<T, Cols Rows,> &other) to perform element-wise addition.

// // Test case: Two Matrix<int, 2, 3> objects.










// // 7. Generic Singly Linked List

// // Create a class template LinkedList<T> with an internal Node<T> struct.

// // Implement:

// // void insertAtHead(T val)

// // void insertAtTail(T val)

// // bool search(T val)

// // void display()

// // Test types: LinkedList<int> and LinkedList<char>.









// // 8. Generic Circular Queue

// // Implement a class template template <typename T, int Capacity = 5> class CircularQueue.

// // Implement enqueue(T item), dequeue(), peek(), isFull(), and isEmpty().

// // Test case: CircularQueue<int, 4> handling full/empty edge cases.












// // Section 4: Template Specialization & Overloading
// // 9. Explicit Template Specialization for Strings

// // Write a template function template <typename T> T findMax(T a, T b) that returns the maximum of two values using standard < comparison.

// // Write a full template specialization for const char* (template <> const char* findMax<const char*>(const char* a, const char* b)) using strcmp() to 
// // compare C-style strings alphabetically instead of comparing pointer addresses.












// // 10. Generic Dynamic Smart Container (Rule of Three)

// // Create a class template VectorContainer<T> that dynamically manages its memory on the heap (like a simplified std::vector).

// // Include:

// // T* data, int size, int capacity

// // Default constructor initializing capacity to 2.

// // Destructor ~VectorContainer() to prevent memory leaks.

// // void push_back(T val) that doubles capacity when full.

// // T get(int index) and int getSize().

// // Test case: Instantiate VectorContainer<double> and push 10 items to verify dynamic resizing.











// // Task: Build a FixedBox<T, Size> Template
// // Write a class template named FixedBox that acts like a fixed-size container on the stack.

// // Requirements:

// // Template Header: Accepts typename T and int Size.

// // Private Member: A fixed raw array T items[Size]; and an integer int count = 0;.

// // Public Methods:

// // bool addItem(T item): Adds the item if count < Size and returns true. If full, prints an overflow warning and returns false.

// // void showItems() const: Prints all items currently stored in the box.

// // int getCapacity() const: Returns Size.

// // int getCount() const: Returns count.




// // #include<iostream>
// // using namespace std;
// // template<class T,int Size>
// // class FixedBox{
// //     T box[Size];
// //     int count=0;
// // public:
// //     FixedBox(){};
// //     bool addItem(T item){
// //         if(count>=Size){
// //             cout<<"Warning, FixedBox is full,cant add "<<item<<endl;
// //             return false;
// //         }
// //         box[count]=item;
// //         count++;
// //         return true;
// //     }
// //     void showItems(){
// //         cout << "Items in Box (" << count << "/" << Size << "): [ ";
// //         for(int i=0;i<count;i++){
// //             cout<<"The item detail for item no "<<i<<" is "<<box[i]<<endl;
// //         }
// //         cout << " ]\n";
// //     }
// //     int getCapacity() const{
// //         return Size;
// //     }
// //     int getCount()const{
// //         return count;
// //     }


// // };

// // int main() {
// //     // Box 1: Holds 3 integers
// //     FixedBox<int, 3> intBox;
// //     intBox.addItem(10);
// //     intBox.addItem(20);
// //     intBox.addItem(30);
// //     intBox.addItem(40); // Will trigger overflow warning
// //     intBox.showItems();

// //     cout << "\n----------------------------------\n\n";

// //     // Box 2: Holds 2 strings
// //     FixedBox<string, 2> strBox;
// //     strBox.addItem("Laptop");
// //     strBox.addItem("Mouse");
// //     strBox.addItem("Keyboard"); // Will trigger overflow warning
// //     strBox.showItems();

// //     return 0;
// // }




// // Problem 1: Multi-Type Function Template with Trailing Return
// // Write a function template findMin that takes two arguments of different types (T1 and T2), compares them, and returns whichever is smaller.

// // Challenge: Use auto and decltype (or trailing return syntax -> decltype(...))

// // so that comparing findMin(4, 3.14) correctly deduces and returns a double (3.14) without implicit narrowing.



// // #include<iostream>
// // using namespace std;

// // template<typename T1,typename T2>
// // auto findMin(T1 a,T2 b){
// //     return a<b? a:b;
// // }
// // int main(){
// //     auto result=findMin<int>(4,3.14);
// //     cout<<"LEAST VALUE: "<<result<<endl;
// //     return 0;
// // }




// // Task:
// // Write the full implementation of:

// // The constructor FixedArray() (initializes count = 0).

// // The method void add(T item) (inserts item if count < Capacity).

// // The method void display() (prints all elements separated by space).

// // Constraint: All three functions must be defined outside the class body using proper template <...> and scope resolution (::) syntax.

// // Write your out-of-class definitions in your editor or notebook and paste your answer!






// // #include <iostream>
// // using namespace std;

// // template <typename T = int, int Capacity = 5>
// // class FixedArray {
// // private:
// //     T arr[Capacity];
// //     int count;

// // public:
// //     FixedArray();
// //     void add(T item);
// //     void display();
// // };
// // // 1. Constructor defined outside the class
// // template <typename T, int Capacity>
// // FixedArray<T, Capacity>::FixedArray() {
// //     count = 0;
// // }

// // // 2. add() method defined outside the class
// // template <typename T, int Capacity>
// // void FixedArray<T, Capacity>::add(T item) {
// //     if (count < Capacity) {
// //         arr[count] = item;
// //         count++;
// //     } else {
// //         cout << "Array is full!" << endl;
// //     }
// // }
// // template<typename T,int Capacity>
// // void FixedArray< T,Capacity>::display(){
// //     for(int i=0;i<count;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
// // }
// // int main() {
// //     // Uses defaults: T = int, Capacity = 5
// //     FixedArray<> arrDefault;
// //     arrDefault.add(10);
// //     arrDefault.add(20);
// //     arrDefault.display();

// //     // Custom type and capacity: T = double, Capacity = 3
// //     FixedArray<double, 3> arrDouble;
// //     arrDouble.add(1.1);
// //     arrDouble.add(2.2);
// //     arrDouble.add(3.3);
// //     arrDouble.display();

// //     return 0;
// // }





// // Write a function runningSum that takes a vector<int> and returns a new vector<int> where every element is the cumulative sum of all numbers up to that index.

// // Example:

// // Input: {1, 2, 3, 4}

// // How it accumulates:

// // Index 0: 1

// // Index 1: 1 + 2 = 3

// // Index 2: 1 + 2 + 3 = 6

// // Index 3: 1 + 2 + 3 + 4 = 10

// // Output Vector: {1, 3, 6, 10}


// // #include<vector>
// // #include<iostream>
// // using namespace std;
// // template<class T>
// // void runningSum(vector<T>&a){
// //     T total=0;
// //     for (auto it = a.begin(); it != a.end(); ++it) {
// //         total += *it;   // Dereference to read current value
// //         *it = total;    // Dereference to write new running total back into that slot
// //     }
// // };
// // int main(){
// //   vector<int> v1 = {4, 5, 6, 7};

// //     runningSum(v1);

// //     // Print elements
// //     for (int i = 0; i < v1.size(); i++) {
// //         cout << v1[i] << " ";
// //     }
// //     cout << endl; // Output: 4 9 15 22

// //     return 0;
// // }






// // Create a vector<pair<string, int>> wordList.

// // Take 3 words: "apple", "banana", "kiwi".

// // For each word, push a pair of (word, word.length()) into the vector.

// // Using a loop (either range-based for (auto p : wordList) or index-based), print each word alongside its length like:



// // #include<vector>
// // #include<utility>
// // #include<iostream>
// // using namespace std;

// // int main(){
// //     vector<pair<string,int>>wordList;
    
// //     wordList.push_back({"apple",5});
// //     wordList.push_back({"banana",6});
// //     wordList.push_back({"kiwi",4});

// //     for(auto i:wordList){
// //         cout<<i.first<<" = "<<i.second<<" "<<endl;
// //     }
// //     string shrotestword=wordList[0].first;
// //     int minLength = wordList[0].second;

// //     // 2. Compare against the running minimum (minLength), not a fixed index
// //     for (auto i : wordList) {
// //         if (i.second < minLength) {
// //             minLength = i.second;
// //             shrotestword = i.first;
// //         }
// //     }
// //     cout<<"The shortest word is: "<<shrotestword<<endl;

// //     return 0;
// // }












// 1. Generic Maximum FinderWrite a template function myMax(T a, T b) that returns the larger of two values. Test with int, double, and char.

// #include<iostream>
// using namespace std;
// template<class T>
// T myMax(T a,T b){
//     return(a>b) ?a:b;
// }
// int main(){
//     cout<<myMax(4,6)<<endl;
//     cout<<myMax(7.6,8.9)<<endl;
//     return 0;
// }




// // 2. Generic Swap FunctionWrite a template function customSwap(T& a, T& b) that swaps two variables using references. Test it on string and int.3.

// #include<iostream>
// using namespace std;
// template<class T>
// T customSwap(T&a,T&b){
//     T temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int a=4;
//     int b=8;
//     //****BEFORE SWAP****/
//     cout<<"a ="<<a<<" b="<<b<<endl;
//     customSwap(a,b);
//     //****AFTER SWAP*** */
//     cout<<"a ="<<a<<" b="<<b<<endl;
   
//     // customSwap(1.2,5.5);
//     return 0;
// }









//  Vector Element CounterGiven a vector<int>, write a function to count how many times a given number x appears (without using std::count).

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number for which you want to check the count "<<endl;
//     cin>>x;
//     vector<int>v1{3,4,5,2,3,4,5,3,4,43,23,3,4,3,4};
//     int count=0;
//     auto it=v1.begin();
//     for(it;it<v1.end();it++){
//         if(x==*it){
//             count++;
//         }
//     }
//     cout<<"Total count for number :"<<x<<"="<<count<<endl;
//     return 0;
// }








//  4. Vector Reverse in PlaceWrite a function that takes a vector<int>& and reverses the elements in place using two pointers/indices.

// #include<iostream>
// #include<vector>
// using namespace std;
// void reverse(vector<int>&v){
//     int start=0;
//     int last=v.size()-1;
//     while(start<last){
//         int temp=v[start];
//         v[start]=v[last];
//         v[last]=temp;

//         start++;
//         last--;
//     }
// }
// int main(){
//     vector<int>v1{4,5,67,89,46,356,2,4};
//     reverse(v1);
//     for(int x:v1){
//         cout << x << " ";
//     }
//     cout<<" "<<endl;
//     return 0;
// }






//  5. Vector AccumulatorWrite a template function vectorSum(const vector<T>& v) that calculates and returns the sum of all elements.

// #include<iostream>
// #include<vector>
// using namespace std;
// template<class T>
// T sumcalac(const vector<T>&v){
//     auto it=v.begin();
//     T sum=0;
//     for(it;it!=v.end();it++){
//         sum+=*it;
//     }
//     return sum;
// }
// int main(){
//     vector<int>v1{3,5,6,7,8,9,435,45,34,23,56};
//     cout<<sumcalac(v1)<<endl;
//     vector<double>v2{3.4,5.6,4.5,6.7,4.5,1.2,3.4};
//     cout<<sumcalac(v2)<<endl;

//     return 0;
// }







//  6. Pair Coordinate DistanceCreate a pair<int, int> representing a 2D point $(x, y)$. 
//Write a function that calculates its Manhattan distance from the origin ($\vert{}x\vert{} + \vert{}y\vert{}$)
 

 
 
 
 
//  .Level 2: Intermediate Containers & Iterators (Medium)7. Word Length Tracker (vector<pair>)Given a vector<string>,
// populate a vector<pair<string, int>> storing each word alongside its character count, then print them formatted as word -> count

// #include<iostream>
// #include<vector>
// #include<utility>
// using namespace std;
// int main(){
//     vector<pair<string,int>>p1;
//     p1.push_back({"Word",4});
//     p1.push_back({"Hello",5});
//     auto it=p1.begin();
//     cout<<"[";
//     for(it;it!=p1.end();it++){
//         cout<<"Words: "<<it->first<<", Count: "<<it->second<<" ,";
//     }
//     cout<<" ]"<<endl;
//     return 0;
// }







//  .8. Threshold FilterGiven a vector<pair<string, double>> representing product names and prices, 
//write a function that extracts all products costing strictly less than a given threshold into a new vector.

// #include <iostream>
// #include <vector>
// #include <utility>
// #include <string>
// using namespace std;

// vector<pair<string, double>> filterByPrice(const vector<pair<string, double>>& items, double maxPrice) {
//     vector<pair<string, double>> result;
//     // 1. Loop through items
//     // 2. If item.second < maxPrice, add to result
//     // 3. return result;
//     for (const auto& item : items) {
//         // item.first  is the item name (string)
//         // item.second is the item price (double)
        
//         if (item.second < maxPrice) {
//             result.push_back(item); // Add the whole pair to result
//         }
//     }

//     return result;
// }


// int main() {
//     vector<pair<string, double>> items = {
//         {"Notebook", 45.0},
//         {"Backpack", 450.0},
//         {"Pen", 15.0},
//         {"Water Bottle", 120.0},
//         {"Eraser", 5.0}
//     };
//     vector<pair<string, double>> affordable = filterByPrice(items, 56.0);

//     // Print from 'affordable' (NOT 'items')
//     for (const auto& item : affordable) {
//         cout << item.first << " : $" << item.second << endl;
//     }

//     return 0;
// }










//  9. Target Search with IteratorsWrite a template function findFirst(vector<T>& v, T target)
// that uses standard iterators (auto it = v.begin()) to find the first occurrence of target and returns its index. Return -1 if not found.







// 10. Duplicate RemoverWrite a function that takes a sorted vector<int>& and removes all adjacent duplicate elements in-place using vector operations.










// 11. Key-Value LookupGiven a vector<pair<int, string>> (representing ID and Student Name), write a function getNameById(vector<pair<int, string>>& list, int id) that returns the student's name, or "Not Found".














// 12. Generic Array/Vector PrinterWrite a template function printContainer(const vector<T>& v) that prints elements formatted as [ elem1, elem2, elem3 ].
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
//  13. Min-Max Pair FinderWrite a template function getMinMax(const vector<T>& v) that returns a pair<T, T> containing {minValue, maxValue} in a single pass.













//  14. Vector Chunking / PartitioningGiven a vector<int>, partition it into two separate vectors: one containing all even numbers, and the other containing all odd numbers. Return them as a pair<vector<int>, vector<int>>














//  .Level 3: Algorithmic Logic & Generic Design (Hard)15. Top-K Scorer AggregatorGiven a vector<pair<string, int>> with duplicate names (representing test attempts), write a function that finds the highest score achieved by each unique student and returns a consolidated vector<pair<string, int>>.
//  16. Generic Matrix TransposeWrite a template function transpose(const vector<vector<T>>& matrix) that computes and returns the transpose of any 2D grid/matrix of type T.
 
 
 
 
 
 
 
 
 
 
 
//  17. Custom Generic Stack ClassImplement a template class SimpleStack<T> using an internal vector<T> with methods push(T val), pop(), top(), and isEmpty().
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
//  18. Pair Sorter by Second ValueGiven a vector<pair<string, int>>, write a sorting function (e.g., custom bubble sort using templates) that sorts the list in descending order of the second value (the integer).
 
 
 
 
 
 
 
 
 
 
 
 
 
//  19. Running Moving AverageWrite a template function that takes a vector<T> and a window size k, and returns a vector<double> containing the simple moving average for each window of size k.
 
 
 
 
//  20. Generic Frequency Compressor (Run-Length Encoding)Write a template function runLengthEncode(const vector<T>& v) that compresses consecutive identical elements into a vector<pair<T, int>> (e.g., { 'a', 'a', 'b', 'c', 'c', 'c' } $\rightarrow$ { {'a', 2}, {'b', 1}, {'c', 3} }).