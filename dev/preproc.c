// no include

#define ADD
#define NUM1 4
#define NUM2 5

int main(int argc, char *argv[])
{

	int i, k;

	int sum;

#ifdef ADD
	sum = NUM1 + NUM2;
#else
	sum = 10;
#endif


	return 0;

}
