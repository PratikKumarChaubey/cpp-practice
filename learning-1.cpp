// #include<iostream>
// using namespace std;
// int main(){
//     int a=67,b=5;
//     cout<<"the sum of numbers is:"<<a+b<<endl;
//     cout<<" the diff of numbers is:"<<a-b<<endl;
//     cout<<" the product of two numbers is:"<<a*b<<endl;
//     cout<<"the division of a/b  is:"<< a/b<<endl;
    
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter the value of a :"<<endl;
//     cin>>a;
//     cout<<"enter the value of b:"<<endl;
//     cin>>b;
//     int c = a+b; 
//     cout<<"the sum of a and b is:"<<c<<endl;
//     cout<<"the global c is:"<<c<<endl;
//     return 0;

    

// }


// # include<iostream>
// using namespace std;
// int main(){
// //     int a;
//     cout<<"enter your current age:  "<<endl;
//     cin>>a;


//     cout<<"your current age is"<<2026-a<<endl;
//     return 0;
// }


// # include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int celsius= a;
//     cout<< "enter your tempreture in centigrate: "<<endl;
//     cin>>celsius;
    
//     cout<<"your tempreture in farheneit is:"<<(celsius*9/5)+32<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int P,R,T;
//     int SI;
//     cout<<"Enter the value of (P):"<<endl;
//     cin>>P;
//     cout<<"Enter the value of (R): "<<endl;
//     cin>>R;
//     cout<<"Enter the time duration (T):"<<endl;
//     cin>>T;

//     SI= (P*R*T)/100;
//     cout<<"Your calculated amount will be:"<<SI<<endl;
//     return 0;
// }    






// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"enter your age:"<<endl;
//     cin>>age;
//     if(age<18 && age>1){
//         cout<<"You are a teenager, you cant vote"<<endl;
//     }
//     else if(age<=0){
//         cout<<"You need to be born properly";
//     }
//     else if(age>18){
//         cout<<"you are allowed to vote, choose the best candidates";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int age;
//     cout << "enter your age:" << endl;
//     cin >> age;
    
//     if(age > 1 && age < 18){  // Teenager (2-17)
//         cout << "You are a teenager, you can't vote" << endl;
//     }
//     else if(age <= 0){  // Invalid age (0 or negative)
//         cout << "You need to be born properly!" << endl;
//     }
//     else if(age >= 18){  // Adult (18+)
//         cout << "You are allowed to vote, choose the best candidates" << endl;
//     }
    
//     return 0;
// }    


// #include<iostream>
// #include <string>
// using namespace std;
// int main(){
//     string name;
//     cout<<"enter your first name:"<<endl;
//     cin>>name;

//     if(name=="pratik"){
//         cout<<"you have enterd the correct name"<<endl;
//     }
//     else if(name=="shreya"){
//         cout<<"you have enterd the name 2nd on the list"<<endl;
//     }

//     else{
//         cout<<"Name not on the list"<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"enter your age;"<<endl;
//     cin>>age;
//     switch (age)
//     {
//         case 90:
//         cout<<("you have grown old, you are nearing century")<<endl;
//         break;
    
//         case 18:
//         cout<<"Transformation of life takingb place, now you are an growing adult"<<endl;
//         break;
        
//         default:
//         cout<<"there is no special case defined for you"<<endl;
        

//         return 0;
//     }


    

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int x=0;
//     cout<<"enter the value of number upto which sum has to be calculated"<<endl;
//     cin>>n;
//     int total=0;
//     while(x<=n){
//         total+=x;
//         x+=1;
        
//     }
//     cout<<"the sum of first"<<n<< "number is :"<<total<<endl;



//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int total =0;
//     cout<<"Enter the value of n( till where the sum has to be printed )"<<endl;
//     cin>>n;
//     for (int a=1;a<=n;a++){
//         total+=a;
//     }
//     cout<<" the sum of values of first"<< n << "natural numbers is "<< total <<endl;
//     return 0;

// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int a=1;
//     int fac=1;
//     cout<<"enter the value of number n of which factorial is to be calculated"<<endl;
//     cin>>n;
//     while(a<=n){
//         fac*=a;
//         a++;
//     }
//     cout<<"the value of factorial: "<<n<<"is"<<fac<<endl;


//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int marks[10]={34,55,32,53,54,5,3,5,24,31};
//     for (int i=0; i<10; i++){
//         cout<<" THE VALUE OF MARKS ARE: "<<marks[i]<<endl;
//     }
//     return 0;
// }    
    

// #include<iostream>
// using namespace std;

// int main(){
//     int marks[] = {67,78,65,47,89,7,45,54,90,99};

//     int i = 0;
//     while(i < 10){
//         cout << "The values are " << marks[i] << endl;
//         i += 1;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//    int x[]={23,54,67,55,67};
//    int i=0;
//    for(int i=0;i<5;i++){
//     cout<<" the values are as follow:"<<x[i]<<endl;
//    }
//    return 0;
// }

