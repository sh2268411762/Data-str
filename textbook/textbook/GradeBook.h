//#ifndef _GradeBook_H_
//#define _GradeBook_H_
//
//#include <iostream>
//#include <string>
//
//using namespace std;
////��  GradeBook ��Ľӿڰ���һ�����캯������Ա���� setCourseName��getCourseName
////��  displayMessage
//class GradeBook
//{
//public:
//	explicit GradeBook(string name) //���캯��
//		:courseName(name)
//	{
//
//	}
//	void setName(string name)
//	{ //������Ч���ж�
//		if (name.size() <= 25)
//		{
//			courseName = name;
//		}
//		if (name.size() > 25)
//		{
//			courseName = name.substr(0, 25);  //��0��24���ַ�
//			cerr << "Name \"" << name << "\"exceeds maximum length (25).\n" << "Limiting courseName to first 25 characters.\n" << endl;
//		}
//	}
//	string getName() const
//	{
//		return courseName;
//	}
//	void displayMessage() const  //const  ��ʾ�ú������޸ĵ������� GradeBook ����
//	{
//		cout << "Welcome to the grade book for:\n" << getName() << "!" << endl;
//		cout << "��ӭ����:����>" << getName() << "�γ�!" << endl;
//	}//��������
//
//private:
//	string courseName = "C++ class";   //���ݳ�Ա�ɱ���ĳ�Ա����
//};
//
//
//
//
//
//
//#endif // !_GradeBook_H���б�������