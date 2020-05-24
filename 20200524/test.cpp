#include <iostream>
using namespace std;

class Date {
public:
	//默认构造函数:全缺省
	Date(int year = 1,int month = 1,int day = 1) {
		_year = year;
		_month = month;
		_day = day;
	}
	//上面这种情况,不能称为类对象成员的初始化,构造函数体中多的语句只能将其称作为赋初值,而不能称作初始化.
	//因为初始化只能初始化一次,而构造函数体内可以多次赋初值.
	
	//初始化列表  : 成员(初始化值/表达式), 成员2()......
	Date(int year = 1, int month = 1, int day = 1) 
		:_year(year)
		,_month(month)
		,_day(day)
	{	}

private:
	int _year;
	int _month;
	int _day;
};

class A {
public:
	A(int a = 1)
		:_a(a)
	{	}

	/*A(int a = 1, int b = 2) 
	:_a(a)
	{

	}*/
private:
	int _a;
};

void test() {
	A a(1);//创建对象
	A a2 = 2; //创建对象:单参构造函数的隐式类型转换-- > 调用构造创建一个匿名对象， + 拷贝构造（通过匿名对象拷贝构造a2对象)
	a2 = 3;//3作为参数传入构造函数， 创建匿名对象， 调用赋值，使用匿名对象给a2赋值
	
	//A a3 = 4, 5;
}

class Date {
public:
	//默认构造函数:
	//1.编译器默认生成的只有当类没有定义任何构造函数时，编译器才会自动生成一个无参构造， 如果类中已经定义了构造函数
	//编译器不会再自动生成，即使类中没有显式定义无参构造
	//2.显式定义的无参构造
	//3.全缺省构造函数
	Date() {

	}
	Date(int year = 1, int month = 1, int day = 1) {
		_year = year;
		_month = month;
		_day = day;
	}
	Date(int year, int month, int day) {
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};

class String {
public:
	String(const char* str = "bite") {
		_str =(char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}
	~String() {
		if (_str){
			free(_str);
			_str = nullptr;
		}
	}
private:
	char* _str;
};

class Date {
public:
	Date(int year = 2020, int month = 5, int day = 24) {
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d){
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	/*void printD() {
		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
	}*/
	bool isEqual(const Date& d){
		return _year == d._year
			&&_month == d._month
			&&_day == d._day;
	}
private:
	int _year;
	int _month;
	int _day;
};
void test() {
	Date d1;
	Date d2(d1);
	cout << d1.isEqual(d2) << endl;

}
class Date {
public:
	Date(int year = 2020, int month = 5, int day = 24) {
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};
void test() {
	Date d1;
	Date d2(d1); //未显式定义,属于浅拷贝
}
int main() {
	test();
	return 0;
}