#include <iostream>
#include <vector>
#include <string>
using namespace std;

class patient
{
private:
	string name;
	string age;
	string medicalHistory;
	string password;

public:
	patient(string n, string a, string p)
	{
		name = n;
		age = a;
		password = p;
		medicalHistory = " ";
	}

	void addHistory(string entry)
	{
	     medicalHistory += entry;
	}

	string getHistory(string p)
	{
		if (p == password)
		{
			return medicalHistory;
		}
		else
		{
			return "the password not correct\n";
		}
	}
	void getBasicInfo()
	{
		cout<< "Name: " + name + "\nAge: " + age<<endl;
	}
};
int main()
{
	patient person("Asmaa", "20", "1234");
	person.getBasicInfo();
	person.addHistory("Visited doctor for flu.\n");
	person.getHistory("0000\n");
	person.getHistory("1234\n");


	return 0;
}
