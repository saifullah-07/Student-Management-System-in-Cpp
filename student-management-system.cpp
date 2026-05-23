#include <iostream>
using namespace std;

string name[50], roll[50], crs[50], sect[50], cont[50];

int total = 0;
//function for the insertion of data
void enter()
{
	int ts = 0;
	cout << "How many students do u want to enter??" << endl;
	cin >> ts;

	if (total == 0)
	{
		total = ts + total;

		for (int i = 0; i < ts; i++)
		{
			cout << "\nEnter the Data of student " << i + 1 << endl << endl;
			cout << "Enter name: ";
			cin >> name[i];
			cout << "Enter Roll no: ";
			cin >> roll[i];
			cout << "Enter course: ";
			cin >> crs[i];
			cout << "Enter section: ";
			cin >> sect[i];
			cout << "Enter contact: ";
			cin >> cont[i];
		}
	}
	else
	{

		for (int i = total; i < ts + total; i++)

		{

			cout << "\nEnter the Data of student " << i + 1 << endl
				 << endl;
			cout << "Enter name: ";
			cin >> name[i];
			cout << "Enter Roll no: ";
			cin >> roll[i];
			cout << "Enter course: ";
			cin >> crs[i];
			cout << "Enter section: ";
			cin >> sect[i];
			cout << "Enter contact: ";
			cin >> cont[i];
		}

		total = ts + total;
	}
}
// fucntion for showing up the data
void show()
{

	if (total == 0)

	{

		cout << "No data is entered" << endl;
	}
	else
	{

		for (int i = 0; i < total; i++)

		{
			cout << "\nData of Student " << i + 1 << endl << endl;
			cout << "Name: " << name[i] << endl;
			cout << "Roll no: " << roll[i] << endl;
			cout << "Course : " << crs[i] << endl;
			cout << "Section: " << sect[i] << endl;
			cout << "Contact: " << cont[i] << endl;
		}
	}
}
///////////////////////////// function for searching the data
void search()
{

	if (total == 0)

	{

		cout << "No data is entered" << endl;
	}

	else
	{

		string rollno;
		cout << "Enter the roll no of student:" << endl;
		cin >> rollno;

		for (int i = 0; i < total; i++)

		{

			if (rollno == roll[i])

			{

				cout << "Name: " << name[i] << endl;
				cout << "Roll no: " << roll[i] << endl;
				cout << "Course : " << crs[i] << endl;
				cout << "Section: " << sect[i] << endl;
				cout << "Contact: " << cont[i] << endl;
			}
		}
	}
}
////////////////////////////// function for the updation of data
void update()
{

	if (total == 0)

	{
		cout << "No data is entered" << endl;
	}

	else
	{
		string rollno;

		cout << "Enter the roll no of student which you want to update:" << endl;
		cin >> rollno;

		for (int i = 0; i < total; i++)

		{

			if (rollno == roll[i])

			{

				cout << "\nPrevious data" << endl
					 << endl;
				cout << "Data of Student: " << i + 1 << endl;
				cout << "Name: " << name[i] << endl;
				cout << "Roll no: " << roll[i] << endl;
				cout << "Course : " << crs[i] << endl;
				cout << "Section: " << sect[i] << endl;
				cout << "Contact: " << cont[i] << endl;
				cout << "\nEnter new data" << endl
					 << endl;

				cout << "Enter name: ";
				cin >> name[i];
				cout << "Enter Roll no: ";
				cin >> roll[i];
				cout << "Enter course: ";
				cin >> crs[i];
				cout << "Enter section: ";
				cin >> sect[i];
				cout << "Enter contact: ";
				cin >> cont[i];
			}
		}
	}
}
///////////////////////function for the deletion of data
void deleterecord()
{

	if (total == 0)

	{
		cout << "No data is entered" << endl;
	}

	else
	{
		int a;

		cout << "Press 1 to delete all record" << endl;
		cout << "Press 2 to delete specific record" << endl;
		cin >> a;

		if (a == 1)
		{
			total = 0;
			cout << "All record is deleted..!!" << endl;
		}
		else if (a == 2)
		{
			string rollno;

			cout << "Enter the roll no of student which you wanted to delete" << endl;
			cin >> rollno;

			for (int i = 0; i < total; i++)
			{
				if (rollno == roll[i])
				{

					for (int j = i; j < total; j++)

					{
						name[j] = name[j + 1];
						roll[j] = roll[j + 1];
						crs[j] = crs[j + 1];
						sect[j] = sect[j + 1];
						cont[j] = cont[j + 1];
					}

					total--;

					cout << "Your required record is deleted" << endl;
				}
			}
		}

		else
		{
			cout << "Invalid input";
		}
	}
}

main()
{
	int option;
	while (true)
	{
		cout << "<---Student Management System--->";
		cout << "\n\n  Press 1 to enter data" << endl;
		cout << "  Press 2 to show data" << endl;
		cout << "  Press 3 to search data" << endl;
		cout << "  Press 4 to update data" << endl;
		cout << "  Press 5 to delete data" << endl;
		cout << "  Press 6 to exit" << endl;
		cout << "  ";
		cin >> option;

		switch (option)
		{

		case 1:
			enter();
			break;

		case 2:
			show();
			break;

		case 3:
			search();
			break;

		case 4:
			update();
			break;

		case 5:
			deleterecord();
			break;

		case 6:
			exit(0);
			break;

		default:
			cout << "Invalid input" << endl;
			break;
		}
	}
}
