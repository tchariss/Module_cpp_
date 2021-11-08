#include "phonebook.hpp"

int	ft_strlen(std::string s)
{
	int i = -1;
	
	while(s[++i])	
		;
	return(i);
}

void	push_new_str(std::string str)
{
	std::string new_s;

	if (ft_strlen(str) < 10)
	{
		std::cout << "\e[0;38;5;140m" << std::setw(10) << str << "\e[37;0m" << "|";
	}
	else
	{
		new_s = str.substr(0, 9);
		new_s.push_back('.');
		std::cout << "\e[0;38;5;140m" << new_s << "\e[37;0m" << "|";
	}
}

void	print_base_list(Contact mas, int num)
{
	std::cout << "\e[0;38;5;153m" << std::setw(10) << num << "\e[37;0m" << "|";
	push_new_str(mas.getFname());
	push_new_str(mas.getLname());
	push_new_str(mas.getNick());
	push_new_str(mas.getPhone());
	push_new_str(mas.getSecret());
}

void	print_list(Contact mas)
{	
	push_new_str(mas.getFname());
	push_new_str(mas.getLname());
	push_new_str(mas.getNick());
}

void	search_person(int i, PhoneBook *ph)
{
	int count;

	ph->header1();
	count = 0;

	while(count < i)
	{
		std::cout << "\e[0;38;5;153m" << std::setw(10) << count << "\e[37;0m" << "|";
		print_list(ph->mas[count]);
		std::cout << std::endl;
		count++;
	}
}

void	add_person(int i, PhoneBook *ph, int &more)
{
	std::string s0, s1, s2, s3, s4;

	std::cout << "\e[38;5;126m" << "first name" << "\e[37;0m" << std::endl;
	std::cin >> s0;
	std::cout << "\e[38;5;126m" << "last name" <<  "\e[37;0m" << std::endl;
	std::cin >> s1;
	std::cout << "\e[38;5;126m" << "nickname" << "\e[37;0m" << std::endl;
	std::cin >> s2;
	std::cout << "\e[38;5;126m" << "phone number" << "\e[37;0m" << std::endl;
	std::cin >> s3;
	std::cout << "\e[38;5;126m" << "darkest secret" << "\e[37;0m" << std::endl;
	std::cin >> s4;
	std::cout << "\e[0;40;32m" << "✓" << "\e[37;0m" << std::endl;
	
	Contact new_person;
	new_person = Contact(s0, s1, s2, s3, s4);

	if (i < 8)
		ph->mas[i] = new_person;
	else
	{
		ph->mas[more] = new_person;
		more++;
		if (more == 8)
			more = 0;
	}
}

int	check_valid_arg(std::string str)
{
	if (ft_strlen(str) > 1 || !std::isdigit(str[0]))
		return (-1);
	return (0);
}

void	other_personal_search(int i, PhoneBook *ph)
{
	int	num_in;		
	std::string str;

	std::cin >> str;
	if (check_valid_arg(str) == -1)
	{
		std::cout << "\e[0;40;91m" << "incorrect format" << "\e[37;0m" << std::endl;
		return ;
	}
	num_in = std::atoi(str.c_str());
	if (num_in < 0 || num_in > 7 || num_in >= i )
	{
		std::cout << "\e[0;40;91m" << "incorrect format" << "\e[37;0m" << std::endl;
		return ;
	}
	else
	{
		ph->header2();
		print_base_list(ph->mas[num_in], num_in);
		std::cout << std::endl;
	}
}

int main()
{
	int	overflow;
	std::string s;
	// Contact mas[8]; // 8 экземпляров класса
	PhoneBook ph;

	overflow = 0;
	int index = 0;
	while (1)
	{
		std::cout << "enter command: ";
		std::cin >> s;
		if (s == "EXIT")
		{
			std::cout << "\e[38;5;114m" << "finish" << "\e[37;0m" << std::endl;
			break ;
		}
		else if (s == "ADD")
		{
			add_person(index, &ph, overflow);
			if (index < 8)
				index++;
		}   
		else if (s == "SEARCH")
		{
			search_person(index, &ph);
			other_personal_search(index, &ph);
		}
		else
		{
			std::cout << "error" << std::endl;
		}
	}
	return (0);
}
