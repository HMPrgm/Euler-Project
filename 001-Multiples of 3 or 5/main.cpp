#include <iostream>
// PROBLEM 1
// Find the sum of all the multiples of 3 or 5 below 1000
using namespace std;

int main()
{
    int sum = 0;
    //collect all multiples of 3
    for (int i = 0; i < 1000; i+=3) {
        
        sum += i;
    }
    // collect all multiples of 5
    for (int i=0;i<1000; i+=5) {
        if (i % 3 == 0) {
            continue;
        }
        sum += i;
    }
    cout << "The sum of all multiples of 3 or 5 below 1000: " << sum;
    return 0;
}