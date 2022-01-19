#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	vector<int> letter;
	int temp;

	for (int i = 0; i < s.length(); i++) {
		letter.push_back(s[i]);
		//cout << letter[i] << endl;
	}

	for (int i = letter.size() - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (letter[j] < letter[j + 1]) {
				temp = letter[j];
				letter[j] = letter[j + 1];
				letter[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < letter.size(); i++) {
		answer += (char)letter[i];
	}




	return answer;
}