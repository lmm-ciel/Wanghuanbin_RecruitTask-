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
    cout << "����" << Person::getNumberOfObjects() << " ��" << endl;  
    Person p3 = p2;  
    cout << "����" << Person::getNumberOfObjects() << " ��" << endl;  
    Person *p4 = new Person(1004, 1992,2,12);  
    cout << "����" << Person::getNumberOfObjects() << " ��" << endl;  
    delete p4;  
    cout << "����" << Person::getNumberOfObjects() << " ��" << endl;
} 
