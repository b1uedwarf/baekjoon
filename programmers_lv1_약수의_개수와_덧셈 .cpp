#include <iostream>
#include <cmath>
using namespace std;

int main() {

        int answer = 0;
        int left, right;
        cin >> left >> right;

        for (int i = left; i <= right; i++) {
            if (sqrt(i) == (int)sqrt(i)) {
                answer -= i;
            }
            else {
                answer += i;
            }
        }
        cout << answer;
}