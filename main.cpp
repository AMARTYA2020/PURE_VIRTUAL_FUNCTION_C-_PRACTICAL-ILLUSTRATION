#include<bits/stdc++.h>
using namespace std;
/* CONTRIBUTED BY AMARTYA PANDEY 23 DECEMBER 2020*/
class Database_bank{
public:
    virtual void getdata()=0;
};

class Accountants_bank:public Database_bank{
public:
    void getdata(){
    cout<<"Derived class Accountants_bank is called here:"<<endl;
    }
};

class Customer_bank:public Database_bank{
public:
    void getdata(){
    cout<<"Derived class Customer_bank is called here:"<<endl;
    }
};

class Manager_bank:public Database_bank{
public:
    void getdata(){
    cout<<"Derived class Manager_bank is called here: from the base class database_bank"<<endl;
    }
};

int main()
{
    Accountants_bank a;
    Customer_bank c;
    Manager_bank m;

    a.getdata();
    c.getdata();
    m.getdata();

    return 0;
}
