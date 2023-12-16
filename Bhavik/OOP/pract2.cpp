#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int total;
    int rollno;
    char name[10];
    char clas[5];
    char div[5];
    char dob[10];
    char blgroup[5];
    char contadd[20];
    char tlno[10];
    char dlno[20];
    static int count;
    friend int get_total_no();
    public:
        student()
            {
                rollno=2238;
                strcpy(name,"shubham");
                strcpy(clas,"SE");
                strcpy(div,"B");
                strcpy(dob,"30-11-2004");
                strcpy(blgroup,"B+ve");
                strcpy(contadd,"9267854320");
                strcpy(tlno,"02416784");
                strcpy(dlno,"263728597365");
                count++;
            }
       student(student &s1)
           {
               rollno=s1.rollno;
               strcpy(name,s1.name);
               strcpy(clas,s1.clas);
               strcpy(div,s1.div);
               strcpy(dob,s1.dob);
               strcpy(blgroup,s1.blgroup);
               strcpy(contadd,s1.contadd);
               strcpy(tlno,s1.tlno);
               strcpy(dlno,s1.dlno);
               count++;
           }
       void display()
           {
               cout<<"\n Roll No:"<<rollno<<"\n Name:"<<name;
               cout<<"\n Class:"<<clas<<"\n Division:"<<div;
               cout<<"\n Date Of Birth:"<<dob<<"\n Blood Group:"<<blgroup;
               cout<<"\n Contact Address:"<<contadd<<"\n Telephone No:"<<tlno;
               cout<<"\n Driving License No:"<<dlno;
           }
       void getdata()
           {
               cout<<"\n Roll No:";
               cin>>rollno;
               cout<<"\n Name:";
               cin>>name;
               cout<<"\n Class:";
               cin>>clas;
               cout<<"\n Division:";
               cin>>div;
               cout<<"\n Date Of Birth:";
               cin>>dob;
               cout<<"\n Blood Group:";
               cin>>blgroup;
               cout<<"\n Contact Address:";
               cin>>contadd;
               cout<<"\n Telephone No:";
               cin>>tlno;
               cout<<"\n Driving License No:";
               cin>>dlno;
               
           }
       static int countshow()
           {
               cout<<"\n No Of Students:"<<count;
               cout<<"\n";
           }
};
int student::count=0;

int get_total_no()
{
    student ob;
    cout<<"enter total no of students : "<<endl;
    cin>>ob.total;
    return ob.total;
}
int main()
{
  student s2,s3(s2);
  s2.display();
  s3.display();
  student::countshow();
  int n,i;
  student*p[10];
  n = get_total_no();
  for(i=0;i<n;i++)
  {
      p[i]=new student;
      p[i]->getdata();
  }
  for(i=0;i<n;i++)
  {
      p[i]->display();
  }
  return(0);
}