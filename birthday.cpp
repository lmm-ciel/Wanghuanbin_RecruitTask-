#include "birthday.h"
int main()  
{    
    int id, year, month, day;  
    cin >> id >> year >> month >> day;  
    Person p1(id, year, month, day);   
    p1.show();  
    cin >> id >> year >> month >> day;  
    Person p2(id, year, month, day);   
    p2.show();  
    cout << "共有" << Person::getNumberOfObjects() << " 人" << endl;  
    Person p3 = p2;  
    cout << "共有" << Person::getNumberOfObjects() << " 人" << endl;  
    Person *p4 = new Person(1004, 1992,2,12);  
    cout << "共有" << Person::getNumberOfObjects() << " 人" << endl;  
    delete p4;  
    cout << "共有" << Person::getNumberOfObjects() << " 人" << endl;
} 
