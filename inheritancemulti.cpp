#include<iostream>
using namespace std;
class student 
{
protected:
int roll_no;
public:
void set_rollno(int r){
    roll_no=r;

}
void getdata()
{
   cout<<"the rollno is:"<<roll_no<<endl;
}
};
class exam : public student{
protected:
float maths;
float opps;
public:
void set_marks(float m1,float m2){
    maths=m1;
    opps=m2;
}
void getmarks(){
    cout << "The marks obtained in maths are: "<<maths<<endl;
    cout << "The marks obtained in opps are: "<<opps<<endl;
}
};
class result: public exam{
    float percentage;
    public:
    void displas_result(){
        getdata();
        getmarks();
        cout <<"your result is:"<<(maths+opps)/2<<"%"<<endl;

    }

};
int main()
{
result musaib ;
musaib.set_rollno(242117);
musaib.set_marks(89.0,78.0);
musaib.displas_result();
return 0;
}

