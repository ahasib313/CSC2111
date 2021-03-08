#include "pool.h"
#include <iostream>
using namespace std;

swimmingPool::swimmingPool()
{
	length = 0;
	width = 0;
	depth = 0;
	rateDrainsPool = 0;
	rateFillsPool = 0;
}


double swimmingPool::time_fill()
{
	return poolCapacity() / rateDrainsPool;
}

double swimmingPool::poolCapacity()
{
	return (length * width * depth) * 7.48;
}



