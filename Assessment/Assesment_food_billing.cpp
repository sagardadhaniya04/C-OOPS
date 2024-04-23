//create a food billing by oop programing................
#include<iostream>

using namespace std;

class Fooditem
{
	private:
		int mainchoice,subchoice,total,Quantity,yn;
		string name;
		
		
	public:
		
		void getdata()
		{
			cout<<"\n\n\t--------------- Tops Tech. Fast Food ---------------";
			cout<<"\n\n\t Please Enter your name:";
			cin>>name;
			cout<<"\n\n\t Hello "<<name<<".....";
			cout<<"\n\n\t What would you like to order?";
			cout<<"\n\n\t--------- Menu ----------";
			cout<<"\n\t 1)pizzas";
			cout<<"\n\t 2)Burger";
			cout<<"\n\t 3)Sandwich";
			cout<<"\n\t 4)Rolls";
			cout<<"\n\t 5)Biryani";
			cout<<"\n\n\t-------------------";
			
			
			cout<<"\n\n\t Please enter your choice:";
			cin>>mainchoice;
			
			switch(mainchoice)
			{
				case 1:
					cout<<"\n\t 1.Cheese Pizza Rs.360";
					cout<<"\n\t 2.Margherita Pizza Rs.400";
					cout<<"\n\t 3.Pepperoni Pizza Rs.460";
					cout<<"\n\n\t Please enter which pizza you would like to have? :";
					cin>>subchoice;
					switch(subchoice)
					{
						case 1: 
						      cout<<"\n\n\t 1.Cheese Pizza Rs.360";
						      break;
						case 2:
							  cout<<"\n\t 2.Margherita Pizza Rs.400";
							  break;
						case 3:
							  cout<<"\n\t 3.Pepperoni Pizza Rs.460";
							  break;
						default:
							  cout<<"\n\t Please enter valid number.....";
							
					}
					cout<<"\n\n\t Please enter Quantity:";
					cin>>Quantity;
					switch(subchoice)
					{
						case 1:
							
							
							
							cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t  1.Cheese Pizza  ";
							cout<<"\n\n\t Your total bill is:"<<Quantity*360;
							break;
						case 2:
							cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t 2.Margherita Pizza  ";
						     cout<<"\n\n\t Your total bill is:"<<Quantity*400;
						    break;
						case 3:
							cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t 3.Pepperoni Pizza  ";
							cout<<"\n\n\t Your total bill is:"<<Quantity*460;
							break;
						default:
							cout<<"\n\n\t Please Enter valid number.....";
					}
					break;
					
				case 2:
					cout<<"\n\n\t 1.Cheesy Italian Veg Burger Rs.299";
					cout<<"\n\t 2.Corn & Cheese Burger Rs.250";
					cout<<"\n\t 3.Piri Piri Spicy Paneer Burger Rs.199";
					cout<<"\n\n\t Please enter which burger you would like to have? :";
					cin>>subchoice;
					switch(subchoice)
					{
						case 1: 
						      cout<<"\n\n\t 1.Cheesy Italian Veg Burger Rs.299";
						      break;
						case 2:
							  cout<<"\n\t 2.Corn & Cheese Burger Rs.250";
							  break;
						case 3:
							  cout<<"\n\t 3.Piri Piri Spicy Paneer Burger Rs.199";
							  break;
						default:
							  cout<<"\n\t Please enter valid number.....";
							
					}
					cout<<"\n\n\t Please enter Quantity:";
					cin>>Quantity;
						switch(subchoice)
					{
						case 1:
							cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t  1.Cheesy Italian Veg Burge ";
							cout<<"\n\n\t Your total bill is:"<<Quantity*299;
							break;
						case 2:
							cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t  2.Corn & Cheese Burger ";
						     cout<<"\n\n\t Your total bill is:"<<Quantity*250;
						    break;
						case 3:
							cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t  3.Piri Piri Spicy Paneer Burger ";
							cout<<"\n\n\t Your total bill is:"<<Quantity*199;
							break;
						default:
							cout<<"\n\n\t Please Enter valid number.....";
					}
					break;
					
				case 3:
					cout<<"\n\n\t 1.pineapple cheese sandwich Rs.160";
					cout<<"\n\t 2.chocolate sandwich Rs.110";
					cout<<"\n\t 3.club sandwich Rs.210";
					cout<<"\n\n\t Please enter wihch sandwich you would like to have? :";
					cin>>subchoice;
						switch(subchoice)
					{
						case 1: 
						      cout<<"\n\n\t 1.pineapple cheese sandwich Rs.160";
						      break;
						case 2:
							  cout<<"\n\t 2.chocolate sandwich Rs.110";
							  break;
						case 3:
							  cout<<"\n\t 3.club sandwich Rs.210";
							  break;
						default:
							  cout<<"\n\t Please enter valid number.....";
							
					}
					
					cout<<"\n\n\t Please enter Quantity:";
					cin>>Quantity;
						switch(subchoice)
					{
						case 1:
							cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t  1.pineapple cheese sandwich ";
							cout<<"\n\n\t Your total bill is:"<<Quantity*160;
							break;
						case 2:
								cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t  2.chocolate sandwich ";
						     cout<<"\n\n\t Your total bill is:"<<Quantity*110;
						    break;
						case 3:
							cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t 3.club sandwich  ";
							cout<<"\n\n\t Your total bill is:"<<Quantity*210;
							break;
						default:
							cout<<"\n\n\t Please Enter valid number.....";
					}
					break;
					
				case 4:
					cout<<"\n\n\t 1.Cheese Roll Rs.100";
					cout<<"\n\t 2.peri peri paneer roll Rs.150";
					cout<<"\n\t 3.corn chees roll Rs.170";
					cout<<"\n\n\t Please enter which roll you would like to have? :";
					cin>>subchoice;
						cin>>subchoice;
						switch(subchoice)
					{
						case 1: 
						      cout<<"\n\n\t1.Cheese Roll Rs.100";
						      break;
						case 2:
							  cout<<"\n\t 2.peri peri paneer roll Rs.150";
							  break;
						case 3:
							  cout<<"\n\t 3.corn chees roll Rs.170";
							  break;
						default:
							  cout<<"\n\t Please enter valid number.....";
							
					}
					
					cout<<"\n\n\t Please enter Quantity:";
					cin>>Quantity;
						switch(subchoice)
					{
						case 1:
							cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t  1.Cheese Roll ";
							cout<<"\n\n\t Your total bill is:"<<Quantity*100;
							break;
						case 2:
							cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t  2.peri peri paneer roll ";
						     cout<<"\n\n\t Your total bill is:"<<Quantity*150;
						    break;
						case 3:
								cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t  3.corn chees roll  ";
							cout<<"\n\n\t Your total bill is:"<<Quantity*170;
							break;
						default:
							cout<<"\n\n\t Please Enter valid number.....";
					}
					break;
					
				case 5:
					cout<<"\n\n\t 1.Kolkata biryani Rs.440";
					cout<<"\n\t 2.Lucknowi biryani Rs.350";
					cout<<"\n\t 3.paneer biryani Rs.490";
					cout<<"\n\n\t Please enter which biryani you would like to have?:";
					cin>>subchoice;
						switch(subchoice)
					{
						case 1: 
						      cout<<"\n\n\t1.Kolkata biryani Rs.440";
						      break;
						case 2:
							  cout<<"\n\t 2.Lucknowi biryani Rs.350";
							  break;
						case 3:
							  cout<<"\n\t 3.paneer biryani Rs.490";
							  break;
						default:
							  cout<<"\n\t Please enter valid number.....";
							
					}
					cout<<"\n\n\t Please enter Quantity:";
					cin>>Quantity;
						switch(subchoice)
					{
						case 1:
							cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t 1.Kolkata biryani ";
							cout<<"\n\n\t Your total bill is:"<<Quantity*440;
							break;
						case 2:cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t 2.Lucknowi biryani ";
						     cout<<"\n\n\t Your total bill is:"<<Quantity*350;
						    break;
						case 3:
							cout<<"\n\n\t -------------your order------------";
							cout<<"\n\n\t 3.paneer biryani";
							cout<<"\n\n\t Your total bill is:"<<Quantity*490;
							break;
						default:
							cout<<"\n\n\t Please Enter valid number.....";
					}
					break;
					
				default :
				     cout<<"\n\n\t Please enter between 1 to 5....";
				
					
			}
			
		}
		
		  	void putdata()
			{
				cout<<"\n\n\t Your order will be delivered in 20 minitues. ";
				cout<<"\n\n\t Thankyou for ordering from Tops Tech. Fast Food.";
				cout<<"\n\n\t Would you like to order anything else?:";
				cin>>yn;
			}
			
};

main()
{
	Fooditem FI;
	
	FI.getdata();
	FI.putdata();

}
