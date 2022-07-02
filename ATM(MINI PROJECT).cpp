/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class ATM
{
	private:
		long int account_No;
		string name;
		int PIN;
		double balance;
		string mobile_No;
		
	public:
		void setData(long int account_No_a,string name_a,int PIN_a,double balance_a,string mobile_No_a)
		{
			account_No = account_No_a;
			name = name_a;
			PIN = PIN_a;
			balance = balance_a;
			mobile_No = mobile_No_a;
			
		}
		long int getaccountNo()
		{
			return account_No;
		}
		string getname()
		{
			return name;
		}
		int getPIN()
		{
			return PIN;
		}
		double getbalance()
		{
			return balance;
			
		}
		string getmobile_No()
		{
			return mobile_No;
		}
		void setmobile(string mob_prev, string mob_new)
		{
			if (mob_prev==mobile_No)
			{
				mobile_No = mob_new;
				cout<<endl<<"mobile number sucessfully updated";
				getch();
			}
			else
			{
				cout<<endl<<"incorrect old mobile number";
				getch();
			}
		}
		void cashwithdraw(int amount_a)
		{
			if (amount_a > 0 && amount_a < balance)
			{
				balance = balance - amount_a;
				cout<<endl<<"please collect your cash";
				cout<<endl<<"available balance: "<<balance;
				getch();
			}
			else
			{
				cout<<endl<<"invalid input or insufficient Balance";
				getch();
			}
		}
			
};



int main()
{
	int choice=0, enterpin;
	long int enteraccountnumber;
	
	system("cls");
	
	ATM user1;
	user1.setData(36517086031, "DAMON",1234,50000.50,"9042076991");
	
	do
	{
		system("cls");
		cout<<endl<<"*** welcome to ATM ***"<<endl;
		cout<<endl<<"enter your account number: ";
		cin>>enteraccountnumber;
		
		cout<<endl<<"enter your pin: ";
		cin>>enterpin;
		
		
		if (enteraccountnumber == user1.getaccountNo() && enterpin == user1.getPIN())
		{
			int amount=0;
			string oldmobileNO,newMobileNo;
			
			system("cls");
			cout<<endl<<"***welcome to ATM***" <<endl;
			cout<<endl<<" select option ";
			cout<<endl<<"1. Check Balance ";
			cout<<endl<<"2. cash withdraw ";
            cout<<endl<<"3. show user details ";
            cout<<endl<<"4. update mobile no.";
            cout<<endl<<"5.exit"<<endl;
            cin>>choice;
            
            switch(choice)
            {
            	case 1:
            	cout<<endl<<" your bank balance is: " << user1.getbalance();
            	getch();
            	break;
            	
            	case 2:
            		cout<<endl<<" enetr the amount: ";
            		cin>>amount;
            		user1.cashwithdraw(amount);
            		break;
            	
            	case 3:
            		cout<<endl<<" user details are :  " ;
            		cout<<endl<<" Account no : " << user1.getaccountNo();
            		cout<<endl<<" Name : " << user1.getname();
            		cout<<endl<<" Balance :  " << user1.getbalance();
            		cout<<endl<<" Mobile NO : " << user1.getmobile_No();
            		
            		getch();
            		break;
            		
            	case 4:
            		cout<<endl<<"enter old mobile number: ";
            		cin>>oldmobileNO;
            		
            		cout<<endl<<"enter NEW mobile number: ";
            		cin>>newMobileNo;
            		
            		user1.setmobile(oldmobileNO,newMobileNo);
            		break;
            		
            	case 5:
            		exit(0);
            		
            	default:
            		cout<<endl <<"enetr valid Data !";
            		
            		
            		
            	
            	
			}
			
		}
 
	
    else 
	{
	    cout<<endl<<"user details are invalid !";
	    getch();
	} 
	}while (1);
	
	return 0;
	
}