// // Class and object
// // 1.	Create a Student class with name, age, and marks, then create one object and print all details.

// // #include<iostream>
// // using namespace std;

// // class Student {
// //     string name;
// //     int age;
// //     int marks;

// // public:
// //     void setname(string n){
// //         name=n;

// //     }

// //     void setAge(int a){
// //         age = a;
// //     }
// //     void setMarks(int b){
// //         marks = b;
// //     }
// //     void showdetails(){
// //         cout<<"Name of student: "<<name<<endl;
// //         cout<<"Marks of students : "<<marks<<endl;
// //         cout<<"Age of Student: "<<age<<endl;
// //     }

// // };

// // int main(){
// //     Student s1;
// //     s1.setname("Pratik");
// //     s1.setAge(18);
// //     s1.setMarks(67);
// //     s1.showdetails();
// //     return 0;
// // }

// // 2.	Create a Book class with title, author, and price, then display the book

// // #include<iostream>
// // using namespace std;

// // class Book{
// //     string author;
// //     string title;
// //     float price;

// // public:
// //     void setauthor(string a){
// //         author=a;
// //     }
// //     void settitle(string b){
// //         title=b;
// //     }
// //     void setprice(float c){
// //         price=c;
// //     }

// //     void show(){
// //         cout<<"The title of Book is: "<<title<<endl;
// //         cout<<"The author of book is: "<<author<<endl;
// //         cout<<"The price of book is: "<<price<<endl;
// //     }

// // };
// // int main(){
// //     string x;
// //     string y;
// //     float z;
// //     cout<<"Enter the title of book respectively: "<<endl;

// //     cout<<"Enter the author of book respectively: "<<endl;
// //     cout<<"Enter the price of book: "<<endl;

// //     cin>>x;
// //     cin>>y;

// //     cin>>z;

// //     Book b1;
// //     b1.settitle(x);
// //     b1.setauthor(y);
// //     b1.setprice(z);
// //     b1.show();

// //     return 0;
// // }

// // 1.	Create a Car class with brand, model, and year, then make 2 objects and print both.
// // #include <iostream>
// // using namespace std;
// // class Car
// // {
// //     string brand;
// //     string model;
// //     string engineCC;
// //     string mileage;
// //     int price;

// // public:
// //     void setbrand(string a)
// //     {
// //         brand = a;
// //     }
// //     void setmodel(string b)
// //     {
// //         model = b;
// //     }
// //     void setengineCC(string c)
// //     {
// //         engineCC = c;
// //     }
// //     void setmileage(string d)
// //     {
// //         mileage = d;
// //     }
// //     void setprice(int e)
// //     {
// //         price = e;
// //     }

// //     void show()
// //     {

// //         cout << "The Brand of car is: " << brand << " ,The model of vehichle is: " << model << " ,the engine is of: " << engineCC << " with a mmileage of: "
// //              << mileage << " at a price of rs:" << price << endl;
// //     }
// // };

// // int main()
// // {
// //     string a, b, c, d;
// //     int e;
// //     cout << "Enter the 4 values : " << endl;
// //     cin >> a >>
// //         b >>
// //         c >>
// //         d;
// //     cout << "Enter the value of price" << endl;
// //     cin >> e;

// //     Car c1;
// //     c1.setbrand(a);
// //     c1.setmodel(b);
// //     c1.setengineCC(c);
// //     c1.setmileage(d);
// //     c1.setprice(e);
// //     c1.show();
// //     return 0;
// // }

// // 4.	Create a BankAccount class with a private balance and a public method to set and show it.
// // #include<iostream>
// // using namespace std;
// // class BankAccount{
// //     int balance =0;

// // public:
// //     void addBalance(int a){
// //         balance+=a;

// //     }
// //     void withdrawbalance(int b){
// //         balance-=b;
// //     }
// //     void show(){
// //         cout<<"The balance is: "<<balance;
// //     }

// // };

// // int main(){
// //     int x;
// //     int y;
// //     cout<<"Enter the value of balance to be added: "<<endl;
// //     cin>>x;
// //     cout<<"Enter the value of balance to be withdrawn: "<<endl;
// //     cin>>y;
// //     BankAccount b1;
// //     b1.addBalance(x);
// //     b1.withdrawbalance(y);
// //     b1.show();

// //     return 0;
// // }

// // 4.	Create a Person class with a private age and a public method to update it.
// // #include <iostream>
// // using namespace std;

// // class Person{
// //     int age=0;
// //     int new_age=0;
// // public:
// //     void setage(int a){
// //         age=a;
// //         new_age=a;
// //     }
// //     void updateage(int b){
// //         age =age;
// //         new_age=b;
// //     }
// //     void show(){
// //         cout<<"The age before updation is: "<<age<<endl;
// //         cout<<"The age after updation is: "<<new_age<<endl;
// //     }
// // };
// // int main(){
// //     int x,y;
// //     cout<<"Enter the exsisting and updated age valus: "<<endl;
// //     cin>>x>>y;
// //     Person p1;
// //     p1.setage(x);
// //     p1.updateage(y);
// //     p1.show();
// //     return 0;
// // }

