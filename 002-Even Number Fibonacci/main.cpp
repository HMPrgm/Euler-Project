#include <iostream>
// PROBLEM 2
// Find the sum of the even-valued Fibonnaci terms < four million.
using namespace std;

long sumEvenFibonnaci(int max);

int main()
{
    long answer = sumEvenFibonnaci(4000000);
    cout << "sum of the even-valued Fibonnaci terms < four million: " << answer;
    return 0;
}

long sumEvenFibonnaci(int max) {
    long sum = 0;
    int  f0 = 0;
    int f1 = 1;
    while (f1 < max) {
        sum += f1 %2 == 0? f1:0;
        int temp = f1;
        f1 += f0;
        f0 = temp;
    } 
    return sum;
}