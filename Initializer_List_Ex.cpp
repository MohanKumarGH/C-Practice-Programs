
// initializing the data members of base class having parameterized constructor using(possible only) Initializer list. 
#include <iostream>
using namespace std;
class Base
{
    int a,b;
    public: Base(int x, int y): a(x), b(y)
			{
				//a=x;
				// b=y;
				cout<<"constructor of Base class called"<<endl;
			}
			// Base(){};
			void print()
			{
				cout<<"a="<<a<<" b="<<b<<endl;
			}
};

class Derived : public Base
{
    float x,y;
    public:Derived(int c, int d,float a, float b): Base(c,d),  x(a), y(b)
            {
                cout<<"constructor of Derived class called"<<endl;
            }
            //Derived(){};
			void print1()
			{
				cout<<"x="<<x<<" y="<<y<<endl;
			}
};

class Derived1 : public Derived
{
    char ch;
    public: Derived1(int c, int d, float a, float b, char e) :  Derived(c,d,a,b), ch(e)
            {
                //c=a;
                cout<<"constructor of Derived1 class called"<<endl;
            }
            void print2()
            {
                cout<<"ch="<<ch<<endl;
            }
            
};

int main() 
{
   Derived1 d(10,20,1.5f,2.5f,'M');
   d.print();
   d.print1();
   d.print2();
   Base ba(1000,2000);
   ba.print();
   Derived da(100,200,10.5f,20.15f);
   da.print();
   da.print1();
   return 0;
}