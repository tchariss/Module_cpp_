
#ifndef SPAN_HPP
# define SPAN_HPP

# define END "\e[37;0m"
# include <iostream>
# include <algorithm>
# include <vector>

using std::cout;
using std::endl;

/* STL (стандартная библиотека шаблонов) :
содержит набор шаблонов контейнерных классов : iterator, container, algorithm */
// Контейнер - набор, в кот. хранится несколько объектов одного типа
// Итератор - объект, кот. обес-ет доступ к каждому элементу путем перебора элементов, хранящихся в контейнере ST

// vector <аргумент шаблона> имя объекта(аргумент конструктора - тип);

/*
Класс для хранения N элементов, N - unsigned int
- addNumber - ф-ия для хранения одного числа, кот. будет испол-ся для заполнения
- shortestSpan - самую маленькую разницу между числами
- longestSpan - самую большую разницу между числами
*/


class Span
{
	private:
		std::vector<int> array;
		unsigned int elem_n; // Макс кол-во элементов
		int i; // счетчик
		Span();

	public:
		~Span();
		
		Span(Span const &orig);// копируем класс для других инициализаций и передачи объектов
		Span& operator=(Span const &orig); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

		Span(unsigned int N);
		void addNumber(int num);
		void OverloadAddNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
//  Метод, чтобы добавлять несколько значений(диапозон итераторов) в наше вектор
		int shortestSpan(); // минимальная разница
		int longestSpan(); // большая разница

// Обработка исключений - исключительных ситуация (проблем в работе программы)
// std::exception - базовый клас с++ обрабатывающий исключения
// Все классы обработки исключений создаются путем наследования его
		class VectorIsFull : public std::exception
		{
			public :
				virtual const char* what() const throw();
// Возвращает: указатель на строку с завершающим нулем с поясняющей информацией
		};

		class VectorIsTooFewElements: public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
};

#endif