// #include<iostream>
// using namespace std;

// inline int sum(int a,int b){
//     return (a+b);
// }
// int main(){
//     cout<<sum(5,7)<<endl;
//     cout<<sum(34,76)<<endl;

//     return 0;
// }


// •  Write a C++ program to create a Student structure with name,
//  roll number, and marks, then take input for one student and display the details.
// #include<iostream>
// using namespace std;
// struct Student{
//     string Name;
//     string grade;
//     float marks;
// };

// int main(){
//     Student S1={"Pratik","12th",90.8};
//     Student S2={"Rohan","11th",89.7};

//     cout<<S1.Name<<endl;
//     cout<<S1.grade<<endl;
//     cout<<S1.marks<<endl;
//     cout<<S2.Name<<endl;
//     cout<<S2.grade<<endl;
//     cout<<S2.marks<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// struct Students{
//     string name;
//     int roll_no;
//     float marks;

// };
// int main(){
//     Students S1;
//     Students S2;
//     Students S3;

//     cout<<"ENTER THE NAME OF STUDENT:"<<endl;
//     cin>>S1.name;

//     cout<<"ENTER THE ROLL NO OF STUDENT:"<<endl;
//     cin>>S1.roll_no;

//     cout<<"ENTER THE MARKS OF STUDENT:"<<endl;
//     cin>>S1.marks;

//     cout<<"ENTER THE NAME OF STUDENT:"<<endl;
//     cin>>S2.name;

//     cout<<"ENTER THE ROLL NO OF STUDENT:"<<endl;
//     cin>>S2.roll_no;

//     cout<<"ENTER THE MARKS OF STUDENT:"<<endl;
//     cin>>S2.marks;


//     cout<<"THE FOLLOWING ARE THE DETAILS OF THE STUDENTS WHICH ARE GIVEN BELOW:"<<endl;

//     cout<<"NAME: "<<S1.name <<endl;
//     cout<<"ROLL NO :"<<S1.roll_no<<endl;
//     cout<<"MARKS:"<<S1.marks<<endl;

//      cout<<"NAME: "<<S2.name <<endl;
//     cout<<"ROLL NO :"<<S2.roll_no<<endl;
//     cout<<"MARKS:"<<S2.marks<<endl;

//      cout<<"NAME: "<<S3.name <<endl;
//     cout<<"ROLL NO :"<<S3.roll_no<<endl;
//     cout<<"MARKS:"<<S3.marks<<endl;


//     return 0;
// }


// •  Write a C++ program using an array of structures to store and print details of 5 students.
// #include<iostream>
// using namespace std;

// struct Students{
//     string name;
//     int roll;
//     float marks;
// };
// int main(){
//     Students S1={"PRATIK",36,89};
//     Students S2={"VIKASH",45,97};

//     cout<<"THE DETAILS OF STUDENTS ARE AS FOLLOWS:"<<endl;
//     cout<<S1.name<<endl;
//     cout<<S1.roll<<endl;
//     cout<<S1.marks<<endl;
//     cout<<S2.name<<endl;
//     cout<<S2.roll<<endl;



//     return 0;
// }


// 	Write a program to keep taking numbers from the user until the user enters 0.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;   
//     while(true){
//         cout<<"Enter the Value of n: "<<endl;
//         cin>>n;
//         if(n==0){
//         cout<<"YOU HAVE ENTERED THE VALUE AS ZERO:"<<endl;
//         break;
//         }
//         else{
//         cout<<"RE ENTER THE VALUE"<<endl;
        
//         }
// }
//     return 0;
    
// }


// Write a program that uses break to stop a loop when the number 7 is entered.

// #include<iostream>
// using namespace std;
// int main(){
//     while(true){
//         int n;
//         cout<<"ENTER THE VALUE OF N: "<<endl;
//         cin>>n;
//         if(n==7){
//             break;
//         }
//         cout<<"The Value You Have Entered Is: "<<n<<endl;
//     }

//     return 0;
// }


// Write a program that uses continue to skip printing number 5 in a loop from 1 to 10.

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     for(i=1;i<10;i++){
//         if(i==5){
//             continue;
//         }
//         else{
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

// 	Write a program to print all numbers from 1 to 20, but skip the numbers divisible by 3 using continue.

// #include<iostream>
// using namespace std;
// int main(){
//     int n=1;
//     while(n<20){
//         if(n%3==0){
//             n++;
//             continue;
//         }
//         else{
//             cout<<n<<endl;
//             n++;
//         }
//     }
//     return 0;
// }


// 	Write a program to calculate the sum of odd numbers from 1 to 20.

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int odd_total=0;
//     while(i<=20){
//         if(i%2==0){
//             i++;
//             continue;
//         }
//         else{
//             odd_total+=i;
//             cout<<odd_total<<endl;
//             i++;
//         }
    

//     }
//     return 0;
// }


// 	Write a program to count how many digits are in a number using a while loop

// #include<iostream>
// using namespace std;
// int main(){
//     int count=0;
//     int n;
//     cout<<"Enter the value of n: "<<endl;
//     cin>>n;
//     if(n==0){
//         count+=1;
//     }
//     else if(n<0){
//         n=-n;

//     }
//     while(n!=0){
//         n=n/10;
//         count+=1;
//     }
//     cout<<"Number of Digits: "<<count<<endl;

//     return 0;
// }

// Write a program to print a pattern of stars using nested loops

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: "<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int a=1;a<=1;a++){
//             cout<<" * ";
//         }
//     cout<<endl;
//     }


//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }










// Call by value & call by reference (5 questions)
// Swap using call by value vs call by reference
// Write a program with two functions swapByValue(int a, int b) and swapByReference(int &a, int &b).

// In main, take two integers from the user.

// Call both functions and print values before and after each call.

// Observe and print why one works and the other doesn’t.

// #include <iostream>
// using namespace std;
// void swapByValue(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void swapByRefrence(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int x, y;
//     cout << "Enter the value of integers: " << endl;
//     cin >> x;
//     cout << "Enter the value of integers: " << endl;
//     cin >> y;
//     cout << "Value before swap: " << x << y << endl;
//     swapByValue(x, y);
//     cout << "Value after swap: " << x << y << endl;

//     cout << "Value before refrence swap: " << x << y << endl;
//     swapByRefrence(x, y);
//     cout << "Value after swap: " << x << y << endl;
//     return 0;

// }




// 2. Maximum of Two Classes (Different Classes)
// Create two classes Alpha and Beta, each with one private int member (a and b).

// Declare a friend int maxValue(Alpha, Beta); that returns the maximum of the two integers.

// In main, create objects of both classes, set their values, and print the maximum.

// #include<iostream>
// using namespace std;
// class Beta;
// class Alpha{
//     int a;
// public:    
//     void setValue(int x){
//         a=x;
//     }
//     friend int maxValue(Alpha a1,Beta b1);
    
// };
// class Beta{
//     int b;
// public:    
//     void setValue(int y){
//         b=y;
//     }
//     friend int maxValue(Alpha a1,Beta b1);
// };

// int maxValue(Alpha a1,Beta b1){
//   if(a1.a>b1.b){
//     return a1.a;
//   }
//   else{
//     return b1.b;
//   }
// }    

// int main(){
//     Alpha a1;
//     Beta b1;
//     a1.setValue(6);
//     b1.setValue(209);
//     int maximum=maxValue(a1,b1);
//     cout<<"Maximum Value is: "<<maximum<<endl;
//     return 0;
// }