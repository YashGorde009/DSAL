#include<iostream>
using namespace std; 

class complex
{	public:
	int real,imag;
	complex()
	{
		real=0;
		imag=0;
	}
	void display()
      {  cout<<"\n\n The complex number is ";
         cout<<"\n"<<real<<"+"<<imag<<"i \n";
      }
     
     
    complex operator *(complex b2)
      {
           complex b3;
           b3.real=(real*b2.real)-(imag*b2.imag);
           b3.imag=(real*b2.imag)+(imag*b2.real);
           return b3;
      }  
    
    
    complex operator +(complex b2)
      {
           complex b3;
           b3.real=real+b2.real;
           b3.imag=imag+b2.imag;
           return b3;
      }
      
        
      friend istream &operator >>(istream &input,complex &t);
      friend ostream &operator <<(ostream &output,complex &t); 
      
    

};



istream &operator>>(istream &is,complex &b)
{

    cout<<"\n Enter the real number:";
    is>>b.real;
    cout<<"\nEnter the imaginary number:";
    is>>b.imag;
    return is;
}

ostream &operator<<(ostream &os,complex &b)
{
   
   os<<b.real<<"+"<<b.imag<<"i\n";
   return os;
}

int main()
{
  int ch;
  complex b,b1,b2,b3;
 
  b.display();
 do{cout<<"Select any action \n";
 cout<<"1=Enter the numbers \n 2=Display Addition\n 3=Display Subtraction \n 4.Exit";
 cin>>ch;
 switch (ch)
  {
   case 1 : 
   cout<<"Enter first complex number ";  
   cin>>b1;
   cout<<"Enter second complex number ";
   cin>>b2;
   cout<<"Complex number 1 "<<b1;
   cout<<"\nComplex number 2 "<<b2;
   break;
   case 2 :   
   b3=b1+b2;
   cout<<"\nAddition is "<<b3;
   break;
   case 3 :   
   b3=b1*b2;
   cout<<"Multiplication is "<<b3;
   break;
  }
  }while(ch<=4);
  
} 
