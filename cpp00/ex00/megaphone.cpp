#include <iostream> 

int main(int ac, char **av)
{
	std::string s;
	std::string new_s;
	char sep;
	int i;
	int j;

	if (!av[1] || ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	j = 1;
	sep = ' ';
	while (av[j])
	{
		s = av[j];
		while (s[i])
		{
			if (s[i] >= 97 && s[i] <= 122)
				new_s.push_back(s[i] - 32);
			else
				new_s.push_back(s[i]);
			i++;
		}
		new_s.push_back(sep);
		i = 0;
		j++;
	}
	std::cout << new_s << std::endl;
	return (0);
}