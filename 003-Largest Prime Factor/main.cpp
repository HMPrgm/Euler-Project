#include <iostream>
//PROBLEM 3
// Find the largest prime factor of 600851475143
using namespace std;

struct sievePrime{
    long prime;
    long* nextPrime;
}

long largestPrimeFactor(long num);
sievePrime sieveOfEratosthenes(long max);



long main() {
    long number = 600851475143;

    cout << "The largest prime factor of " << number << "is: "<< largestPrimeFactor(number);


    return 0;
}

long largestPrimeFactor(long num) {

}

sievePrime sieveOfEratosthenes(long max)