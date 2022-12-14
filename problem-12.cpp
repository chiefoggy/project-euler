#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long i = 0, j, number = 0, counter = 1, a;
    while (true){
        number = 0, counter = 0;
        for (j = 0; j <= i; j++) number += j;
        for (j = 2; j <= sqrt(number); j++){
            a = number / j;
            if (number % a == 0) counter++;
        } 
        counter *= 2;
        counter++;
        if (counter > 500){
            cout << number;
            break;
        }
        i++;
    }
}
