#include <iostream>
//#include <new>
#include <string.h>
using namespace std;

class scopy
{
    int i;
	char *ptr;
    //char *ptr=new char[10];
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
    
    scopy() //default constructor.
    {
		ptr=new char[10];
    }
    
    scopy(scopy &obj)
    {
        i=obj.i;
        ptr=new char[10];
       /* for(int i=0;obj.ptr[i];i++)    //copy string by own
        {
        ptr[i]=obj.ptr[i];
        }*/
        strcpy(ptr, obj.ptr);
        cout<<"copy constructor called"<<endl;
    }
    
    ~scopy()    //Destructor
    {
		delete [] ptr;
        cout<<"destructor of "<<this<<"is called"<<endl;
    }
};

int main()
{
    scopy a;
    a.getchar();
    a.printchar();
    {
    scopy b=a;
    b.printchar();
    b.getchar();
    a.printchar();
    b.printchar();
    }
     a.printchar();  
}
