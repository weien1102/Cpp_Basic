#include <iostream>
#include <string>
using namespace std;

int main()
{
	int score;
	string grade;
	string isPass;
	string message;
	cout << "請輸入分數: ";
	cin >> score;

	if (score >= 90) {
		grade = "A";
	}
	else if (score >= 80) {
		grade = "B";
	}
	else if (score >= 70) {
		grade = "C";
	}
	else if (score >= 60) {
		grade = "D";
	}
	else grade = "E";

	//if (score >= 60) isPass = "及格";
	//else isPass = "不及格";
	isPass = (score >= 60) ? "及格" : "不及格";

	cout << "分數為: " << score << endl;
	cout << "等第為: " << grade << endl;
	cout << "是否及格: " << isPass << endl;
	(score >= 60) ? cout << "恭喜成績及格" << endl : cout << "成績不及格，請繼續努力" << endl;
}
