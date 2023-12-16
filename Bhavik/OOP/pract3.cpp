#include<iostream>
using namespace std;
class publications
    {
    public :
    char title[10];
    float price;
    int pgcount;
    float playtime;
    void getdata()
    {
        cout<<"Enter the title :";
        cin>>title;
        cout<<"Enter the price :";
        cin>>price;
    }
   
    void display()
    {
        cout<<"\n Title : "<<title;
        cout<<"\n Price : "<<price;
        cout<<"\n Page-count of the book is "<<pgcount;
        }
    void display_1()
    {
        cout<<endl;
        cout<<" \n Title : "<<title;
        cout<<"\n Price : "<<price;
        cout<<" \n Playing-time : "<<playtime;
        cout<<endl;
    }
    };
class books : public publications
    {
    public :
    books()
    {
        getdata();
        cout<<"Page count :";
        cin>>pgcount;
        }
    };
class casette : public publications 
    {
    public :
    casette()
    {
        getdata();
        cout<<"enter playing time of casette :";
        cin>>playtime; 
        }
    };
int main()
{
     books b1;
     casette c1;
     b1.display();
     c1.display_1();
     return(0);
}