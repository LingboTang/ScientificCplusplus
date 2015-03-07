#include <cstdlib>
using std::exit;
using std::atoi;

#include <cmath>
using std::sqrt;

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
   for (int n = N, m = 2*N+1; n >= 0; --n, m -= 2)
      val = val*x2 + (n%2 == 0 ? 1.0 : -1.0)/m;
   return val*x;
}

/*
double atan_series2(double x, unsigned int N)
{
  / (write your code here)
}
*/

const char usage[] = "Usage: pi #iterations";

void bad(void)
{
  cerr << usage << endl;
  exit(1);
}

int main(int argc, char* argv[])
{
  if (argc != 2) bad();
  int max_iterations = atoi(argv[1]);
  if (max_iterations < 1) bad();
  int counter_width = 2;
  {
    int N = max_iterations;
    while (N != 0) {N /= 10; ++counter_width;}
  }
	
  cout.precision(14);
	
  for (int n=1;n<= max_iterations;++n) {
    cout << setw(counter_width) << n 
         << setw(20) << 16*atan_series(0.2,n) - 4*atan_series(1.0/239,n) << endl;
  }
  cerr.precision(14);
  for (int n=0;n<counter_width+20;++n) cerr << "-";
  cerr << endl << setw(counter_width) << "inf" << setw(20) << M_PI << endl;
  return 0;
}
