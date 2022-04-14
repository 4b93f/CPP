#include <iostream>
#include <unistd.h>


int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (argc > 1)
	{
		i = 0;
		while (++i < argc)
		{
			j = -1;
			while (argv[i][++j])
				std::cout << std::toupper(argv[i][j], std::locale());
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return (0);
}