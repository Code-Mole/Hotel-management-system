#include<iostream>
using namespace std;

int main()
{
	int quant;
	int choice;
	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
	int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
	int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;
	
	
	cout<<"\n\t Quantity of items we have!";
	cout<<"\n Rooms available : ";
	cin>>Qrooms;
	cout<<"\n Quantity of pasta : ";
	cin>>Qpasta;
	cout<<"\n Quantity of burger : ";
	cin>>Qburger;
	cout<<"\n Quantity of noodles : ";
	cin>>Qnoodles;
	cout<<"\n Quantity of shake : ";
	cin>>Qshake;
	cout<<"\n Quantity of chicken : ";
	cin>>Qchicken;
	
	m:
	cout<<"\n\t\t\t Please select from menu options!";
	cout<<"\n 1.Rooms";
	cout<<"\n 2.Pasta";
	cout<<"\n 3.Burger";
	cout<<"\n 4.Noodles";
	cout<<"\n 5.Shake";
	cout<<"\n 6.Chicken";
	cout<<"\n 7.Information about sales and collections";
	cout<<"\n 8.Exit";
	
	cout<<"\n\t\t Enter your choice! ";
	cin>>choice;
	
	switch (choice)
	{
		case 1:
			cout<<"\n\n\t\t Enter the numbers of rooms you want ";
			cin>>quant;
			
			if(Qrooms-Srooms>=quant )
			{
				Srooms=Srooms+quant;
				Total_rooms=Total_rooms+quant*100;
				cout<<"\n\n\t\t "<<quant<<" room/rooms have been allotted to you";
				
			}
			else
			    
			    cout<<"\n\n Only "<<Qrooms-Srooms<< " Rooms remaining in the Hotel";
			    break;
			    
		case 2:
			cout<<"\n\n\t\t Enter the quantity of pasta you want ";
			cin>>quant;
			
			if(Qpasta-Spasta>=quant )
			{
				Spasta=Spasta+quant;
				Total_pasta=Total_pasta+quant*100;
				cout<<"\n\n\t\t"<<quant<<"Pasta is the order";
				
			}
			else
			    
			    cout<<"\n\n Only "<<Qpasta-Spasta<< " pasta remaining in the Hotel";
			    break;
				
    	case 3:
			cout<<"\n\n\t\t Enter the quantity of Burger you have ";
			cin>>quant;
			
			if(Qburger-Sburger>=quant )
			{
				Sburger=Sburger+quant;
				Total_burger=Total_burger+quant*10;
				cout<<"\n\n\t\t"<<quant<<" burger is the order";
				
			}
			else
			    
			    cout<<"\n\n Only "<<Qburger-Sburger<< " burger remaining in the Hotel";
			    break;
			    
		case 4:
			cout<<"\n\n\t\t Enter the quantity of Noodles you have ";
			cin>>quant;
			
			if(Qnoodles-Snoodles>=quant )
			{
				Snoodles=Snoodles+quant;
				Total_noodles=Total_noodles+quant*30;
				cout<<"\n\n\t\t"<<quant<<" noodles is the order";
				
			}
			else
			    
			    cout<<"\n\n Only "<<Qnoodles-Snoodles<< " Noodles remaining in the Hotel";
			    break;
			    
		case 5:
			cout<<"\n\n\t\t Enter the quantity of shake you have ";
			cin>>quant;
			
			if(Qshake-Sshake>=quant )
			{
				Sshake=Sshake+quant;
				Total_shake=Total_shake+quant*20;
				cout<<"\n\n\t\t"<<quant<<" shake is the order";
				
			}
			else
			    
			    cout<<"\n\n Only "<<Qshake-Sshake<< " shake remaining in the Hotel";
			    break;
			    
		case 6:
			cout<<"\n\n\t\t Enter the quantity of chicken you have ";
			cin>>quant;
			
			if(Qchicken-Schicken>=quant )
			{
				Schicken=Schicken+quant;
				Total_chicken=Total_chicken+quant*50;
				cout<<"\n\n\t\t"<<quant<<" chicken is the order";
				
			}
			else
			    
			    cout<<"\n\n Only "<<Qchicken-Schicken<< " chicken remaining in the Hotel";
			    break;
			    
		case 7:
			cout<<"\n\n\t\t Details of sales and collections";
			
			cout<<"\n Number of rooms we had : "<<Qrooms;
			cout<<"\n Number of rooms we gave for rent : "<<Srooms;
			cout<<"\n Number of rooms remaining : "<<Qrooms-Srooms;
			cout<<"\n Total rooms collections : "<<Total_rooms;
			
				cout<<"\n Number of pasta we had : "<<Qpasta;
			cout<<"\n Number of pasta we gave for rent : "<<Spasta;
			cout<<"\n Number of pasta remaining : "<<Qpasta-Spasta;
			cout<<"\n Total pasta collections : "<<Total_pasta;
			
				cout<<"\n Number of burger we had : "<<Qburger;
			cout<<"\n Number of burger we gave for rent : "<<Sburger;
			cout<<"\n Number of burger remaining : "<<Qburger-Sburger;
			cout<<"\n Total burger collections : "<<Total_burger;
			
				cout<<"\n Number of noodles we had : "<<Qnoodles;
			cout<<"\n Number of noodles we gave for rent : "<<Snoodles;
			cout<<"\n Number of noodles remaining : "<<Qnoodles-Snoodles;
			cout<<"\n Total noodles collections : "<<Total_noodles;
			
				cout<<"\n Number of shake we had : "<<Qshake;
			cout<<"\n Number of shake we gave for rent : "<<Sshake;
			cout<<"\n Number of shake remaining : "<<Qshake-Sshake;
			cout<<"\n Total shake collections : "<<Total_shake;
			
				cout<<"\n Number of chicken we had : "<<Qchicken;
			cout<<"\n Number of chicken we gave for rent : "<<Schicken;
			cout<<"\n Number of chicken remaining : "<<Qchicken-Schicken;
			cout<<"\n Total chicken collections : "<<Total_chicken;
			
			cout<<"\n\n\t\t Overall total of collections "<<Total_chicken + Total_noodles+Total_shake+Total_burger+Total_pasta+Total_rooms;
			break; 
			
			case 8:
				exit(0);
			    default:
					cout<<"\n Please enter the numbers mentioned above!";
	}
	goto m;
	
	
	
}
