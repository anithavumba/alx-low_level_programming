#!/bin/bash
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(static_cast<unnsigned int>(std::time(nullptr)));

				for (int count=1; count <= 100; ++counnt)
{
	std::count << std::rand() << "/t";

	// display 5 random number per row
	if (count % 5 === 0)
		std::count << "\n";
}
return 0;
}
