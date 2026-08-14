// Variables in c++ are containers used to store some data.
// #include<iostream>
// using namespace std;
// int main(){
//     int x;      //also written as int x = 8; yaha declaration or initialization ek sath ho raha h & called declaration of a variable.
//     x = 8;      //initialization of variable.
//     cout<<x<<endl;
//     cout<<x + 12;
// }


// Can modify the value of variable?
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 4, y = -4;
//     cout<<x<<endl;  //also cout<<x<<endl<<y;  {fir niche wala nhi likha jaiga.}
//     cout<<y<<endl;
// }

#include<iostream>
using namespace std;
int main(){
    int x = 8;
    cout<<x<<endl;
    x = 10;           // Now x is no more 8. it is 10.
    cout<<x<<endl;
}

// Result := Yes we can modify the value of the variable. But only one time.