#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <climits>

using namespace std;

// Global Variables
int input_scr_1, accn_1 = INT_MAX, accn_2 = INT_MAX, accn_3 = INT_MAX;
string name_1, name_2, name_3, addr_1, addr_2, addr_3;
long con_1, con_2, con_3;
float balance_1, balance_2, balance_3;

// Global Functions
int scr_1(); int scr_2(); int account_1(); int account_2(); int account_3(); int enquiry_accn_1(); int enquiry_accn_2(); int enquiry_accn_3(); int input_scr_2(); int deposite_accn_1(); int deposite_accn_2(); int deposite_accn_3(); int scr_2_accn_3();

int scr_1()
{
	cout << endl;
	cout << "1 : Open new Account" << endl;
	cout << "0 : Exit" << endl;
	cout << endl;
	cout << ">> ";
	cin >> input_scr_1;
	cout << endl;

	if (input_scr_1 == 1)
	{
		if (accn_1 == INT_MAX)
		{
			account_1();
		}
		if (accn_2 == INT_MAX)
		{
			account_2();
		}
		if (accn_3 == INT_MAX)
		{
			account_3();
		}
	}
	else if (input_scr_1 == 0)
	{
		exit(0);
	}
	else
	{
		cout << "!! Invalid Input !!" << endl;
		scr_1();
	}

	return 0;
}

int account_1()
{
	cout << endl;

	cout << ">> Input Name :- ";
	cin.ignore();
	getline(cin, name_1);
	cout << ">> Input Address :- ";
	cin.ignore();
	getline(cin, addr_1);
	cout << ">> Input Contact :- ";
	cin >> con_1;
	cout << ">> Input Account Number :- ";
	cin >> accn_1;
	cout << ">> Input Opening Balance :- ";
	cin >> balance_1;

	cout << "Your Account has been added successfully !!" << endl;
	cout << "Account Number :- "<< accn_1 << endl;
	cout << "Balance :- " << balance_1 << endl;

	cout << endl;
	scr_2();

	return 0;
}

int account_2()
{
	cout << endl;
	cout << ">> Input Name :- ";
	cin.ignore();
	getline(cin, name_2);
	cout << ">> Input Address :- ";
	cin.ignore();
	getline(cin, addr_2);
	cout << ">> Input Contact :- ";
	cin >> con_2;
	cout << ">> Input Account Number :- ";
	cin >> accn_2;
	cout << ">> Input Opening Balance :- ";
	cin >> balance_2;

	cout << "Your Account has been added successfully !!" << endl;
	cout << "Account Number :- "<< accn_2 << endl;
	cout << "Balance :- " << balance_2 << endl;

	cout << endl;
	scr_2();

	return 0;
}

int account_3()
{
	cout << endl;

	cout << ">> Input Name :- ";
	cin.ignore();
	getline(cin, name_3);
	cout << ">> Input Address :- ";
	cin.ignore();
	getline(cin, addr_3);
	cout << ">> Input Contact :- ";
	cin >> con_3;
	cout << ">> Input Account Number :- ";
	cin >> accn_3;
	cout << ">> Input Opening Balance :- ";
	cin >> balance_3;

	cout << "Your Account has been added successfully !!" << endl;
	cout << "Account Number :- "<< accn_3 << endl;
	cout << "Balance :- " << balance_3 << endl;

	cout << endl;
	scr_2_accn_3();

	return 0;
}

int create_new()
{
	if (accn_2 == INT_MAX)
	{
		account_2();
	}
	if (accn_3 == INT_MAX)
	{
		account_3();
	}

	return 0;
}

int operate()
{
	cout << endl;
	cout << "Enter Account Number :- ";
	int acc_number;
	cin >> acc_number;
	cout << endl;

	if (acc_number == accn_1)
	{
		enquiry_accn_1();
	}
	else if (acc_number == accn_2)
	{
		enquiry_accn_2();
	}
	else if (acc_number == accn_3)
	{
		enquiry_accn_3();
	}
	else
	{
		cout << "!! No Such Account Exist !!" << endl;
		operate();
	}

	return 0;
}

