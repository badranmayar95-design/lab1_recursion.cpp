#include <iostream>
using namespace std;

long long factorialRecursive(int n) {
    if (n == 0)
        return 1;

    return n * factorialRecursive(n - 1);
}

long long factorialIterative(int n) {
    long long result = 1;

    for (long long i = 1; i <= n; i++) {
        result = result * i;
    }

    return result;
}

int main() {
   long long n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Recursive Factorial = "
       << factorialRecursive(n) << endl;

 //   cout << "Iterative Factorial = "
    //    << factorialIterative(n) << endl;

    return 0;
}