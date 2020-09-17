//#include "while.h"
//
//
//GradeBook::GradeBook(string name)  //构造函数，将name赋值给courseName
//{
//	setCourseName(name);
//}
//void GradeBook::setCourseName(string name) //验证课程的合法性
//{
//	if (name.size() <= 25) //小于25接收为courseName
//	{
//		courseName = name;
//	}
//	else
//	{
//		courseName = name.substr(0, 25); //大于25接收前25个字符为courseName
//		cerr << "Name \"" << name << "\"exxeeds maximum length (25).\n" << "Limiting courseName to first 25 characters.\n" << endl;
//
//	}
//}
//string GradeBook::getCourseName() const
//{
//	return courseName;
//}
//void GradeBook::displayMessage() const
//{
//	cout << "欢迎来到课程-->" << getCourseName() << endl;
//}
//void GradeBook::determineClassAverage() const
//{
//	int total = 0;
//	unsigned int count = 0;
//
//	cout << "输入成绩(或输入-1退出)：";
//	int grade = 0;
//	cin >> grade;
//
//	if (grade == -1)
//	{
//		cout << "退出" << endl;
//	}
//	else
//	{
//		do {
//			total += grade;
//			count++;
//
//			cout << "输入成绩(或输入-1退出)：";
//			cin >> grade;
//		} while (grade != -1 && grade <= 100 && grade >= 0);
//	}
//
//	if (count != 0)
//	{
//		double ave = static_cast<double>(total) / count;
//		cout << "\n全体学生" << count << "个学生的总成绩为：" << total << endl;
//		cout << setprecision(2) << fixed;  //说明double类型变量输出时精度为 2 ，fixed 表示输出小数时
//										   //使用定点格式，即必须显示小数点并补足小数点后的0
//		cout << "平均成绩为：" << ave << endl;
//	}
//	else
//	{
//		cout << "为输入成绩" << endl;
//	}
//
//
//}
//
