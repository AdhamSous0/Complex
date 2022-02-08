#include<iostream>
#include <sstream> 
using namespace std;
 class Complex {
  private:
   float    rp;          
   float    ip;          
  public:
	  float real  () {return    rp;}
 float  imag()  {return   ip;}
	  ~Complex(){}
	Complex(){
		rp=0.0;
		ip=0.0;
	}
	Complex(float a,float b){
	rp=a;
	ip=b;
	
	}
	Complex(float r){
		rp=r;
		ip=0;
		
	}
	friend ostream& operator<<( ostream& out, const Complex & dt){
		out<<dt.rp<<"+"<<dt.ip<<"i";
		return out;
	}
	friend istream& operator>>(istream &inpte, Complex  &dt){
inpte >> dt.rp >> dt.ip;
 return inpte;
}
	Complex operator=(const  Complex & dt){
		rp=dt.rp;
		ip=dt.ip;
	}
	Complex(Complex&dt){
		rp=dt.rp;
		ip=dt.ip;}
stringstream toString(){
	
		stringstream p;
		 p<<(rp)<<"+"<<(ip)<<"i";
		
		return p; 
	}  


		  };
 void main(){
Complex a(3 , 4);
    Complex d(2);
  Complex  dt;
       cin>>dt;
       cout << a.toString() << "  " << d .toString()<< endl;    //  prints:    3+4i                  2+0i
       cout<<a<<"   "<<d<<endl;    //  prints:    3+4i                  2+0

 }