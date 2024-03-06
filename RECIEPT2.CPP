 #include<iostream>
 #include<fstream>
using namespace std;

       int balance=5000,pincd;
       char name[20], accno[20],ifsc[10],acctype[15];
       int ch,amnt;


void details()
{
  char yesNo;
	cout<<"\n\tenter user's Name :";
	cin>>name;
	cout<<"\n\tenter user's account number :";
	cin>>accno;
	cout<<"\n\tenter user's IFSC :";
	cin>>ifsc;
	cout<<"\n\tenter user's account type :";
	cin>>acctype;

//chices
    cout<<"\tpress 1: Deposite"<<endl;
    cout<<"\tpress 2: Withdraw"<<endl;
	cout<<"\tpress 3: Check balance"<<endl;
    repeate1:
    cout<<"\n\tenter your choise :";
    cin>>ch;
    switch(ch)
    {
//deposits		
      case 1:
      repeate2:
	 cout<<"\n\tenter pincode :";
	 cin>>pincd;
	 if(pincd==7457)
	  {
	    cout<<"\n\tenter amount :";
	    cin>>amnt;
	    balance=balance+amnt;

	  }
	 else
	     {  
		 cout<<"\n\twrong pincode...";

		 cout<<"\n\ttry again press 'Y' otherwise press any key to exit :";
		 cin>>yesNo;
	       if(yesNo=='Y'|| yesNo=='y')
		{
		   goto repeate2;
		}

	       else
		  {
		    exit(0);
		  }

	      }
	   break;

//withdrawal	   
      case 2:
       repeate3:
	  cout<<"\n\tenter pincode :";
	  cin>>pincd;
	 if(pincd==4545)
	  {
	     cout<<"\n\tenter amount :";
	     cin>>amnt;
	     balance=balance-amnt;
	  }
	 else
	    {
		cout<<"\n\twrong pincode..."<<endl;
		cout<<"\n\ttry again press 'Y' otherwise press any key to exit :";
		cin>>yesNo;
	       if(yesNo=='Y'|| yesNo=='y')
		{
		   goto repeate3;
		}

	       else
		  {
			   exit(0);
		  }

	    }

//check balance
          case 3:
       repeate4:
	  cout<<"\n\tenter pincode :";
	  cin>>pincd;
	 if(pincd==4545)
	  {
	     
	     cout<<"\n Balamce is: "<<balance;
	  }
	 else
	    {
		cout<<"\n\twrong pincode..."<<endl;
		cout<<"\n\ttry again press 'Y' otherwise press any key to exit :";
		cin>>yesNo;
	       if(yesNo=='Y'|| yesNo=='y')
		{
		   goto repeate3;
		}

	       else
		  {
			   exit(0);
		  }

	    }

	break;
      default:
	 cout<<"\n\tinvalide choice... ";
	 goto repeate1;
    }

}

void recie()
{
cout<<"\n\n";
cout<<"\t\t\t\t"<<"Reciept"<<endl;
cout<<"\t------------------------------------------------------------------"<<endl;
cout<<"\t\t"<<__DATE__<<"\t\t"<<__TIME__<<endl;
cout<<"\n";
cout<<"\t\t"<<"your name :"<<name <<"\t\t"<<"Account number :"<<accno<<endl;
cout<<"\n";
cout<<"\t\t"<<"IFSC code :"<<ifsc <<"\t\t"<<"Account type :"<<acctype<<endl;
//cout<<"\n";

	if(ch==1)
	{
	cout<<"\t\t"<<"Deposite :"<<amnt <<"\t\t"<<"Available balance :"<<balance<<endl;
    }
    else
    {
	cout<<"\n";
	cout<<"\t\t"<<"Deposite :"<<"\t\t 'Did not deposite'"<<endl;
    }

    if(ch==2)
    {
	cout<<"\n";
	cout<<"\t\t"<<"Withdraw :"<<amnt<<"\t\t"<<"Available balance :"<<balance<<endl;
    }
   else
   {
	cout<<"\n";
	cout<<"\t\t"<<"withdraw :"<<"\t\t 'Did not withdraw'"<<endl;
    }

    if(ch==3)
	{
		cout<<"\n";
		cout<<"\t\t"<<"Balance:"<<balance;
	}
	else
	{
		cout<<"";
	}
}

int main()
{
	
 ofstream of;
 of.open("C:/Users/HP/Desktop/New folder.txt");
  details();
  cout<<"\n\tDone !....";
 
  recie();
  of.close();
 
  return 0;
}