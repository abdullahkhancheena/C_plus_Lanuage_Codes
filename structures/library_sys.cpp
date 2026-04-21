#include <iostream>
#include <string>
using namespace std;
struct Library
{
	int lib_num;
	string book_name;
	string author_name;
	int edition_number;
	int pub_year;
	float price;
};
int main()
{
	Library book[100];
	int n;
	cout << "Enter Number of Books to Store: ";
	cin >> n;

	cin.ignore();
	cout << "------------Enter Detail of Books-----------" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\tBooks " << i + 1 << "\t" << endl;
		cout << "Enter Book Library Number: ";
		cin >> book[i].lib_num;
		cin.ignore();
		cout << "Enter Book Name: ";
		getline(cin, book[i].book_name);
		// cin.ignore();
		cout << "Enter Book Author's Name: ";
		getline(cin, book[i].author_name);
		cout << "Enter Book Edition Number: ";
		cin >> book[i].edition_number;
		cout << "Enter Book Publishing Year: ";
		cin >> book[i].pub_year;
		cout << "Enter Book Price: ";
		cin >> book[i].price;
		cin.ignore();
	}

	cout << "1.Book's Library Number" << endl;
	cout << "2.Book's Name" << endl;

	int choice, intval;
	string strval;
	cout << "Enter Your Choice(1 or 2): ";
	cin >> choice;
	bool found = false;

	switch (choice)
	{
	case 1:
	{
		cout << "Enter Book's Library Number: ";
		cin >> intval;
		for (int i = 0; i < n; i++)
		{
			if (book[i].lib_num == intval)
			{
				found = true;
				cout << "\nMatch Found!" << endl;
				cout << "Book's Library Number: " << book[i].lib_num << endl;
				cout << "Book's Name: " << book[i].book_name << endl;
				cout << "Book's Author Name: " << book[i].author_name << endl;
				cout << "Book's Edition Number: " << book[i].edition_number << endl;
				cout << "Book's Publishing Year: " << book[i].pub_year << endl;
				cout << "Book's Price: " << book[i].price << endl;
				cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --" << endl;
			}
		}
		break;
	}
	case 2:
	{
		cin.ignore();
		cout << "Enter Book Name: ";
		getline(cin, strval);
		for (int i = 0; i < n; i++)
		{
			if (book[i].book_name == strval)
			{
				found = true;
				cout << "\nMatch Found!" << endl;
				cout << "Book's Library Number: " << book[i].lib_num << endl;
				cout << "Book's Name: " << book[i].book_name << endl;
				cout << "Book's Author Name: " << book[i].author_name << endl;
				cout << "Book's Edition Number: " << book[i].edition_number << endl;
				cout << "Book's Publishing Year: " << book[i].pub_year << endl;
				cout << "Book's Price: " << book[i].price << endl;
				cout << " -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --" << endl;
			}
		}
		break;
	}
	default:
		cout << "Invalid Choice!" << endl;
	}
	if (!found)
	{
		cout << "No Match Found" << endl;
	}
	return 0;
}