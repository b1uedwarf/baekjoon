#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int everyNum[9] = { 1,2,3,4,5,6,7,8,9 };

    for (int i = 0; i < numbers.size(); i++) {
        for (int j = 0; j < 9; j++) {
            if (numbers[i] == everyNum[j]) {
                everyNum[j] = 0;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        answer += everyNum[i];
    }

    return answer;
}