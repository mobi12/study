#include "move.h"

int main()
{
	Move one(2.5, 5.4);
	Move two(5.4, 6.7);
	
	one.showmove();
	two.showmove();
	
	one = one.add(two);
	two.reset();
	one.showmove();
	
	return 0;
}