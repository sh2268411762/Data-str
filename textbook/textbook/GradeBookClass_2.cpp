//#include <iostream>
//#include <string>
//using namespace std;
//
//class GradeBook
//{
//public:
//	explicit GradeBook(string name) //构造函数
//		:courseName(name)
//	{
//
//	}
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
//	GradeBook g1("CS101 Introduction toC++ Programming");
//	GradeBook g2("CS102 Data Structures in C++");
//
//	cout << "g1:" << g1.getName() << endl;
//	cout << "g2:" << g2.getName() << endl;
//	return EXIT_SUCCESS;
//}