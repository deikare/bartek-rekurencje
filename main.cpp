#include <iostream>
#include <cmath>

using namespace std;

int recursiveFactorial(int n) {
    if (n <= 1)
        return 1;

    return n * recursiveFactorial(n - 1);
}

//Napisz procedurę malejaco_rosnaco(n) wyświetlającą liczby od n do 0, następnie od 0 do n.
void malejaco_rosnaco(int n) {
    cout << "Malejaco:" << n << endl;

    if (n > 0)
        malejaco_rosnaco(n - 1);

    cout << "Rosnaco: " << n << endl;
}

int recursiveDigitsSum(int n) {
    if (n == 0)
        return 0;

    return (n % 10) + recursiveDigitsSum(n / 10);
}

int recursiveNWD(int a, int b) {
    int c = a % b;

    if (c == 0)
        return b;

    return recursiveNWD(b, c);
}

int recursiveSumFromNToZero(int n) {
    if (n <= 0)
        return 0;

    return n + recursiveSumFromNToZero(n - 1);
}

int recursiveFibonacci(int n) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

string convertDigitToABCDEOrHigher(int digit) {
    if (digit < 10)
        return to_string(digit);
    else {
        return string(1, 'A' + (digit - 10));
    }
}

//rekurencyjne wyświetlanie liczby z systemu 10 w dowolnym innym systemie
void recursiveDisplayDecimalInDifferentBase(int inputNumber, int base) {
    if (inputNumber != 0) {
        recursiveDisplayDecimalInDifferentBase(inputNumber / base, base); //zagnieżdżamy rekurencję

        cout << convertDigitToABCDEOrHigher(inputNumber % base); //przy powrocie
    }
}

int main() {
    cout << "Wprowadz liczbę i podstawe: ";

    int inputNumber, base;

    cin >> inputNumber >> base;

    recursiveDisplayDecimalInDifferentBase(inputNumber, base);


//    cout << "Wartość silni iteracyjnie: " << iterativeFactorial(n) << ", rekurencyjnie: " << recursiveFactorial(n);
//    malejaco_rosnaco(n);
//    cout << "Suma cyfr n: " << recursiveDigitsSum(n);

    /*cout << "Wprowadz liczby a i b: ";

    int a, b;
    cin >> a >> b;

    cout << "NWD: " << recursiveNWD(a, b);*/

//    cout << "Fibonacci: " << recursiveFibonacci(n);

    return 0;
}
