#include <iostream>
#include <string.h>
using namespace std;

class employee{
	int empno;
	char ename[30];
	float bonus;
	float basic;
	public:
		employee();
		employee(int,char*,float);
		void set_empno(int);
		void set_ename(char*);
		void set_basic(float);
		char * get_name();
		int get_empno();
		float get_basic();
		float cal_gross_sal();
};

employee::employee()
{
	basic=0.0;
	strcpy(ename,"\0");
	empno=0;
}

employee::employee(int a,char* name,float pay)
{
	empno=a;
	strcpy(ename,name);
	basic=pay;
}

void employee::set_empno(int a)
{
	empno=a;
}

void employee::set_ename(char* name)
{
	strcpy(ename,name);
}

void employee::set_basic(float pay)
{
	basic=pay;
}

int employee::get_empno()
{
	return empno;
}

float employee::get_basic()
{
	return basic;
}

char * employee::get_name()
{
	return ename;
}

float employee::cal_gross_sal()
{
	float num;
	if(basic<15000)
	{
		num=(22*basic)/100;
		bonus=basic+num;
	}
	else if((basic>15000)&&(basic<30000))
	{
		num=(30*basic)/100;
		bonus=basic+num;
	}
	else
	{
		bonus=basic+22000;
	}
	return bonus;
}

int main()
{
//	employee e1;
//	employee e2(357,"Sejal Nimkar",20000.0);
//	
//	e1.set_empno(134);
//	e1.set_ename("Shaunak Joshi");
//	e1.set_basic(35050.50);
//	
//	cout<<"\n Employee ID: "<<e1.get_empno();
//	cout<<"\n Employee name: "<<e1.get_name();
//	cout<<"\n Employee "<<e1.get_empno()<<" basic pay: "<<e1.get_basic();
//	cout<<"\n Employee"<<e1.get_empno()<<" bonus: "<<e1.cal_gross_sal();
//	
//	cout<<"\n";
//	cout<<"\n Employee ID: "<<e2.get_empno();
//	cout<<"\n Employee name: "<<e2.get_name();
//	cout<<"\n Employee "<<e2.get_empno()<<" basic pay: "<<e2.get_basic();
//	cout<<"\n Employee"<<e2.get_empno()<<" bonus: "<<e2.cal_gross_sal();

   employee  obj[5];
   int eno,i;
   char name[10];
   float pay;
   
   for(i=0;i<5;i++){
   	cout<<"\nEnter name: ";
   	cin>>name;
   	cout<<"\nEnter ID: ";
   	cin>>eno;
   	cout<<"\nEnter basic pay: ";
   	cin>>pay;
   	obj[i].set_empno(eno);
   	obj[i].set_ename(name);
   	obj[i].set_basic(pay);
   }
   cout<<" "<<endl;
   
   for(i=0;i<5;i++){
   	cout<<"\nEmployee name: "<<obj[i].get_name();
   	cout<<"\nEmployee basic pay: "<<obj[i].get_basic();
   	cout<<"\nEmployee bonus: "<<obj[i].cal_gross_sal();
   }
	
	return 0;
}
