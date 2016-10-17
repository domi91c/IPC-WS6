/*/*
== Banking - Savings Account ==

Author	:
Date	:
Revision:
Workshop: #6 At-Home

*/

#include <stdio.h>


// Structure Declaration for account
struct account
{
	int accNumber;				// Account number
	double balance;				// Balance of the account
};

/*  Function to add an amount if positive-valued */
//

/* Function to calculate the interest rate*/
//

/* Function to deduct an amount if positive-valued*/
//

/* main program */
int main()
{
	const int nosClients = 5;							// Number of accounts
	int option;											// Hold the selection
														// Initialize the struct account array with opening balance
	struct account acct[] = { { 11111111, 123.45 },{ 22222222, 12365.50 },{ 33333333,0 },{ 44444444,1475 },{ 55555555,25000.65 } };

	printf("***** Welcome to Savings Account Banking *****\n\n");

	do
	{
		// Print the option list
		printf("1.) Deposit \n");
		printf("2.) Withdraw\n");
		printf("3.) Apply monthly interest earnings to all accounts\n");
		printf("4.) Apply service charges to all accounts\n");
		printf("5.) Account Summary\n");
		printf("0.) Log out\n\n");
		printf("Please enter an option to continue: ");
		
		// Waiting for the input
		scanf("%d",&option);


		switch (option)
		{
		case 0: // Exit the program
			break;

		case 1: // Deposit
				//@IN-LAB				


			break;

		case 2: // Withdraw funds
				//@HOME


			break;

		case 3: // Apply interest earnings to all accounts
				//@IN-LAB


			break;

		case 4: // Apply Service Charges
				//@HOME


			break;

		case 5: // Display Account Information
				//@IN-LAB


			break;

		default:
			printf("Error: Please enter a valid option to continue\n\n");
			break;
		}


	} while (option != 0);


	return 0;
}


/* SAMPLE INPUT/OUTPUT EXPECTED */
/*
***** Welcome to Savings Account Banking *****

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 5

-- Account information --

Account# Balance
-------- ----------
11111111     123.45
22222222   12365.50
33333333       0.00
44444444    1475.00
55555555   25000.65

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 1

-- Make a deposit --

Enter account number: 44444444
Enter amount to deposit (CAD): 20
Current balance is : 1495.00

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 1

-- Make a deposit --

Enter account number: 11111111
Enter amount to deposit (CAD): 450.67
Current balance is : 574.12

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 5

-- Account information --

Account# Balance
-------- ----------
11111111     574.12
22222222   12365.50
33333333       0.00
44444444    1495.00
55555555   25000.65

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 3

-- Add monthly interest earnings to all accounts --

Account# New Balance Interest Earnings (M)
-------- ----------- ---------------------
11111111      583.65                  9.53
22222222    12673.40                307.90
33333333        0.00                  0.00
44444444     1519.82                 24.82
55555555    25623.17                622.52

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 5

-- Account information --

Account# Balance
-------- ----------
11111111     583.65
22222222   12673.40
33333333       0.00
44444444    1519.82
55555555   25623.17

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 2

-- Withdraw funds --

Enter account number: 67676767
ERROR: Account number does not exist.

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 2

-- Withdraw funds --

Enter account number: 11111111
Enter amount to withdraw (CAD): 250
Current balance is : 333.65

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 2

-- Withdraw funds --

Enter account number: 33333333
Enter amount to withdraw (CAD): 4500.56
Withdrawal failed. You only have : 0.00 in your account

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 2

-- Withdraw funds --

Enter account number: 55555555
Enter amount to withdraw (CAD): 6200.40
Current balance is : 19422.77

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 5

-- Account information --

Account# Balance
-------- ----------
11111111     333.65
22222222   12673.40
33333333       0.00
44444444    1519.82
55555555   19422.77

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 4

-- Apply service charges to all accounts --

Account# New Balance Service charges (M)
-------- ----------- -------------------
11111111      326.15                7.50
22222222    12670.90                2.50
33333333       -7.50                7.50
44444444     1517.32                2.50
55555555    19420.27                2.50

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 5

-- Account information --

Account# Balance
-------- ----------
11111111     326.15
22222222   12670.90
33333333      -7.50
44444444    1517.32
55555555   19420.27

1.) Deposit
2.) Withdraw
3.) Apply monthly interest earnings to all accounts
4.) Apply service charges to all accounts
5.) Account Summary
0.) Log out

Please enter an option to continue: 0

*/