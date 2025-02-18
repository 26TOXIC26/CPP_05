# include <ostream>
# include <iostream>

int main ()
{
	int a = 10;
	int b = 20;
	try
	{
		if (a > b)
			throw "a is greater than b";
		else
			throw "b is greater than a";
	}
	catch (const char *e)
	{
		std::cout << e << std::endl;
	}
}
