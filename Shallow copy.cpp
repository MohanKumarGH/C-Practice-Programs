#include <iostream>
//#include <new>
using namespace std;

class scopy
{
    int i;
    char *ptr=new char[10];
    public:
    void getchar()
    {
        cout<<"enter the string"<<endl;
        cin>>ptr;
        cout<<"enter i"<<endl;
        cin>>i;
    }
    void printchar()
    {
        cout<<"string is "<<ptr<<endl;
        cout<<"i="<<i<<endl;
    }
    
    ~scopy()    //Destructor
    {
        cout<<"destructor of "<<this<<"is called"<<endl;
    }
};

int main()
{
    scopy a;
    a.getchar();
    {
    scopy b=a;
    a.printchar();
    b.printchar();
    b.getchar();
    a.printchar();
    b.printchar();
    }
     a.printchar();  
}
