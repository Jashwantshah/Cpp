// char includes
// a b c d ......... z
// A b c d .........Z
//  All symbols.
// 0 1 2 3 4 5 6 7 8 9       only single digit/word would be entered.

// ASCII VALUES
// 'A' = 65              'a' = 97            '0' = 48
// 'B' = 66              'b' = 98            '1' = 49
// 'C' = 67              'c' = 99            '2' = 50....................... '9' = 57
// 'D' = 68              .
// .
// .
// .
// .
// 'Y' = 89
// 'Z' = 90
// #include<iostream>
// using namespace std;
// int main(){
//     char x = 'A';
//     cout<<x;
// }



// to know ascii value 

// #include<iostream>
// using namespace std;
// int main(){
//     char x = 'A';
//     cout<<(int)x;               // Output := 65 which is the ascii value 0f 'A'
// }


// -----------------------------------------------Also written as ----------//
// #include<iostream>
// using namespace std;
// int main(){
//     char x = 'A';
//     int ascii = (int)x;              // explicit typecasting 
//     cout<<ascii;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     char x = 'A';
//     int ascii = x;           // implicit typecasting
//        cout<<ascii;
// }


#include<iostream>
using namespace std;
int main(){
    // int x = 74;
    // cout<<(char)x;           // Output := J  


    // char ch1 = 'A';
    // char ch2 = 'a';
    // cout<<ch1+ch2<<endl;
    // cout<<65+97;           

    // cout<<('a'+1);          // Output := 98
    cout<<(char)('a'+1);       // Output := b

}