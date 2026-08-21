// 3. Distance Comparison
// Create a class Distance with private members int meters and int centimeters.

// Declare a friend Distance greaterDistance(Distance d1, Distance d2); that returns the object with the larger distance.

// In main, create two Distance objects, input values, call the friend function, and display the greater distance.

// #include<iostream>
// using namespace std;
// class Distance{
//     int meters;
//     int centimeters;
// public:
//     void input(){
//         cout<<"Enters Meters: "<<endl;
//         cin>>meters;
//         cout<<"Enter Centimeters: "<<endl;
//         cin>>centimeters;
//         if(centimeters>=100){
//             meters+=centimeters/100;
//             centimeters=centimeters%100;
//         }
//     }
        
//     void show(){
//         cout<<"Meters: "<<meters<<"Centimeters: "<<centimeters<<endl;
//     }
//     friend Distance greaterDistance(Distance d1,Distance d2);

// };
// Distance greaterDistance(Distance d1,Distance d2){
//     int total1=d1.meters*100+d1.centimeters;
//     int total2=d2.meters*100+d2.centimeters;
//     if (total1 >= total2) {
//         return d1;
//     } else {
//         return d2;
//     }

// }
// int main(){
//     Distance d1,d2,greater;
//     cout << "Enter first distance:\n";
//     d1.input();

//     cout << "\nEnter second distance:\n";
//     d2.input();

//     greater = greaterDistance(d1, d2);

//     cout << "\nFirst distance: ";
//     d1.show();

//     cout << "Second distance: ";
//     d2.show();

//     cout << "Greater distance: ";
//     greater.show();

//     return 0;
// }




// 4. Time Addition
// Create a class Time with private members int hours and int minutes.

// Declare a friend Time addTime(Time t1, Time t2); which adds two times and adjusts minutes if they exceed 59.

// In main, input two times from the user, add them using the friend function, and display the result in hh:mm format.

// #include<iostream>
// using namespace std;
// class Time{
//     int hours;
//     int minutes;
// public:
//     void input(){
//         cout<<"Set Hours: "<<endl;
//         cin>>hours;
//         cout<<"Enter Minutes: "<<endl;
//         cin>>minutes;

//         if(minutes>59){
//             hours+=minutes/60;
//             minutes=minutes%60;
//         }
//     }    
//     void show(){
//         cout<<"Time: "<<hours<<" Hour "<<minutes<<" minutes "<<endl;

//     }
//     friend Time addTime(Time t1,Time t2);
// };
// Time addTime(Time t1,Time t2){
//     Time result;
//     result.hours = t1.hours + t2.hours;
//     result.minutes = t1.minutes + t2.minutes;

//     if (result.minutes > 59) {
//         result.hours += result.minutes / 60;
//         result.minutes = result.minutes % 60;
//     }

//     return result;
// }
// int main(){
//     Time t1;
//     Time t2;
//     Time time;
//     cout<<"Enter first time: "<<endl;

//     t1.input();
//     cout<<"Enter second time: "<<endl;
//     t2.input();
//     t1.show();
//     t2.show();

//     time=addTime(t1,t2);

//     cout<<"Added time: "<<endl;
//     time.show();

// }

// 5. Swap Private Data of Two Classes
// Create two classes Box1 and Box2 with private int value1 and int value2.

// Declare a friend void swapValues(Box1 &, Box2 &); that swaps the private values of both objects.

// In main, set initial values, display them, call swapValues, and display again to show the swap.


// #include<iostream>
// using namespace std;
// class Box2;
// class Box1{
//     int value1;
// public:
//     void input(int a){
//         value1=a;
//     }
//     void display(){
//         cout<<"Value1: "<<value1<<endl;
//     }
//     friend void swapValues(Box1&,Box2&);
// };
// class Box2{
//     int value2;
// public:
//     void input(int b){
//         value2=b;
//     }
//     void display(){
//         cout<<"Value 2: "<<value2<<endl;
//     }
//     friend void swapValues(Box1&,Box2&);
// };
// void swapValues(Box1& b1,Box2& b2){
//     int temp=b1.value1;
//     b1.value1=b2.value2;
//     b2.value2=temp;
// }
// int main() {
//     Box1 obj1;
//     Box2 obj2;

//     obj1.input(10);
//     obj2.input(20);

//     cout << "Before swap:\n";
//     obj1.display();
//     obj2.display();

//     swapValues(obj1, obj2);

//     cout << "\nAfter swap:\n";
//     obj1.display();
//     obj2.display();

//     return 0;
// }



// 6. Bank Balance Comparison
// Create a class BankAccount with private data string name and double balance.

// Declare a friend void compareBalance(BankAccount a, BankAccount b); that prints which account has higher balance (or if equal).

// In main, create two accounts, initialize them, and call the friend function.

// #include<iostream>
// #include<string>
// using namespace std;
// class BankAccount{
//     string name;
//     double balance;
// public:
//     void setData(){
//         cout<<"Enter the Account Holder's name: "<<endl;
//         cin>>name;
//         cout<<"Enter the Bank Balance of Account Holder: "<<endl;
//         cin>>balance;
//     }    
//     void show(){
//         cout<<"Balance in account is: "<<balance<<endl;
//     }

