#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	//Initializing Variables
	int Money = 0, CoinsOf5 = 0, CoinsOf2 = 0, CoinsOf1 = 0, MoneyOfCoins = 0, CountOf5 = 0, CountOf2 = 0, CountOf1 = 0;

	//Taking Input
	cout << "Please Enter The Amount Of Money:- ";
	cin >> Money;
	cout << "Please Enter The Number Of Coins Of 5:- ";
	cin >> CoinsOf5;
	cout << "Please Enter The Number Of Coins Of 2:- ";
	cin >> CoinsOf2;
	cout << "Please Enter The Number Of Coins Of 1:- ";
	cin >> CoinsOf1;

	//Counting Total Money
	MoneyOfCoins = (CoinsOf5 * 5) + (CoinsOf2 * 2) + (CoinsOf1 * 1);

	//Checking If Enough Coins Are Avaiable
	if (MoneyOfCoins >= Money)
	{
		//Checking Whether Coins Of 5 Are Available Or Not
		if (CoinsOf5>0)
		{
			//Loop To Count Number Of Maximum Coins Of 5 That Could Be Used To Make Combination
			while (Money >= 5 && CoinsOf5>0)
			{
				CountOf5++;
				CoinsOf5--;
				Money = Money - 5;
			}
			cout << "\nThe Number Of Coins Used Of 5 Is " << CountOf5 << endl;
		}

		//Checking Whether Coins Of 2 Are Available Or Not
		if (CoinsOf2>0)
		{
			//Loop To Count Number Of Maximum Coins Of 2 That Could Be Used To Make Combination
			while (Money >= 2 && CoinsOf2>0)
			{
				Money = Money - 2;
				CoinsOf2--;
				CountOf2++;
			}
			cout << "The Number Of Coins Used Of 2 Is " << CountOf2 << endl;
		}

		//Checking Whether Coins Of 1 Are Available Or Not
		if (CoinsOf1>0)
		{
			//Loop To Count Number Of Maximum Coins Of 1 That Could Be Used To Make Combination
			while (Money>0 && CoinsOf1>0)
			{
				Money = Money - 1;
				CoinsOf1--;
				CountOf1++;
			}
			cout << "The Number Of Coins Used Of 1 Is " << CountOf1 << endl;
		}
	}
	else
	{
		cout << "Not Enough Coins";
	}

	//Checking If Money is Still Left Or Not
	if (Money != 0)
	{
		cout << "The Remaining Money " << Money << " Can Not Be Divided Futher.";
	}

	_getch();
}
