#include<iostream>
using namespace std;
class temp{
int i;
static int c;
public:
void getdata(void);
void putdata(void);
};
int temp::c;
void temp::getdata()
{
cout<<"Enter values"<<endl;
cin>>i;
}
void temp::putdata()
{
cout<<"output"<<c<<endl;
c++;
}

int main()
{
class temp t,t1,t2;
t.getdata();
t.putdata();
t1.getdata();
t1.putdata();
t2.getdata();
t2.putdata();
return 0;
}
