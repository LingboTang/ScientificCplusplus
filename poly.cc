#include <stdio.h>

class ClassA
{
	private:
		int dataA;
	public:
		virtual char * get() {return (char*) "Class A";}
};

class ClassB : public ClassA
{
	private:
		int dataB;
	public:
		char * get() {return (char*) "Class B";}
};

void sub1 (ClassA * anAPtr)
{
	printf("%s\n", anAPtr->get());
}

void sub2 (ClassB* anBPtr)
{
	printf("%s\n", anBPtr->get());
}

int main (int argc, char**argv)
{
	ClassA anA;
	ClassB anB;
	printf("%d %d\n",sizeof(anA),sizeof(anB));
}


