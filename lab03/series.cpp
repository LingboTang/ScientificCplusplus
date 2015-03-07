#include <cstdlib>
using std::exit;

#include <cmath>
using std::atan;

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

#include <iomanip>
using std::setw;

double atan_series(double x, unsigned int N)
{
  const double x2 = x*x;
  double val = 0.0;
  for (int n=N,m=2*N+1;n>=0;--n,m-=2)
    val = val*x2 + (n%2 == 0 ? 1.0 : -1.0)/m;
  return val*x;
}

/*
double atan_series2(double x, unsigned int N)
{
  // (write your code here)
}

double atan_series3(double x, unsigned int N)
{
  // (write your code here)
}
*/

int main(int argc, char* argv[])
{
  if (argc != 2) {
    cerr << "Calculates the sequence of partial series expansions" << endl << endl
         << "            x" << endl
         << "            x - x^3/3" << endl
         << "            x - x^3/3 + x^5/5" << endl
         << "            x - x^3/3 + x^5/5 - x^7/7" << endl
         << "            etc." << endl << endl
         << "approximating atan(x) = x - x^3/3 + x^5/5 - x^7/7 + ..." << endl << endl
         << "Usage: series x-value" << endl;
    exit(1);
  }
  const double x = atof(argv[1]);
	
  cerr << "For x = " << x << ", the successive partial expansions have the following values:" << endl;
	
  for (int n = 1; n < 31; ++n)
    cout << setw(6) << n << setw(12) << atan_series(x,n) << endl;
  cerr << "--------------------------" << endl;
  cerr << "   inf" << setw(12) << atan(x) << endl;
  return 0;
}
