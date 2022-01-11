#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int rank[7] = { 1,2,3,4,5,6,6 };
    int zero = 0;
    int correct = 0;
    for (int i = 0; i < 6; i++) {
        if (lottos[i] == 0) {
            ++zero;
        }
        else {
            for (int j = 0; j < 6; j++) {
                if (lottos[i] == win_nums[j]) {
                    ++correct;
                }
            }
        }
    }

    answer.push_back(rank[6 - correct - zero]);
    answer.push_back(rank[6 - correct]);
    return answer;
}