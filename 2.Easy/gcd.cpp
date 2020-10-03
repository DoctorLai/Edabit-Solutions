  
/* Problem-Task : Write a function that returns the greatest common divisor (GCD) of two integers.
 * Problem Link : https://edabit.com/challenge/6g5Nj6Qz44Sd2NbBQ
*/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        let c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(){
    cout<<gcd(32,8)<<endl;
    cout<<gcd(8,12)<<endl;
    return 0;
}
