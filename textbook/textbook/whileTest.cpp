//#include "while.h"
//
//
//GradeBook::GradeBook(string name)  //���캯������name��ֵ��courseName
//{
//	setCourseName(name);
//}
//void GradeBook::setCourseName(string name) //��֤�γ̵ĺϷ���
//{
//	if (name.size() <= 25) //С��25����ΪcourseName
//	{
//		courseName = name;
//	}
//	else
//	{
//		courseName = name.substr(0, 25); //����25����ǰ25���ַ�ΪcourseName
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
//	cout << "��ӭ�����γ�-->" << getCourseName() << endl;
//}
//void GradeBook::determineClassAverage() const
//{
//	int total = 0;
//	unsigned int count = 0;
//
//	cout << "����ɼ�(������-1�˳�)��";
//	int grade = 0;
//	cin >> grade;
//
//	if (grade == -1)
//	{
//		cout << "�˳�" << endl;
//	}
//	else
//	{
//		do {
//			total += grade;
//			count++;
//
//			cout << "����ɼ�(������-1�˳�)��";
//			cin >> grade;
//		} while (grade != -1 && grade <= 100 && grade >= 0);
//	}
//
//	if (count != 0)
//	{
//		double ave = static_cast<double>(total) / count;
//		cout << "\nȫ��ѧ��" << count << "��ѧ�����ܳɼ�Ϊ��" << total << endl;
//		cout << setprecision(2) << fixed;  //˵��double���ͱ������ʱ����Ϊ 2 ��fixed ��ʾ���С��ʱ
//										   //ʹ�ö����ʽ����������ʾС���㲢����С������0
//		cout << "ƽ���ɼ�Ϊ��" << ave << endl;
//	}
//	else
//	{
//		cout << "Ϊ����ɼ�" << endl;
//	}
//
//
//}
//
