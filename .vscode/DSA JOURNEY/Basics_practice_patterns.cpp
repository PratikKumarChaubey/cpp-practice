
// 1.
// #include<iostream>
// using namespace std;
// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int x;
//     cout<<"x: "<<endl;
//     cin>>x;
//     pattern(x);
//     return 0;
// }



//2.

// *
// * *
// * * *
// * * * *


// #include<iostream>
// using namespace std;
// void pattern(int x){
//     for(int i=1;i<=x;i++){
//         for(int j=0;j<i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int x;
//     cout<<"X:"<<endl;
//     cin>>x;
//     pattern(x);
//     return 0;
// }



//********** */
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5



// #include<iostream>
// using namespace std;
// void pattern(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int x;
//     cout<<"Enter the number of Rows to be created: "<<endl;
//     cin>>x;
//     pattern(x);
// }



// * * * * *
// * * * *
// * * *
// * *
// *


// #include<iostream>
// using namespace std;
// void pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int x;
//     cout<<"Enter the value of x: "<<endl;
//     cin>>x;
//     pattern(x);
//     return 0;
// }








// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1




// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int x;
//     cout<<"Enter number of rows: "<<endl;
//     cin>>x;
//     print(x);
//     return 0;
// }




//     *
//    ***
//   *****
//  *******
// *********

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=n-i-1;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<2*i+1;k++){
//             cout<<"*";
//         }
//         for(int z=0;z<=n-i-1;z++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int x;
//     cout<<"Enter rows: "<<endl;
//     cin>>x;
//     print(x);
//     return 0;
// }





// *********
//  *******
//   *****
//    ***
//     *




// #include<iostream>
// using namespace std;
// void print(int n) {
//     for (int i = 0; i < n; i++) {
//         // Leading spaces: 0, 1, 2, ...
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
//         // Stars: 2*n - (2*i + 1)
//         for (int k = 0; k < 2 * n - (2 * i + 1); k++) {
//             cout << "*";
//         }
//         // Trailing spaces: 0, 1, 2, ...
//         for (int z = 0; z < i; z++) {
//             cout << " ";
//         }
//         cout << "\n";
//     }
// }

// int main(){
//     int x;
//     cout<<"Enter the NO of rows: "<<endl;
//     cin>>x;
//     print(x);
//     return 0;
// }






// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i=1;i<=2*n-1;i++){
//         int stars=i;
//         if(i>n){
//             stars=2*n-i;
//         }
//         for(int k=1;k<=stars;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int x;
//     cout<<"Enter rows: "<<endl;
//     cin>>x;
//     print(x);
//     return 0;
// }







// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<2*i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     print(7);
//     return 0;
// }



// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1












// 1      1
// 12    21
// 123  321
// 12344321

// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int k=0;k<2*(n-i);k++){
//             cout<<" ";
//         }
//         for(int z=i;z>=1;z--){
//             cout<<z;
//         }
//         cout<<endl;
//     }

// }
// int main(){
//     print(5);
//     return 0;
// }



// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15


// #include<iostream>
// using namespace std;
// void print(int n){
//     int count=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     print(5);
//     return 0;
// }






// A
// A B
// A B C
// A B C D
// A B C D E









// #include<iostream>
// using namespace std;
// void print(int n){
    
//     for(int i=1;i<=n;i++){
//         char start='A';
//         for(int j=0;j<i;j++){
//             cout<<start;
//             start++;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     print(6);
//     return 0;
// }








// A B C D E
// A B C D
// A B C
// A B
// A



// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i=1;i<=n;i++){
//         char ch='A';
//         for(int j=n;j>=i;j--){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     print(5);
//     return 0;
// }




// A
// B B
// C C C
// D D D D
// E E E E E


// #include<iostream>
// using namespace std;
// void print(int n){
//     char ch='A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<ch<<" ";            
//         }
//         ch++;
//         cout<<endl;
//     }
// }
// int main(){
//     print(5);
//     return 0;
// }






// E
// E D
// E D C
// E D C B
// E D C B A





// #include<iostream>
// using namespace std;
// void print(int n){
//     for(int i=0;i<n;i++){
//         char ch='A'+n-1;
//         for(int j=0;j<=i;j++){
//             cout<<ch<<" ";
//             ch--;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     print(5);
//     return 0;
// }





// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********




// #include<iostream>
// using namespace std;

// void print(int n){
//     // Top Half
//     for(int i=0;i<n;i++){
//         for(int z=0;z<(n-i);z++){
//             cout<<"*";
//         }
//         for(int k=0;k<2*(i);k++){
//             cout<<" ";
//         }
//         for(int z=0;z<(n-i);z++){
//             cout<<"*";
//         }
//         cout<<endl;
//     } // <--- Top half ends here

//     // Bottom Half
//     for(int i=0;i<n;i++){
//         for(int z=0;z<=i;z++){
//             cout<<"*";
//         }
//         for(int k=0;k<2*(n-i-1);k++){
//             cout<<" ";
//         }
//         for(int z=0;z<=i;z++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     print(5);
//     return 0;
// }
