#include<iostream>
const double pi=3.14;
using namespace std;
class circle
{
    public:
  	int m_r;
  	double c()
  	{
  		return 2*pi*m_r;
	  }
};
int main(){
	circle c1;
	c1.m_r=10;
	cout<<"园的周长为"<<c1.c()<<endl;
}
