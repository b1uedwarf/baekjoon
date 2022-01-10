#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
	string answer[7] = { "FRI","SAT","SUN","MON","TUE","WED","THU" };
	int month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int count = 0;

	for (int i = 1; i < a; i++) {
		count += month[i - 1];
	}
	count += +b - 1;
	return answer[count % 7];
}