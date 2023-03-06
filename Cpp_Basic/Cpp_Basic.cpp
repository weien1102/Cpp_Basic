#include <iostream>
#include <string>
using namespace std;

int main()
{
	//給定一個分數，輸出相對應的等第
	int score;
	string grade;
	string isPass;
	cout << "請輸入分數： ";
	cin >> score;

	// if-else statement
	//if (score >= 90) {
	//	grade = "A";
	//}
	//else if (score >= 80) {
	//	grade = "B";
	//}
	//else if (score >= 70) {
	//	grade = "C";
	//}
	//else if (score >= 60) {
	//	grade = "D";
	//}
	//else grade = "E";

	// switch case statement
	switch (score / 10) {
		case 10:
		case 9:
			grade = "A";
			break;
		case 8:
			grade = "B";
			break;
		case 7:
			grade = "C";
			break;
		case 6:
			grade = "D";
			break;
		default:
			grade = "E";
	}

	//if (score >= 60) isPass = "及格";
	//else isPass = "不及格";
	isPass = (score >= 60) ? "及格" : "不及格";
	(score >= 60) ? cout << "恭喜你及格了" << endl : cout << "你不及格，要多努力" << endl;
	cout << "分數為: " << score << endl;
	cout << "等第為: " << grade << endl;
	cout << "是否及格: " << isPass << endl;
}
