//#include <iostream>
//#include <string>
//using namespace std;
//
//class GradeBook
//{
//public:
//	void setName(string name)
//	{
//		courseName = name;
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
//int main()
//{
//	GradeBook g1;
//	string str;
//
//	cout << "初始课程名：" << g1.getName() << endl;
//	cout << "请输入课程名：" << endl;
//	getline(cin, str);
//	g1.setName(str);//给课程名赋值
//	cout << endl;
//	g1.displayMessage();
//	return EXIT_SUCCESS;
//}