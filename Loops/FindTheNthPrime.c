/*
Given an integer n, write a program to calculate the n-th prime number, starting from 1.

Input Format

A single integer 𝑛.
Constraints

1 <= n <=104
Output Format

Print the n-th prime number.
Sample Input 0

6
Sample Output 0

13
Explanation 0

13 is the 6th prime number.

Sample Input 1

12
Sample Output 1

37
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int primes[n];   
    int count = 0;

    for (int num = 2; count < n; num++) {  
        int isPrime = 1;

        for (int i = 2; i * i <= num; i++) {  
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            primes[count] = num;
            count++;
        }
    }

    printf("%d", primes[n - 1]);
    return 0;
}
