#include <cstdlib>
using std::exit;

#include <iostream>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

void bad(void)
{
	cerr << "Problem parsing the data file." << endl;
	exit(1);
}

void done(void)
{
	cerr << "Done." << endl;
	exit(0);
}

int main()
{
	char c;
		
	while (true) // infinite loop
	{
		// Extract the name in parentheses and write it to cout
		do
		{
			cin >> c;
			if (!cin.good()) done();
		} while (c != '(');
		do
		{
			cin >> c;
			if (!cin.good()) bad();
			if (c != ')') cout << c;
		} while (c != ')');
		cout << ": ";
		
		// Extract the number in braces and report their number and average
		
		// (write your own code here)
	}
	
	return 0;
}