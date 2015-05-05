#include <stdio.h>
class ClassA
{
	private:
		int dataMem;
	public:
		ClassA ( int i ) {dataMem = i;}
		int getNum() {return dataMem;}
};

class ClassB : public ClassA
{
	private:
		int dataMem;
	public:
		ClassB() : ClassA(3) { };
};

int main (int argc,char ** argv)
{
	ClassA anA(1);
	ClassB anB;
	
	printf("%d %d\n", anA.getNum(),anB.getNum());
	printf("%ld %ld\n", sizeof(anA),sizeof(anB));
}
