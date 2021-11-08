#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>	 // std::cout, std::endl
#include <iomanip>	  // std::setw
#include <stdio.h>

class Contact{ // Определение нового класса 
	private: 	// private — доступны в пределах самого объявленного класса
		std::string first_name; 
		std::string last_name; // свойство класса
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:		// public — свойства и методы класса доступны вне класса
		Contact(std::string name, // Прототип члена функции
		std::string l_name,  // :: -> определение члена функции
		std::string nick, 
		std::string phone, 
		std::string secret) {
			first_name = name;
			last_name = l_name;
			nickname = nick;
			phone_number = phone;
			darkest_secret = secret;
			}

	Contact() { // Дефолтный/Пустой конструктор для использования и создания какой-либо переменной

	}

	std::string getFname() const
	{return first_name; }
	std::string getLname() const
	{return last_name; }
	std::string getNick() const
	{return nickname; }
	std::string getPhone() const
	{return phone_number; }
	std::string getSecret() const
	{return darkest_secret; }

};



class PhoneBook {
	public:
		Contact mas[8];

// Шапки
	void header1()
	{
		std::cout << std::setw(10) << "\e[0;32;0;40m  index   |\e[37;0m" 
		<< std::setw(10) << "\e[0;32;0;40m  f_name  |\e[37;0m" 
		<< std::setw(10) << "\e[0;32;0;40m  l_name  |\e[37;0m" 
		<< std::setw(10) << "\e[0;32;0;40m   nick   |\e[37;0m" << std::endl;
		std::cout << "————————————————————————————————————————————" << std::endl;
	}

	void header2()
	{
		std::cout << std::setw(10) << "\e[0;32;0;40m  index   |\e[37;0m" 
		<< std::setw(10) << "\e[0;32;0;40m  f_name  |\e[37;0m" 
		<< std::setw(10) << "\e[0;32;0;40m  l_name  |\e[37;0m" 
		<< std::setw(10) << "\e[0;32;0;40m   nick   |\e[37;0m" 
		<< std::setw(10) << "\e[0;32;0;40m   phone  |\e[37;0m" 
		<< std::setw(10) << "\e[0;32;0;40m  secret  |\e[37;0m" << std::endl;								 
		std::cout << "——————————————————————————————————————————————————————————————————" << std::endl;
	}
};

#endif
