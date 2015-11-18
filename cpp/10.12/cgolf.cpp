#include "cgolf.h"

int main()
{
	Golf one;
	Golf two;
	Golf three;
	Golf four;
	
	one = one.setGolf(one);
	two = two.setGolf(two);
	two.sethandicap(5);
	one.showgolf();
	two.showgolf();
	
	return 0;
}