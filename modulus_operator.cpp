//  a % b = a  (when a<b)
// As a example  2 % 7 = 2
//               3 % 5 = 3

// Also a % (-b) = a % b
// and  (-a) % b = -(a % b)

#include<iostream>
using namespace std;
int main(){
    cout<<8%15<<endl;         // Output =  8
    cout<<34%(-10)<<endl;     // Output =  4
    cout<<(-34)%10;           // Output = -4
}