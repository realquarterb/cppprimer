#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item book, currBook;
	cin >> currBook;
	book = currBook;
	int i = 1;
	while (cin >> currBook) {
		if (currBook.isbn() == book.isbn()) {
			i++;
		}
		else {
			cout << book.isbn() << " " << i << endl << endl;
			i = 1;
		}
		book = currBook;
	}
}
