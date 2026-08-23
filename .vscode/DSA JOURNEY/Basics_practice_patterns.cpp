
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


