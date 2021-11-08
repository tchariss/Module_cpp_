
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# define END "\e[37;0m"
# include <iostream>
# include <stack>

using std::cout;
using std::endl;

/* STL (стандартная библиотека шаблонов) :
содержит набор шаблонов контейнерных классов : iterator, container, algorithm */
// Контейнер - набор, в кот. хранится несколько объектов одного типа
// Итератор - объект, кот. обес-ет доступ к каждому элементу путем перебора элементов, хранящихся в контейнере ST

// vector <аргумент шаблона> имя объекта(аргумент конструктора - тип);

/*
Контейнер std::stack - единственный контейнер STL, который нельзя итерировать
Нужно прикрепить итератор к контейнеру std::stack.
- Создать MutantStack путем наследования от std::stack
- std::stack предоставит итератор
*/

// Реальзовать контейнер с функцией итератора, добавленной в стек
template <typename T>
class MutantStack : public std::stack <T>
{
	public:
		MutantStack() {};
		~MutantStack() {};
		
		MutantStack(MutantStack const &orig) : std::stack<T>(orig)// копируем класс для других инициализаций и передачи объектов
		{ // Объект - члены (контейнер) C
		};

		MutantStack& operator=(MutantStack const &orig) // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр
		{
			// Объект - члены (контейнер) c
			if (this != &orig)
				this->c = orig.c;
    		return(*this);
		};

// Наследуем от stack
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (this->c.begin());
		};

		iterator end()
		{
			return (this->c.end());
		};

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rev_begin()
		{
			return (this->c.rbegin());
		};

		reverse_iterator rev_end()
		{
			return (this->c.rend());
		};

};

#endif