/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream>
using namespace std;

int main(){
    int a, b, c, sum, product, aSqaured, bSquared, cSquared;
    a = b = c = sum = product = aSqaured = bSquared = cSquared = 0;
    sum = 1000;
    for (a = 1; a < (sum/3); a++){
        for (b = 2; b < (sum/2); b++){
            c = sum - a - b;
            aSqaured = a*a;
            bSquared = b*b;
            cSquared = c*c;
            if ((aSqaured + bSquared) == cSquared){
                product = a * b * c;
                cout << product;
            }
        }
    }
}
