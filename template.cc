#include <stdio.h>
#include <vector>
using namespace std;

template<typename BaseType>
void setVal (B<BasType> & obj, int index, BaseType val, char * name)
{
	static char * remName = NULL;
	if (remName == NULL)
		remName = name;
	obj.put(index,val);
	printf("Inside %s (%p)\n",remName,remName);
}

int main(int argc, char ** argv)
{
	B< int > v;
	B< float > vf;
	
	v.put(0,1);
	setVal(v,0,(int)1,"setVal<int>");
	setVal(v,1,(int)2,"garbage");
	setVal(v,2,(int)3,"garbage");
	printf("%d %d\n",v.get(0),v.get(1))
	setVal(vf,0,(float)1.1,"setVal<float>");
	setVal(vf,1,(float)2.2,"garbage");
	printf("%g %g\n",vf.get(0),vf.get(1));
}