int scr_2()
{
	int input_scr_2;

	cout << endl;
	cout << "1 : Add another Account" << endl;
	cout << "2 : Operate any particular account" << endl;
	cout << "0 : Exit" << endl;
	cout << ">> ";
	cin >> input_scr_2;
	cout << endl;

	if (input_scr_2 == 1)
	{
		create_new();
	}
	else if (input_scr_2 == 2)
	{
		operate();
	}
	else if (input_scr_2 == 0)
	{
		scr_1();
	}

	return 0;
}

int scr_2_accn_3()
{
	int input_scr_2;

	cout << endl;
	cout << "1 : Operate any particular account" << endl;
	cout << "0 : Exit" << endl;
	cout << ">> ";
	cin >> input_scr_2;
	cout << endl;

	if (input_scr_2 == 1)
	{
		operate();
	}
	else if (input_scr_2 == 0)
	{
		scr_1();
	}

	return 0;
}

int deposite_accn_1()
{
	int depo_amount;

	cout << endl;
	cout << "Amount to Deposite :- ";

	cin >> depo_amount;
	balance_1 += depo_amount;
	cout << endl << "New Balance is :- " << balance_1 << endl;

	return 0;
}

int deposite_accn_2()
{
	int depo_amount;

	cout << endl;
	cout << "Amount to Deposite :- ";

	cin >> depo_amount;
	balance_2 += depo_amount;
	cout << endl << "New Balance is :- " << balance_2 << endl;

	return 0;
}

int deposite_accn_3()
{
	int depo_amount;

	cout << endl;
	cout << "Amount to Deposite :- ";

	cin >> depo_amount;
	balance_3 += depo_amount;
	cout << endl << "New Balance is :- " << balance_3 << endl;

	return 0;
}

int withdraw_accn_1()
{
	int withd_amnt;
	cout << endl;
	cout << "Amount to Withdraw :- ";

	cin >> withd_amnt;

	if (withd_amnt > balance_1)
	{
		cout << endl << "!! Not enough credits !!" << endl;
	}
	else
	{
		balance_1 -= withd_amnt;
	}
	cout << endl << "Balance is :- " << balance_1 << endl;

	return 0;
}

int withdraw_accn_2()
{
	int withd_amnt;
	cout << endl;
	cout << "Amount to Withdraw :- ";

	cin >> withd_amnt;

	if (withd_amnt > balance_2)
	{
		cout << endl << "!! Not enough credits !!" << endl;
	}
	else
	{
		balance_2 -= withd_amnt;
	}
	cout << endl << "Balance is :- " << balance_2 << endl;

	return 0;
}

int withdraw_accn_3()
{
	int withd_amnt;
	cout << endl;
	cout << "Amount to Withdraw :- ";

	cin >> withd_amnt;

	if (withd_amnt > balance_2)
	{
		cout << endl << "!! Not enough credits !!" << endl;
	}
	else
	{
		balance_3 -= withd_amnt;
	}
	cout << endl << "Balance is :- " << balance_3 << endl;

	return 0;
}

int balance_enq_accn_1()
{
	cout << endl;
	cout << "Available Credits in Account Number " << accn_1 << " are :- " << balance_1 << endl;

	return 0;
}

int balance_enq_accn_2()
{
	cout << endl;
	cout << "Available Credits in Account Number " << accn_2 << " are :- " << balance_2 << endl;

	return 0;
}

int balance_enq_accn_3()
{
	cout << endl;
	cout << "Available Credits Of Account Number " << accn_3 << " are :- " << balance_3 << endl;

	return 0;
}

int accn_details_accn_1()
{
	cout << endl;
	cout << ">> Name : " << name_1 << endl;
	cout << ">> Address : " << addr_1 << endl;
	cout << ">> Cntact Number : " << con_1 << endl;
	cout << ">> Account Number : " << accn_1 << endl;
	cout << ">> Balance : " << balance_1 << endl;

	return 0;
}

