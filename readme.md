Digital Wallet Management System
-----------
Overview:
-----------
The Digital Wallet Management System enables users to manage financial transactions digitally. 
It allows transferring and receiving funds and viewing account balances securely and efficiently.

Requirements:
--------------
1. Manage a list of users with their initial balances.
2. Process transactions between users and provide success/failure confirmation.
3. After processing, sort and display users based on their remaining balance.

Input Format:
--------------
1. The first line contains an integer `N`, representing the number of users.
2. The next `N` lines contain two integers: `userID` and `balance`.
3. The next line contains an integer `T`, representing the number of transactions.
4. The next `T` lines contain three integers: `from_userID`, `to_userID`, and `amount`.

Constraints:
--------------
- 1 ≤ N ≤ 102
- 1 ≤ userID ≤ 102
- 0 ≤ balance ≤ 104
- 1 ≤ T ≤ 103
- 0 ≤ amount ≤ 104

Output Format:
---------------
1. For each transaction:
   - Print "Success" if the transaction is completed.
   - Print "Failure" if the transaction fails due to insufficient funds.
2. After all transactions, print users sorted by their remaining balance. 
   If two users have the same balance, sort them by `userID`.
