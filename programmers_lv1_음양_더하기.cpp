#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    for (int i = 0; i < absolutes.size(); i++) {
        int sign = 0;
        if (signs[i] == true) {
            sign = 1;
        }
        else if (signs[i] == false) {
            sign = -1;
        }
        answer += absolutes[i] * sign;
    }
    return answer;
}