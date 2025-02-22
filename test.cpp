# include <ostream>
# include <iostream>

double divide(int x, int y)
{
    if (y == 0)
        throw (std::string)"tkatk";

    return (double)(x)/y;
}

int main()
{
    try {
        double result = divide(5, 0);
        std::cout << "Result: " << result << '\n';
    } catch (std::string e) {
        std::cerr << "lb3ab3 " << e << std::endl;
    }
	catch (int e) {
		std::cerr << "Exception caught: " << e << std::endl;
	}
	return 0;
}

