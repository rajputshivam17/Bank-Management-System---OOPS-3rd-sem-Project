🏦 Bank Management System - C++ Mini Project

OOP Concepts | C++ | File Handling

📌 Overview

The Bank Management System is a C++ mini-project developed using Object-Oriented Programming (OOP) concepts.
It simulates basic banking operations like creating an account, depositing money, withdrawing funds, checking balance, and displaying customer details.
The system uses file handling to store customer data permanently, ensuring that records remain even after the program closes.

🎯 Features

Account Creation – Create new accounts with name, type, and initial deposit

Deposit & Withdraw – Perform secure banking transactions

Balance Inquiry – Check available balance by account number

Account Report – View all customer accounts in a tabular format

Account Deletion – Remove closed accounts permanently

File Handling – Save and update account details in binary files (account.dat)

🛠️ Technologies Used

Language: C++

Concepts: OOP (Classes, Encapsulation, File Handling, Functions)

Storage: File Handling (Binary File I/O)

Interface: Console-based (Menu-driven)

🏗️ Class Structure

Class: Account
Attributes:

accNo → Account Number

name → Account Holder Name

type → Account Type (Saving/Current)

balance → Current Balance

Member Functions:

createAccount()

showAccount()

deposit() / withdraw()

modify()

report()

Additional Functions (Outside Class):

writeAccount()

displayAccount()

depositWithdraw()

deleteAccount()

displayAll()

📊 Project Flow

1️⃣ User runs the program
2️⃣ Creates a new account
3️⃣ Deposits or withdraws money
4️⃣ Checks balance or views all accounts
5️⃣ Exits the system (data is stored in account.dat file)

📷 Sample Console Screen
===============================
     BANK MANAGEMENT SYSTEM
===============================
1. Create New Account
2. Deposit Amount
3. Withdraw Amount
4. Balance Enquiry
5. Display All Accounts
6. Delete Account
7. Exit
Enter your choice: _

🌍 Future Scope

Add User Login System (Admin & Customer)

Integrate with Database (MySQL / SQLite)

Add Interest Calculation & Loan Features

Create a GUI Interface using Qt / SFML

Provide Online Banking Simulation

🙋 Author

Shivam Singh - 188 , Mayank Pandey - 185 , Arnav Panwar - 194 , Harshit Sharma - 191 – B.Tech Student, [Manav Rachna International Students Of Research And Studies]
© 2025 Bank Management System | Mini Project in C++