//     friend void CompareBalance(BankAccount b1 ,BankAccount b2 );
// };
// void CompareBalance(BankAccount b1,BankAccount b2){
//     if(b1.balance>b2.balance){
//         cout<<"Balance 1 is greater :"<<b1.balance<<endl;
//     }
//     else if(b1.balance==b2.balance){
//         cout<<"Both have Equal Balance: "<<b1.balance<<" = "<<b2.balance<<endl;
//     }
//     else{
//         cout<<"Balance 2 is greater: "<<b2.balance<<endl;
//     }
// }
// int main(){
//     BankAccount x;
//     BankAccount y;
//     x.setData();
//     y.setData();
//     x.show();
//     y.show();
//     CompareBalance(x,y);
//     return 0;
// }

// 7. Rectangle Area and Friend Function
// // Create a class Rectangle with private members int length and int breadth.

// // Declare a friend int area(Rectangle r); that calculates and returns the area.

// // In main, create an array of 3 Rectangle objects, input their dimensions, and for each, use the friend function to print its area.


// #include<iostream>
// using namespace std;
// class Rectangle{
//     int length,breadth;
// public:
//     void input(){
//         cout<<"Enter length value: "<<endl;
//         cin>>length;
//         cout<<"Enter Breadth Value: "<<endl;
//         cin>>breadth;
//     }    
//     friend int area(Rectangle r);
// };
// int area(Rectangle r){
//     return r.length*r.breadth;
// }
// int main(){
//     Rectangle r[3];
//     for(int i=0;i<3;i++){
//         cout<<"Entering values for "<<i+1<<" Rectangle"<<endl;
//         r[i].input();
//     }
//    for (int i = 0; i < 3; i++) {
//         cout << "Area of Rectangle " << i + 1 << " is: " << area(r[i]) << endl;
//     }
//     return 0;
// }



// 8. Student Marks Aggregation (Array + Friend)
// Create a class Student with private string name and int marks.

// Declare a friend double classAverage(Student s[], int n); that calculates and returns the average marks of all students in the array.

// In main, create an array of 5 students, input their data, and print the average marks using the friend function.

// #include<iostream>
// using namespace std;
// class Student{
//     string name;
//     int marks;
// public:
//     void input(){
//         cout<<"Enter the name of Student: "<<endl;
//         cin>>name;
//         cout<<"Enter the Student of Marks"<<endl;
//         cin>>marks;

//     }
//     void show(){
//         cout<<"Name: "<<name<<endl<<"Marks: "<<marks<<endl;
//     }
//     friend double classAverage(Student s[],int n);
// };
// double classAverage(Student s[],int n){
//     int sum=0;
//     for(int n=0;n<5;n++){
//         sum+=s[n].marks;
//     }
//     return (double)sum/n;
// }
// int main(){
//     Student s[5];
//     for(int i=0;i<5;i++){
//         cout<<"Enter the Marks of  Student no "<<i+1<<endl;
//         s[i].input();
//     }
//     for(int i=0;i<5;i++){
//         cout<<"Data for student no: "<<i+1<<endl;
//         s[i].show();
//     }
//     cout<<"Average Marks: "<<classAverage(s,5)<<endl;

//     return 0;
// }


// 9. Coordinate Translation Using a Friend
// Create a class Point with private members int x and int y.

// Declare a friend void translate(Point &p, int dx, int dy); that changes the point’s coordinates by adding dx and dy.

// In main, create a Point, initialize it, call translate with some values, and print the updated coordinates.

// #include<iostream>
// using namespace std;
// class Point{
//     int x,y;
// public:
//     void setCoordinates(){
//         cout<<"Enter the value of x and y coordinates: "<<endl;
//         cin>>x;
//         cin>>y;
//     }    
//     void show(){
//         cout<<"CO-ORDINATES: "<<x<<" X, "<<y<<" Y "<<endl;
//     }
//     friend void translate(Point &p,int dx,int dy);
// };
// void translate(Point &p,int dx,int dy){
//     p.x+=dx;
//     p.y+=dy;
// }
// int main(){
//     Point p1;
//     p1.setCoordinates();
//     p1.show();
//     translate(p1,5,7);
//     p1.show();
// }


// 10. Salary Update with Friend Function
// Create a class Employee with private string name and double salary.

// Declare a friend void giveRaise(Employee &e, double percent); which increases salary by the given percentage.

// In main, create an Employee, input details, call giveRaise with some percentage, and display the updated salary.


// #include<iostream>
// using namespace std;
// class Employee{
//     string name;
//     double salary;
// public:
//     void input(){
//         cout<<"Enter the name of the Employee: "<<endl;
//         getline(cin,name);
//         cout<<"Enter the Salary Of Employee: "<<endl;
//         cin>>salary;
//     }
//     void show(){
//         cout<<"Employee Name: "<<name<<"Employee Salary: "<<salary<<endl;
//     }
//     friend void giveRaise(Employee &e,double percent);
// };
// void giveRaise(Employee &e,double percent){
//     e.salary+=(e.salary/100)*percent;
// }
// int main(){
//     Employee e;
//     e.input();
//     e.show();
//     giveRaise(e,40);
//     e.show();
// }


