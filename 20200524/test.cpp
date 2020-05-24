#include <iostream>
using namespace std;

class Date {
public:
	//Ĭ�Ϲ��캯��:ȫȱʡ
	Date(int year = 1,int month = 1,int day = 1) {
		_year = year;
		_month = month;
		_day = day;
	}
	//�����������,���ܳ�Ϊ������Ա�ĳ�ʼ��,���캯�����ж�����ֻ�ܽ������Ϊ����ֵ,�����ܳ�����ʼ��.
	//��Ϊ��ʼ��ֻ�ܳ�ʼ��һ��,�����캯�����ڿ��Զ�θ���ֵ.
	
	//��ʼ���б�  : ��Ա(��ʼ��ֵ/���ʽ), ��Ա2()......
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
	A a(1);//��������
	A a2 = 2; //��������:���ι��캯������ʽ����ת��-- > ���ù��촴��һ���������� + �������죨ͨ���������󿽱�����a2����)
	a2 = 3;//3��Ϊ�������빹�캯���� ������������ ���ø�ֵ��ʹ�����������a2��ֵ
	
	//A a3 = 4, 5;
}

class Date {
public:
	//Ĭ�Ϲ��캯��:
	//1.������Ĭ�����ɵ�ֻ�е���û�ж����κι��캯��ʱ���������Ż��Զ�����һ���޲ι��죬 ��������Ѿ������˹��캯��
	//�������������Զ����ɣ���ʹ����û����ʽ�����޲ι���
	//2.��ʽ������޲ι���
	//3.ȫȱʡ���캯��
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
	Date d2(d1); //δ��ʽ����,����ǳ����
}
int main() {
	test();
	return 0;
}