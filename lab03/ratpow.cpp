#include <cassert>

#include <cstdlib>
using std::exit;
using std::atof;
using std::atoi;

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

#include <cmath>
using std::fabs;

bool nearly_equal(double x, double y)
{
  const double separation = fabs(x-y);
  const double eps = 1E-14;
  return separation < fabs(x)*eps and separation < fabs(y)*eps;
}

void bad()
{
  cerr << "Returns the rational power a^(p/q) and compares to the\n"
          "value computed with std::pow in the cmath library\n"
	  "Usage: ratpow a p q\n"
	  "        a=nonnegative fp number\n"
	  "      p,q=nonzero integers" << endl;
  exit(1);
}

int main(int argc, char* argv[])
{
  if (argc != 4) bad();
  const double a = atof(argv[1]);

  // read in values of p, and q using std::atoi
	
  if (a <= 0.0 or p ==0 or q == 0) bad();
		
  double x = 1.0; 

  // (!) put the main loop here
	
  cout.precision(16);
  cout << "Newton's method value: " << x << endl;
  cout << " C Math library value: " << pow(a,double(p)/q) << endl;
  return 0;
}