// // 5.	Create a Product class where name is public and price is private, then access only the public data directly.
// // #include <iostream>
// // using namespace std;
// // class Product
// // {
// //     float price;

// // public:
// //     string name;
// //     void setprice(int x)
// //     {
// //         price = x;
// //     }
// //     void show()
// //     {
// //         cout << price << endl;
// //     }
// // };
// // int main()
// // {
// //     Product p;
// //     p.name = "pratik";
// //     p.setprice(7000);
// //     cout << p.name << endl;
// //     p.show();
// //     return 0;
// // }
// // 7.	Create a class with two member functions where one function calls the other.
// // #include<iostream>
// // using namespace std;
// // class Animal{
// //     string name="Pratik";
// //     int age=24;
// // public:
// //     void update(string a,int b){
// //         name=a;
// //         age=b;
// //     }
// //     void after10years(){
// //         age+=10;

// //     }
// //     void show(){
// //         cout<<age<<endl;
// //         cout<<name<<endl;
// //     }
// //     void displayafter10years(){
// //         after10years();
// //         show();
// //     }
// // };

// // int main(){
// //     string x;
// //     int y;
// //     Animal a;
// //     a.update("Charu", 67);
// //     a.displayafter10years();

// //     return 0;
// // }

// // 8.	Create a Calculator class where add() calls another function show() to display the result.
// // #include<iostream>
// // using namespace std;
// // class Calculator{
// //     int a,b,sum;
// // public:
// //     void input(){
// //         cout<<"Enter the two numbers: "<<endl;
// //         cin>>a>>b;
// //     }
// //     void show(){
// //         cout<<" SUM IS: "<<sum<<endl;
// //     }
// //     void add(){
// //         sum=a+b;
// //         show();
// //     }
// // };
// // int main(){
// //     Calculator c1;
// //     c1.input();
// //     c1.add();
// //     return 0;
// // }

// // 9.	Create a Rectangle class where area() calls input() to take values and then prints the area.

// // #include<iostream>
// // using namespace std;
// // class Rectangle{
// //     int a,b;
// // public:
// //     void input(){
// //         cout<<"Enter the values of sides: "<<endl;
// //         cin>>a>>b;
// //     }
// //     void area(){
// //         input();
// //         cout<<"Area of rectangle is: "<<a*b<<endl;
// //     }
// // };

// // int main(){
// //     Rectangle r1;
// //     r1.area();
// //     return 0;
// // }

// // 11.	Create 3 objects of a Student class and assign different marks to each.
// // #include<iostream>
// // using namespace std;
// // class Student{
// // public:
// //     string name;
// //     int marks;
// //     void display(){
// //         cout<<"Name: "<<name<<endl<<"Marks: "<<marks<<endl;
// //     }
// // };

// // int main(){
// //     Student s1,s2;
// //     s1.name="Pratik";
// //     s1.marks=90;
// //     s2.name="Diksha";
// //     s2.marks=93;
// //     s1.display();
// //     s2.display();
// //     return 0;
// // }

// // 12.	Create a class with one data member and print the values of 2 different objects to show separate memory.
// // #include<iostream>
// // using namespace std;
// // class Details{
// // public:
// //     string name;
// //     int age;
// //     void display(){
// //         cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
// //     }

// // };
// // int main(){
// //     Details d1;
// //     Details d2;
// //     d1.name="Pratik";
// //     d1.age=21;
// //     d2.name="Anunhav";
// //     d2.age=34;
// //     d1.display();
// //     d2.display();

// // }

// // Arrays in classes
// // 13.	Create a class that stores 5 marks in an array and prints them.

// // #include<iostream>
// // using namespace std;
// // class Marks{
// //     int marks[5];
// // public:
// //     void input(){
// //         cout<<"Enter the marks: "<<endl;
// //         for(int i=0;i<5;i++){
// //             cin>>marks[i];
// //         }
// //     }
// //     void display(){
// //         for(int i=0;i<5;i++){
// //             cout<<"MARKS ARE: "<<marks[i]<<endl;
// //         }
// //     }
// // };
// // int main(){
// //     Marks m1;
// //     m1.input();
// //     m1.display();
// //     return 0;
// // }

// // 14.	Create a class that stores 3 student names in an array and displays them.

// // #include <iostream>
// // using namespace std;
// // class Details
// // {
// // public:
// //     string name[3];
// //     void input()
// //     {
// //         cout << "Enter the names: " << endl;
// //         for (int i = 0; i < 3; i++)
// //         {
// //             cin >> name[i];
// //         }
// //     }
// //     void display()
// //     {
// //         for (int i = 0; i < 3; i++)
// //         {
// //             cout <<"Names are: "<< name[i] << endl;
// //         }
// //     }
// // };
// // int main()
// // {
// //     Details d1;
// //     d1.input();
// //     d1.display();

