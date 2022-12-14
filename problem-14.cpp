#include <iostream>
using namespace std;

int main(){
    long long sequenceLength = 0, startingNumber = 0, sequence;
    for (int i = 2; i <= 1000000; i++){
        int length = 1;
        sequence = i;
        while (sequence != 1){
            if (sequence % 2 == 0) sequence /= 2;
            else sequence = 3 * sequence + 1;
            length++;
        }
        if (length > sequenceLength){
            sequenceLength = length;
            startingNumber = i;
        }
    }
    cout << startingNumber;
}
