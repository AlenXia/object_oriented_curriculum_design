#include"Computer.h"
int main(void)
{
	CPU c(P2, 100, 220);
	RAM r;
	CDROM cc;
	Computer com(c,r,cc);
	return 0;
}