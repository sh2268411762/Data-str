////GradeBook类
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class GradeBook
//{
//public :  //函数出现在 public  之后，表示该函数公有可用
//	void displayMessage(string name) const  //const  表示该函数不修改调用它的 GradeBook 对象
//	{
//		cout << "Welcome to the grade book for:\n" << name << "!" << endl;
//		cout << "欢迎来到:——>" << name << "课程!" << endl;
//	}//结束函数
//};//结束类
//
//int main()
//{
//	GradeBook g1;         //产生一个GradeBook 类的对象
//	g1.displayMessage("C++");  //调用类的成员函数
//	string name;   //创建一个 字符串
//	cout << "请输入课程名称：";    
//	getline(cin, name);
////	cin >> name;   该输入语句会在读取到第一个空白间隔符停止
//	cout << endl;
//
//	g1.displayMessage(name);  //
//	return EXIT_SUCCESS;
//}