// ################3########FACTORIAL###### CALC

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     int fac=1;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;
//     while(i<=n){
//         fac*=i;
//         i+=1;
//     }
//     cout<<"The factorial of "<<n<<" is "<<fac<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i = 1;
//     int n;
//     int fac = 1;

//     cout << "enter the value of n" << endl;
//     cin >> n;

//     while(i <= n){
//         fac *= i;
//         i += 1;
//     }

//     cout << "The factorial of " << n << " is " << fac << endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int i=1;
//     cout<<"Enter the value of n :"<<endl;
//     cin>>n;
//     while(i<=10){
//         cout<<"The multiplication table of "<< n<< "is "<<n*i<<endl;
//         i++;
//     }

//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n=20;
//     while(i<=20){
//         if(i%2==0){
//             i++;
//             continue;
//         }    
//         else{
//             cout<<"the given number is odd "<< i<<endl;
//             i++;

//         }
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n=20;
//     int i=1;
//     while(i<=20){
//         if(i==10){
//             break;
//         }
//         cout<<"THE GIVEN NUMBERS ARE : "<<i<<endl;
//         i++;

//     }
    

//     return 0;
// }

// #include<iostream>
// using namespace std;
// struct Car{
//         string brand;
//         string model;
//         int price;
// };



// int main(){

//     Car car1={"BWM", "X5", 50000000};
//     Car car2={"FORD", "ASPIRE", 1200000};
//     cout<<"THE CAR BRAND IS "<< car1.brand<< " with model "<< car1.model<<" and price " <<car1.price<<endl;
//     return 0;
    

//     }


// #include<iostream>
// using namespace std;
// int n;
// int main(){
//     cout<<"Enter the value of n: "<<endl;
//     cin>>n;
//     if(n<0){
//         cout<<"the number is negative "<<n<<endl;

//     }
//     else if(n>0){
//         cout<<"the entered number is positive "<<n<<endl;
//     }
//     else{
//         cout<<"the entered number is ZERO "<< n<<endl;
//     }

//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int Marks[]={34,56,45,24,35,23,4,24,24,242,24};
//     cout<<Marks[5]<<endl;
//     for (int i=1;i<=11;i++){
//         cout<<"The number of values of marks are as follows; "<<Marks[i]<<endl;
//     int *x=Marks;
//     cout<<"the value of marks[0] "<<*(x+1)<<endl;
//     cout<<"the value of marks[1] "<<*(x+2)<<endl;
//     cout<<"the value of marks[3] "<<*(x+3)<<endl;
//     cout<<"the value of marks[4] "<<*(x+4)<<endl;
//     cout<<"the value of marks[5] "<<*(x+5)<<endl;

//     }
   
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int a;
//     cout<<"ENETR THE 1ST VALUE: "<<endl;
//     cin>> n;
//     cout<<"enter the 2nd value: "<<endl;
//     cin>> a;
//     if(a<n){
//         cout<<"N is the greatest"<<endl;

//     }
//     else{
//         cout<<"a is greatest among the two"<<endl;

//     }


//     return 0;
// }    

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter your age: "<<endl;
//     cin>>a;
//     if(a<18){
//         cout<<"YOU ARE NOT ELIGIBLE TO VOTE "<<endl;

//     }
//     else if(a>=18){
//         cout<<"YOU ARE ALLOWED TO VOTE "<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int grade;
//     cout<<"Enter your marks: "<<endl;
//     cin>>grade;
//     if(grade<100 & grade>=80){
//         cout<<"you have done exceptionally well by scoring: "<<grade<<endl;
//     }
//     if(grade<70 & grade>=33){
//         cout<<"you have done average by scoring: "<<grade<<endl;
//     }
//     if(grade<33 & grade>=0){
//         cout<<"you have done exceptionally worse by scoring: "<<grade<<endl;
//     }
    

//     return 0;

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int i=1;
//     cout<<"Enter The Value of n: "<<endl;
//     cin>>n;
//     while(i<=n){
//         cout<<i<<endl;
//         i++;
//     }


//     return 0;
// }


// (Sum of First N Numbers calculate the sum using a while loop)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int i=1;
//     long long fact=1; // long long is used to print out large numbers.
//     cout<<"Enter The Value Of N: "<<endl;
//     cin>>n;
//     while (i<=n){
//         fact*=i;
//         i+=1;
       
//     }
//     cout<<"THE VALUE OF FACTORIAL IS : "<<fact<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cout<<"ENTER THE VALUE OF N :"<<endl;
//     cin>>n;
//     while(i<=10){
//         int x=n*i;
//         i+=1;
//         cout<<"THE MULTIPLICATION TABLE OF NUMBER "<<n<< " IS "<<x<<endl;
//     }
//     return 0;
// }
   