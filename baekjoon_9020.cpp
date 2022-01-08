#include<iostream>
using namespace std;
int number = 0;
bool findPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int N, r, a, b;
    bool t;
    number = 0;
    cin >> r;

    for (int i = 0; i < r; i++) {
        cin >> N;
        int num = (N / 2);
        for (int j = 0; j < num; j++) {
            a = num - j;
            if (findPrime(a) == true) {
                b = N - a;
                if (findPrime(b) == true) {
                    break;
                }
            }
        }
        cout << a << " " << b << endl;
    }
}