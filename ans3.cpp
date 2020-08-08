#include<iostream>
#include<stdio.h>
using namespace std;

class account {
private:
	int accountBalance;
public:
	account(int balance) {
		if (balance > 0)
		{
			accountBalance = balance;
		} else {
			cout << "Balance can't be negative.. setting it to zero \n";
			balance = 0;
			accountBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;

	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
#endif
*/
	int openBalance;
	cout << "enter the amount you want to start rich account with? \n";
	cin >> openBalance;
	account rich(openBalance);
	int paisa;
	cout << "enter the amount you want to add in rich's account? \n";
	cin >> paisa;
	rich.Credit(paisa);
	cout << rich.getBalance() << "\n";
	double paisa1 ;
	cout << "enter the amount you want to removein rich's account? \n";
	cin >> paisa1;
	rich.Debit(paisa1);
	cout << rich.getBalance() << "\n";
	cout << "enter the amount you want to start aayushi account with? \n";
	cin >> openBalance;
	account aayushi(openBalance);
	cout << "enter the amount you want to add in aayushi's account? \n";
	cin >> paisa;
	aayushi.Debit(paisa);
	cout << aayushi.getBalance() << "\n";
	cout << "enter the amount you want to removein aayushi's account? \n";
	cin >> paisa1;
	aayushi.Debit(paisa1);
	cout << aayushi.getBalance() << "\n";






	return 0;
}
