/*
Sum square difference
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long sumOfSquares = 0, squaresOfSums = 0, sumOfNum = 0;
    for (int i = 0; i <= 100; i++){
        sumOfNum += i;
        sumOfSquares += pow(i, 2);
    }
    squaresOfSums = pow(sumOfNum, 2);
    cout << squaresOfSums - sumOfSquares;
}
