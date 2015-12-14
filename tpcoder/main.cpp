#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int processTransactions(int startingBalance,vector <string> transactions);

int main()
{
	vector<string> v;
	int a = 100;

	v.push_back("D 100");
	v.push_back("d 150");
	v.push_back("C 50");
	v.push_back("D 50");
	
	int answer = 0;
	
	
	
	answer = processTransactions(a,v);
	
	//cout<<answer<<endl;


	getchar();
	getchar();
	return 0;
}


int processTransactions(int startingBalance,vector <string> transactions)
{
	
	int balance = startingBalance;
	char trans_type;


	for(int i = 0; i < transactions.size();i++)
	{
		//string for int part of transaction so it can be converted to int
		string int_string;

		//convert string 1st character to get transaction type
		string temp = transactions[i];

		//get the trans type char 'c' or 'd'
		trans_type = temp[0];


		////Find out the MAX SIZE possible of the string in the vector
		int_string = temp.substr(2,100);

	
		////convert to int
		int process = atoi(int_string.c_str());
	
		
	
		switch(trans_type)
		{
		case 'C':
			balance = balance + process;
			break;
		case 'D':
			balance = balance - process;
			break;
		case 'c':
			balance = balance + process;
			break;
		case 'd':
			balance = balance - process;
			break;
		default:
			cout << "ERROR. Do not recognize transaction type" << endl;
		}
		
		
		/*cout << int_string << endl;
		cout << temp << endl;
		cout << balance << endl;*/

	}//end for

	//cout << "Balanace =" << balance <<endl;
	return balance;
}