int accn_details_accn_2()
{
	cout << endl;
	cout << ">> Name : " << name_2 << endl;
	cout << ">> Address : " << addr_2 << endl;
	cout << ">> Cntact Number : " << con_2 << endl;
	cout << ">> Account Number : " << accn_2 << endl;
	cout << ">> Balance : " << balance_2 << endl;


	return 0;}

int accn_details_accn_3()
{
	cout << endl;
	cout << ">> Name : " << name_3 << endl;
	cout << ">> Address : " << addr_3 << endl;
	cout << ">> Cntact Number : " << con_3 << endl;
	cout << ">> Account Number : " << accn_3 << endl;
	cout << ">> Balance : " << balance_3 << endl;

	return 0;
}

int enquiry_accn_1()
{
	cout << endl;
	cout << "1 : Deposit" << endl;
	cout << "2 : Withdraw" << endl;
	cout << "3 : Balance Enquiry" << endl;
	cout << "4 : Account Details" << endl;
	cout << "5 : Change Account" << endl;
	cout << "0 : Exit" << endl;
	cout << ">> ";

	int enq_input;
	cin >> enq_input;

	if (enq_input == 1)
	{
		deposite_accn_1();
		enquiry_accn_1();
	}
	else if (enq_input == 2)
	{
		withdraw_accn_1();
		enquiry_accn_1();
	}
	else if (enq_input == 3)
	{
		balance_enq_accn_1();
		enquiry_accn_1();
	}
	else if (enq_input == 4)
	{
		accn_details_accn_1();
		enquiry_accn_1();
	}
	else if (enq_input == 5)
	{
		operate();
	}
	else if (enq_input == 0)
	{
		scr_1();
	}

	return 0;
}

int enquiry_accn_2()
{
	cout << endl;
	cout << "1 : Deposit" << endl;
	cout << "2 : Withdraw" << endl;
	cout << "3 : Balance Enquiry" << endl;
	cout << "4 : Account Details" << endl;
	cout << "5 : Change Account" << endl;
	cout << "0 : Exit" << endl;
	cout << ">> ";

	int enq_input;
	cin >> enq_input;

	if (enq_input == 1)
	{
		deposite_accn_2();
		enquiry_accn_2();
	}
	else if (enq_input == 2)
	{
		withdraw_accn_2();
		enquiry_accn_2();
	}
	else if (enq_input == 3)
	{
		balance_enq_accn_2();
		enquiry_accn_2();
	}
	else if (enq_input == 4)
	{
		accn_details_accn_2();
		enquiry_accn_2();
	}
	else if (enq_input == 5)
	{
		operate();
	}
	else if (enq_input == 0)
	{
		scr_1();
	}

	return 0;
}

int enquiry_accn_3()
{
	cout << endl;
	cout << "1 : Deposit" << endl;
	cout << "2 : Withdraw" << endl;
	cout << "3 : Balance Enquiry" << endl;
	cout << "4 : Account Details" << endl;
	cout << "5 : Change Account" << endl;
	cout << "0 : Exit" << endl;
	cout << ">> ";

	int enq_input;
	cin >> enq_input;

	if (enq_input == 1)
	{
		deposite_accn_3();
		enquiry_accn_3();
	}
	else if (enq_input == 2)
	{
		withdraw_accn_3();
		enquiry_accn_3();
	}
	else if (enq_input == 3)
	{
		balance_enq_accn_3();
		enquiry_accn_3();
	}
	else if (enq_input == 4)
	{
		accn_details_accn_3();
		enquiry_accn_3();
	}
	else if (enq_input == 5)
	{
		operate();
	}
	else if (enq_input == 0)
	{
		scr_1();
	}

	return 0;
}

int main()
{
	scr_1();
	return 0;
}
