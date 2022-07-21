#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int year, month, day;

public:	
    //	�޲ι��캯��
	Date(){}
	//	���ι��캯��
	Date(int a,int b,int c):year(a),month(b),day(c){}
	// 	�������к���
	void show(){
		cout<< year << "��" << month << "��" << day << "��" << endl;
	}
    //////////////////////////////////////////////////////
    
	// ���� Person ��Ĵ�ӡ��Ϣ������ʹ�� Date �� show() ����    
};

class Person
{   
private:
   int id;						// ID��
   Date birthDate; 				// ����������
   static int numberOfObjects;  // ��̬��������ʾPerson��Ķ�������

public:
    //	�޲ι��캯��
	Person(){};
	//	���ι��캯��
	Person(int a,int b,int c, int d):id(a),birthDate(Date(b,c,d)){
		numberOfObjects++;
	}
	//	�������캯��
	Person(const Person& PP){
		id = PP.id;
		birthDate = PP.birthDate;
		numberOfObjects++;
	}
	// 	��������
	~Person(){
		numberOfObjects--;
	}
	// 	�������к���
	void show(){
		cout<< "ID:" << id << " ,����:";
		birthDate.show();
	}	
	// 	��̬���� getNumberOfObjects() ���ؾ�̬������Person���������
	static int getNumberOfObjects(){
		return numberOfObjects;
	}
    //////////////////////////////////////////////////////
};

int Person::numberOfObjects=0;
