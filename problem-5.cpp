/*
Smallest Multiple
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;

long gcd(long a, long b){
    while (b){
        int oldB = b;
        b = a % b;
        a = oldB;
    }
    return a;
}

long lcm(long a, long b){
    return a * (b / gcd(a, b));
}

int main(){
    long result = 20;
    for (long number = result - 1; number > 1; number--){
        result = lcm(result, number);
    }
    cout << result;
}
