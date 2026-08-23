// // F1 (Simple Write & Read): Create a file named notes.txt, write three lines of text into it using ofstream, close it, 
// // and then read and print the entire file content to the console line-by-line using ifstream and getline().

// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main(){
//     ofstream out("notes.txt");
//     string s;
//     s="My Name is Pratik Chaubey"
//     "i Study in 1 st sem"
//     "at Graphic Era";
//     out<<s;
//     out.close();
//     ifstream in("notes.txt");

//     if (!in.is_open()) {
//         cout << "Error opening file for reading!" << endl;
//         return 1;
//     }
//     string line;
//     while (getline(in, line)) {
//         cout << line << endl;
//     }
//     in.close();
// }





// F2 (Append Mode): Open the existing notes.txt in append mode (ios::app), add a new line without overwriting previous content, and verify the file content.

// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main(){
//     ofstream out("notes.txt",ios::app);
//     out<<" MY COURSE IS BTECH CSE(AI/DS)";
//     out.close();
//     ifstream in("notes.txt");
//     string line;
//     while(getline(in,line)){
//         cout<<line<<endl;
//     }
//     return 0;

// }




