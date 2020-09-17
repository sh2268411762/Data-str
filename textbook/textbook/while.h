#ifndef _sequential_H_
#define _sequential_H_

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class GradeBook
{
public :
	explicit GradeBook(string);
	void setCourseName(string);
	string getCourseName() const;
	void displayMessage() const;
	void determineClassAverage() const;

private:
	string courseName;
};









#endif // !_sequential_H所有变量声明
