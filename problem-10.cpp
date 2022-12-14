#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n){
    if (n % 2 == 0) return false;
    for (long long i = 3; i <= sqrt(n); i += 2){
        if (n % i == 0) return false;
    }
    return n > 2;
}
int main(){
    long long sum = 0;
    for (int i = 3; i < 2000000; i += 2){
        if (isPrime(i)) sum += i;
    }
    cout << sum + 2;
    return 0;
}

