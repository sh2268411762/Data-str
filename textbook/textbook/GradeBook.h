//#ifndef _GradeBook_H_
//#define _GradeBook_H_
//
//#include <iostream>
//#include <string>
//
//using namespace std;
////该  GradeBook 类的接口包含一个构造函数及成员函数 setCourseName、getCourseName
////和  displayMessage
//class GradeBook
//{
//public:
//	explicit GradeBook(string name) //构造函数
//		:courseName(name)
//	{
//
//	}
//	void setName(string name)
//	{ //进行有效性判断
//		if (name.size() <= 25)
//		{
//			courseName = name;
//		}
//		if (name.size() > 25)
//		{
//			courseName = name.substr(0, 25);  //从0到24号字符
//			cerr << "Name \"" << name << "\"exceeds maximum length (25).\n" << "Limiting courseName to first 25 characters.\n" << endl;
//		}
//	}
//	string getName() const
//	{
//		return courseName;
//	}
//	void displayMessage() const  //const  表示该函数不修改调用它的 GradeBook 对象
//	{
//		cout << "Welcome to the grade book for:\n" << getName() << "!" << endl;
//		cout << "欢迎来到:——>" << getName() << "课程!" << endl;
//	}//结束函数
//
//private:
//	string courseName = "C++ class";   //数据成员可被类的成员访问
//};
//
//
//
//
//
//
//#endif // !_GradeBook_H所有变量声明