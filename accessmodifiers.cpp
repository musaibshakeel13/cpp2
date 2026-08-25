#include <iostream>
using namespace std;
class employee{
private:
int a,b,c;
public:
int d,e;
void setdata(int a1,int b1,int c1);
void getdata(){
    cout<<"The value of A is:"<<a<<endl;
    cout<<"The value of B is:"<<b<<endl;
    cout<<"The value of C is:"<<c<<endl;
    cout<<"The value of D is:"<<d<<endl;
    cout<<"The value of E is:"<<e<<endl;
}
};
void employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee musaib;
    musaib.d=4;
    musaib.e=5;
    musaib.setdata(1,2,3);
    musaib.getdata();
    return 0;
}
