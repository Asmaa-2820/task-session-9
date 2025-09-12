#include <iostream>
#include <vector>
#include<string>
using namespace std;

class book
{
private:
	string title;
	string author;
	int price;

public:
	book(string t, string a, int p)
	{
		title = t;
		author = a;
		price = p;
	}
	//getter
	string getTitle()
	{
		return title;
	}
	string getAuthor()
	{
		return author;
	}
	int getPrice()
	{
		return price;
	}
	//setter
	void setPrice(int p)
	{
		price = p;

		if (p>0)
			{
			price = p;
		}
		else
		{
			price = 0;
		}
	}
};

int main()
{
	book p("C++ Basics", "Ali", 50);
	cout << "Title: " << p.getTitle() << endl;
	cout << "Author: " << p.getAuthor() << endl;
	cout << "Price: " << p.getPrice() << endl;

	p.setPrice(200);
	cout << "New Price : " << p.getPrice() << endl;
	return 0;
}
