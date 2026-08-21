// 13.	Create a class that stores 5 marks in an array and prints them.

// #include <iostream>
// using namespace std;

// class Marks
// {
// public:
//     int marks[5];
//     void inputMarks()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << "Enter the marks: " << endl;
//             cin >> marks[i];
//         }
//     }
//     void printMarks()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << "The Marks are: " << marks[i] << endl;
//         }
//     }
// };

// int main()
// {
//     Marks m1;
//     m1.inputMarks();
//     m1.printMarks();
//     return 0;
// }

// 14.	Create a class that stores 3 student names in an array and displays them

// #include<iostream>
// using namespace std;

// class Student{
//     string name[3];
// public:
//     void addInput(){
//         for(int i=0;i<3;i++){
//             cout<<"Enter the Student's Name: "<<endl;
//             cin>>name[i];
//         }
//     }
//     void display(){
//         for(int i=0;i<3;i++){
//             cout<<"The Marks Are as follows: "<<name[i]<<endl;
//         }
//     }
// };
// int main(){
//     Student s1;
//     s1.addInput();
//     s1.display();
//     return 0;
// }

// 15.	Create a class that uses an array to store 4 prices and calculates the total

// #include <iostream>
// using namespace std;
// class Price
// {
//     int prices[4];
// public:    
//     void addPrice()
//     {
//         for (int i = 0; i < 4; i++)
//         {
//             cout << "Enter the prices of items: " << endl;
//             cin >> prices[i];
//         }
//     }
//     void displayprices()
//     {
//         for (int i = 0; i < 4; i++)
//         {
//             cout << "The prices are : " << prices[i] << endl;
//         }
//     }
// };
// int main()
// {
//     Price p1;
//     p1.addPrice();
//     p1.displayprices();
//     return 0;
// }

// 16.	Create a class with a static data member to count how many objects are created.

// #include<iostream>
// using namespace std;
// class Student{
//     static int count;
// public:
//     Student(){
//         count++;
//     }    

//     void show(){
//         cout<<"Total Count: "<<count<<endl;
//     }
// };
// int Student::count=0;
// int main(){
//     Student s1;
//     Student s2;
//     Student s3;
//     Student s4;
//     Student s5;
//     s5.show();
//     return 0;
// }

// 17.	Create a class with a static function that prints a message without creating an object.

// #include<iostream>
// using namespace std;

// class Greet{
// public:
//     static void greet(){
//         cout<<"Good Morning Everyone"<<endl;
//     }    
// };

// int main(){
//     Greet::greet();
//     return 0;
// }

// 18.	Create a class where a static data member is shared by all objects and display it.

// #include<iostream>
// using namespace std;

// class Company{
//     static string CompanyName;
//     int salary;
//     string name;

// public:
//     void input(){
//         cout<<"Enter Employee's name and Salary: "<<endl;
//         cin>>name>>salary;
//     }
    
//     void show(){
//         cout<<"company name: "<<CompanyName<<" Employee's name: "<<name<<" employe' salary: "<<salary<<endl;
//     }

// };
// string Company::CompanyName="Google";
// int main(){
//     Company c1;
//     c1.input();
//     c1.show();
//     return 0;
// }


// 19.	Create a Zoo class with a list of animals, add 3 animals, and print them.

// #include<iostream>
// using namespace std;


//     class ZOO{

// string Animals[3];
// public:
//         void input(){
//             for(int i=0;i<3;i++){
//                 cout<<"Enter animal's name: "<<endl;
//                 cin>>Animals[i];
//             }

//         }
//         void show(){
//             for(int i=0;i<3;i++){
//                 cout<<"Animals names are: "<< Animals[i];
//             }
//         }

// };
// int main(){
//     ZOO z1;
//     z1.input();
//     z1.show();
//     return 0;
// }

// 20.	Create a class with public and private members, then write methods to safely access the private data.

// #include<iostream>
// using namespace std;
// class School{
//     string Schoolname;
//     string student;
//     int grade;
// public:
//     void input(){
//         cout<<"Enter School name,student name,grade: "<<endl;
//         cin>>Schoolname>>student>>grade;
//     }    
//     void show(){
//         cout<<"School name: "<<Schoolname<<endl
//         <<"Student name: "<<student<<endl<<"Grade: "<<grade;
//     }
// };
// int main(){
//     School s1;
//     s1.input();
//     s1.show();
//     return 0;
// }

