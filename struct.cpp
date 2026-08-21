// •  Write a C++ program to create a structure for Book with title, author, and price, then display the book information
// #include<iostream>
// using namespace std;
// struct Books{
//     string tittle;
//     string author;
//     float price;

// };


// int main(){
//    Books p1={"To make the deaf hear","S Irfan Habib",799};
//    Books p2={"GODAN","PREMCHAND",250};
//    cout<<p1.tittle<<endl;
//    cout<<p1.author<<endl;
//    cout<<p1.price<<endl;

//    cout<<p2.tittle<<endl;
//    cout<<p2.author<<endl;
//    cout<<p2.price<<endl;


//     return 0;
// }

// Write a C++ program to create an enum for days of the week and print all the enum values.

// #include<iostream>
// using namespace std;

// enum Day {
//     Sunday,
//     Monday,
//     Tuesday,
//     Wednesday,
//     Thursday,
//     Friday,
//     Saturday
// };

// int main() {
//     cout << "Sunday = " << Sunday << endl;
//     cout << "Monday = " << Monday << endl;
//     cout << "Tuesday = " << Tuesday << endl;
//     cout << "Wednesday = " << Wednesday << endl;
//     cout << "Thursday = " << Thursday << endl;
//     cout << "Friday = " << Friday << endl;
//     cout << "Saturday = " << Saturday << endl;

//     return 0;
// }


// 

// #include<iostream>
// using namespace std;

// enum Month {
//     January = 1,
//     February,
//     March,
//     April,
//     May,
//     June,
//     July,
//     August,
//     September,
//     October,
//     November,
//     December
// };

// int main() {
//     int choice;

//     cout << "Enter month number (1-12): ";
//     cin >> choice;

//     switch(choice) {
//         case 1: cout << "January"; break;
//         case 2: cout << "February"; break;
//         case 3: cout << "March"; break;
//         case 4: cout << "April"; break;
//         case 5: cout << "May"; break;
//         case 6: cout << "June"; break;
//         case 7: cout << "July"; break;
//         case 8: cout << "August"; break;
//         case 9: cout << "September"; break;
//         case 10: cout << "October"; break;
//         case 11: cout << "November"; break;
//         case 12: cout << "December"; break;
//         default: cout << "Invalid month number";
//     }

//     cout << endl;
//     return 0;
// }



//########################## O O P S ## #############################################


//•  Write a C++ program to define a function that adds two integers and returns the result.
// #include<iostream>
// using namespace std;
// int add(int a, int b){
//     return a+b;

// }
// int main(){
//     cout<<add(3543,466)<<endl;
//     return 0;
// }



// •  Write a C++ program that combines structure and function: create a Student structure and pass it to a function to display details.

// #include<iostream>
// using namespace std;
// struct Student{
//     string name;
//     string school;
//     int age;
//     float marks;
 
// };

// int main(){
//     Student s1={"Pratik","TMS",19,90};
//     Student s2={"Anubhav","TMS",18,87};
    
//     cout<<s1.name<<endl;
//     cout<<s2.name<<endl;
//     cout<<s1.school<<endl;
//     cout<<s2.school<<endl;
//     cout<<s1.age<<endl;
//     cout<<s2.age<<endl;
//     cout<<s1.marks<<endl;
//     cout<<s2.marks<<endl;


  
//     cin>>s1.name;
//     cin>>s2.name;
//     cin>>s1.school;
//     cin>>s2.school;
//     cin>>s1.age;
//     cin>>s2.age;
//     cin>>s1.marks;
//     cin>>s1.marks;

//     return 0;

// }


// Function overloading
// 13.	Write a C++ program to demonstrate function overloading by adding two integers and adding two floats.

// #include <iostream>
// using namespace std;

// int add(int a, int b) {
//     return a + b;
// }

// float add(float a, float b) {
//     return a + b;
// }

// int main() {
//     int x, y;
//     float p, q;

//     cout << "Enter two integers: ";
//     cin >> x >> y;

//     cout << "Enter two floats: ";
//     cin >> p >> q;

//     cout << "Sum of integers: " << add(x, y) << endl;
//     cout << "Sum of floats: " << add(p, q) << endl;

//     return 0;
// }


// 14.	Write a C++ program to demonstrate function overloading by calculating the area of a square and a rectangle.

// #include<iostream>
// using namespace std;

// int area(int x){

//     return x*x;
// }


// int area(int x,int y){
//     return x*y;
// }
// int main(){
//     int a,b,c;
//     cout<<"Enter the two values for rectangle ; "<<endl;
//     cin>>a>>b;
//     cout<<"Enter the value for square side: "<<endl;
//     cin>>c;

//     cout<<"The Area of Rectangle is: "<<area(a,b)<<endl;
//     cout<<"The area of Square is: "<<area(c)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// double area(int radius){

//     return 3.14* (radius*radius);
// }

// int area(int length,int breadth){

//     return length*breadth;
// }

// int main(){
//     int x,y,z;
//     cout<<"Enter the value of radius for circle: "<<endl;
//     cin>>x;
    
//     cout<<"Enter the value of Length and Breadth: "<<endl;
//     cin>>y>>z;

//     cout<<"The Area of Circle is: "<<area(x)<<endl;
//     cout<<"The area of rectangle is: "<<area(y,z)<<endl;
//     return 0;

// }

// #include<iostream>
// using namespace std;

// void swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
//     cout<<a << b<<endl;
    
// }
// int main(){
//     int x,y;
//     cout<<"Enter X and Y:"<<endl;
//     cin>>x>>y;
    
//     cout<<"The value before swap is: "<<x << y<<endl;
//     swap(x,y);
//     cout<<"The Value after swap is: "<<x << y<<endl;

//     return 0;

// }