// //     return 0;
// // }

// // 15.	Create a class that uses an array to store 4 prices and calculates the total.

// // #include<iostream>
// // using namespace std;
// // class Prices{
// // int price[4];
// // public:
// //     void input(){
// //         cout<<"Enter the prices: "<<endl;
// //         for(int i=0;i<4;i++){
// //             cin>>price[i];
// //         }
// //     }
// //     void display(){
// //         for(int i=0;i<4;i++){
// //             cout<<"Prices are: "<<price[i]<<endl;
// //         }
// //     }
// //     void sum(){
// //         int sum=0;
// //         for(int i=0;i<4;i++){
// //             sum+=price[i];
// //         }
// //         cout<<"Total Sum is: "<<sum<<endl;
// //     }

// // };

// // int main(){
// //     Prices p1;
// //     p1.input();
// //     p1.display();
// //     p1.sum();
// //     return 0;
// // }

// // 16.	Create a class with a static data member to count how many objects are created.

// // #include<iostream>
// // using namespace std;
// // class Student{
// //     static int count;
// // public:
// //     Student(){
// //         count ++;
// //     }
// //     void displaycount(){
// //         cout<<"Total count is: "<<count<<endl;
// //     }

// // };
// // int Student::count=0;
// // int main(){
// //     Student s1;
// //     Student s2;
// //     Student s3;
// //     s3.displaycount();
// //     return 0;
// // }
// // 17.	Create a class with a static function that prints a message without creating an object.
// // #include <iostream>
// // using namespace std;

// // class Message{
// // public:
// //     static void Printmessage(){
// //         cout<<"Hello Guys"<<endl;
// //     }
// // };
// // int main(){
// //     Message::Printmessage();
// //     return 0;

// // }

// // 19.	Create a Zoo class with a list of animals, add 3 animals, and print them.
// // #include<iostream>
// // using namespace std;
// // class Name{
// //     string name[3];
// // public:    
// //     void addname(){
// //         cout<<"Enter the names: "<<endl;
// //         for(int i=0;i<3;i++){
// //             cin>>name[i];
// //         }
    
// //     }
// //     void display(){
// //         for(int i=0;i<3;i++){
// //             cout<<"Names in list: "<<name[i]<<endl;

// //         }
// //     }

// // };
// // int main(){
// //     Name n1;
// //     n1.addname();
// //     n1.display();
// //     return 0;
// // }

// // 20.	Create a class with public and private members, then write methods to safely access the private data.

// // #include<iostream>
// // using namespace std;
// // class Company{
// //     string name="Samsung";
// //     int foundation_year=1967;
// // public:
// //     void show(){
// //         cout<<"Company Name: "<<name<<endl;
// //         cout<<"Foundation Year: "<<foundation_year<<endl;
// //     }
// // };
// // int main(){
// //     Company c1;
// //     c1.show();
// //     return 0;
// // }
// // 21.	Create a Mobile class with brand, price, and storage, then print details using a method.
// // #include<iostream>
// // using namespace std;
// // class Mobile{
// //     string brand;
// //     int price;
// //     string storage;
// // public:
// //     void setdeatils(){
// //         string a,c;
// //         int b;
// //         cout<<"Enter the data of brand name and storage"<<endl;
// //         cout<<"enter the value of price: "<<endl;
// //         cin>>a>>c;
// //         cin>>b;
// //         brand=a;
// //         price=b;
// //         storage=c;

// //     }    
// //     void show(){
// //         cout<<"The following are the details of Phone:"<<endl
// //         <<"Brand: "<<brand<<endl
// //         <<"Price: "<<price<<endl
// //         <<"Storage: "<<storage<<endl;
// //     }
// // };
// // int main(){
// //     Mobile m1;
// //     m1.setdeatils();
// //     m1.show();
// //     return 0;
// // }


// 22.	Create a Teacher class with name and subject, then create 2 objects and display them.
// #include<iostream>
// using namespace std;
// class Teacher{
//     string name;
//     string subject;
// public:
//     void input(){
//         cout<<"Enter the Teacher's name : "<<endl;
//         getline(cin,name);
//         cout<<"Enter the teacher's subject: "<<endl;
//         getline(cin,subject);
//     }    
//     void show(){
//         cout<<"The Teacher's name is: "<<name<<" ,The teacher teaches: "<<subject<<endl;
//     }

// };
// int main(){
//     Teacher t1;
//     Teacher t2;
//     t1.input();
//     t1.show();
//     t2.input();
//     t2.show();
//     return 0;
// }


// 24.	Create a class that counts the number of times an object is created using a static variable.

// #include<iostream>
// using namespace std;
// class Student{
//     static int count;
// public:
//     Student(){
//         count++;
//     }
//     void show(){
//         cout<<"TOTAL COUNT: "<<count<<endl;
//     }
// };
// int Student::count=0;
// int main(){
//     Student s1;
//     Student s2;
//     s2.show();
//     return 0;
// }

