#include <cstdlib>
using std::exit;

#include <iostream>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

#include <string>
using std::string;

int main()
{
  string s;
  cin >> s;
  while (cin.good()) {
    cout << s << endl;
    cin >> s;
  }
  return 0;
}
