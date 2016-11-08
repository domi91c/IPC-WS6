/*
   == Banking - Savings Account ==

Author  :Dominic Nunes
Date  :October 27 2016
Revision:1
Workshop: #6 in-Lab

*/

#include <stdio.h>
#include <stdbool.h>


// Structure Declaration for account
struct account {
  int accNumber;        // Account number
  double balance;       // Balance of the account
};

struct account findAccount(struct account *acct, int nosClients) {
  int accNumEntry, i;
  printf("Enter account number: ");
  scanf("%i", &accNumEntry);
  for (i = 0; i < nosClients; ++i) {
    if (acct[i].accNumber == accNumEntry) {
      return acct[i];
    }
  }
}

/*  Function to add an amount if positive-valued */
double balanceDown(double balance, double amount) {
  if (amount > 0) {
    balance -= amount;
  }
  return balance;
}

/* Function to calculate the interest rate*/
double interestCalc(double balance, double rate) {
  double interest = (balance * (rate / 100));
  return interest;
}

/* main program */
int main() {
  int i;
  const int nosClients = 5;             // Number of accounts
  int option;                     // Hold the selection
  int accNumEntry;
  double depositAmt;
  double withdrawAmt;
  int index = 0;
  bool exists = false;
  // Initialize the struct account array with opening balance
  struct account acct[] = {{11111111, 123.45},
                           {22222222, 12365.50},
                           {33333333, 0},
                           {44444444, 1475},
                           {55555555, 25000.65}};

  printf("***** Welcome to Savings Account Banking *****\n\n");

  do {
    // Print the option list
    printf("1.) Deposit \n");
    printf("2.) Withdraw\n");
    printf("3.) Apply monthly interest earnings to all accounts\n");
    printf("4.) Apply service charges to all accounts\n");
    printf("5.) Account Summary\n");
    printf("0.) Log out\n\n");
    printf("Please enter an option to continue: ");

    // Waiting for the input
    scanf("%d", &option);

    switch (option) {
      case 0: // Exit the program
        break;

      case 1: // Deposit
        //@IN-LAB
        printf("\n-- Make a deposit --\n\n");
        printf("Enter account number: ");
        scanf("%i", &accNumEntry);

        for (i = 0; i < nosClients; ++i) {
          if (acct[i].accNumber == accNumEntry) {
            index = i;
            exists = true;
            break;
          }
          exists = false;
        }

        if (!exists) {
          printf("ERROR: Account number does not exist.\n\n");
          break;
        }

        printf("Enter amount to deposit (CAD): ");
        scanf("%lf", &depositAmt);
        acct[index].balance += depositAmt;
        printf("Current balance is : %0.2lf\n\n", acct[index].balance);


        break;

      case 2: // Withdraw funds
        //@HOME

        printf("\n-- Withdraw funds --\n\n");


        printf("Enter account number: ");
        scanf("%i", &accNumEntry);

        for (i = 0; i < nosClients; ++i) {
          if (acct[i].accNumber == accNumEntry) {
            index = i;
            exists = true;
            break;
          }
          exists = false;
        }

        if (!exists) {
          printf("ERROR: Account number does not exist.\n\n");
          break;
        }

        printf("Enter amount to withdraw (CAD):");
        scanf("%lf", &withdrawAmt);
        acct[index].balance = balanceDown(acct[index].balance, withdrawAmt);
        if (acct[index].balance >= withdrawAmt) {
          acct[index].balance -= withdrawAmt;
          printf("Current balance is : %0.2lf\n\n", acct[index].balance);
        }


        break;

      case 3: // Apply interest earnings to all accounts
        //@IN-LAB
        printf("\n-- Add monthly interest earnings to all accounts --\n\n");
        printf("Account# New Balance Interest Earnings (M)\n");
        printf("-------- ----------- ---------------------\n");
        double calcInterest;
        for (i = 0; i < nosClients; ++i) {
          if (acct[i].balance < 500) {
            calcInterest = interestCalc(acct[i].balance, .99);
          } else if (acct[i].balance > 500 && acct[i].balance <= 1500) {
            calcInterest = interestCalc(acct[i].balance, 1.66);
          } else if (acct[i].balance > 1500) {
            calcInterest = interestCalc(acct[i].balance, 2.49);
          }
          acct[i].balance += calcInterest;
          printf("%8d %11.2lf %21.2lf\n", acct[i].accNumber, acct[i].balance, calcInterest);
        }
        printf("\n");

        break;

      case 4: // Apply Service Charges
        //@HOME


        break;

      case 5: // Display Account Information
        //@IN-LAB
        printf("\n-- Account information --\n\n");
        printf("Account# Balance   ");
        printf("\n-------- ----------\n");
        for (i = 0; i < nosClients; ++i) {
          printf("%8d %10.2lf\n", acct[i].accNumber, acct[i].balance);
        }
        printf("\n");
        break;

      default:
        printf("Error: Please enter a valid option to continue\n\n");
        break;
    }


  } while (option != 0);


  return 0;
}
