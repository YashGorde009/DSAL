#include<iostream>
#include<fstream>
using namespace std;
class student
{
    public:
    int roll;
    char name[20];
    char std[10];

    void getdata()
    {
        cout<<"Enter the name of student :";
        cin>>name;
        cout<<"Enter the roll no :";
        cin>>roll;
        cout<<"Enter std :";
        cin>>std;
    }
    void display()
    {
        cout<<"Name of student :"<<name;
        cout<<"\nRoll no of student :"<<roll;
        cout<<"\nStandard "<<std<<endl;
        cout<<"\n\n";
    }
    
};
int main()
{
    int n,num,pos;
    student s1;
    cout<<"Enter total no of student entries :";
    cin>>n;
    ofstream out("a");


    for(int i=0;i<=n-1;i++)
    {
        s1.getdata();
        out.write((char*)& s1,sizeof(s1));
    }
    out.close();
    

    ifstream in("a");
    for(int i=0;i<=n-1;i++)
    {
        in.read((char*)&s1,sizeof(s1));
        s1.display();
    }
    in.close();


    ifstream fin("a");
    
    cout<<"\n\nEnter no of employee you want to search :";
    cin>>num;

    pos=(num-1)*sizeof(s1);
    fin.seekg(pos);
    fin.read((char*)&s1,sizeof(s1));
    s1.display();

    fin.close();

}