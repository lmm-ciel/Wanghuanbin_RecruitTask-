#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int year, month, day;

public:	
    //	无参构造函数
	Date(){}
	//	带参构造函数
	Date(int a,int b,int c):year(a),month(b),day(c){}
	// 	其他公有函数
	void show(){
		cout<< year << "年" << month << "月" << day << "日" << endl;
	}
    //////////////////////////////////////////////////////
    
	// 请在 Person 类的打印信息函数中使用 Date 的 show() 方法    
};

class Person
{   
private:
   int id;						// ID号
   Date birthDate; 				// 出生年月日
   static int numberOfObjects;  // 静态变量，表示Person类的对象数量

public:
    //	无参构造函数
	Person(){};
	//	带参构造函数
	Person(int a,int b,int c, int d):id(a),birthDate(Date(b,c,d)){
		numberOfObjects++;
	}
	//	拷贝构造函数
	Person(const Person& PP){
		id = PP.id;
		birthDate = PP.birthDate;
		numberOfObjects++;
	}
	// 	析构函数
	~Person(){
		numberOfObjects--;
	}
	// 	其他公有函数
	void show(){
		cout<< "ID:" << id << " ,生日:";
		birthDate.show();
	}	
	// 	静态函数 getNumberOfObjects() 返回静态变量：Person对象的数量
	static int getNumberOfObjects(){
		return numberOfObjects;
	}
    //////////////////////////////////////////////////////
};

int Person::numberOfObjects=0;
