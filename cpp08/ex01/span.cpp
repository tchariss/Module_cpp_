
#include "span.hpp"

/*
Класс для хранения N элементов, N - unsigned int
- addNumber - ф-ия для хранения одного числа, кот. будет испол-ся для заполнения
- shortestSpan - самую маленькую разницу между числами
- longestSpan - самую большую разницу между числами
*/

Span::~Span()
{
}
		

Span::Span(Span const &orig)
{
	array = orig.array;
	elem_n = orig.elem_n;
	i = orig.i;
}

Span& Span::operator=(Span const &orig)
{
	if (this != &orig)
	{
		array = orig.array;
		elem_n = orig.elem_n;
		i = orig.i;	
	}

	return(*this);
} 


Span::Span(unsigned int N)
{
// reserve - Резервирует минимальную длину для вектор
	// array.reserve(N); 
	elem_n = N;
	i = 0;
}

void Span::addNumber(int num)
{ // Если в объекте уже есть число -> бросаем исключение
	if (array.size() >= elem_n)
		throw VectorIsFull();
	else
	{
		i++;
		array.push_back(num);
	}
}

// Добавляем несколько элементов
void Span::OverloadAddNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
// Узнать размера диапазона
	int size = std::distance(start, end); // 8
	if (array.size() + size > elem_n) // 16 + 40 > 16 
		throw VectorIsFull();
	else
	{
		i += size;
		std::vector<int>::iterator pos_where = array.begin() + array.size();
		// int pos_where = array.begin() + array.size();
// 1 - позиция куда, 2;3 - числo
		array.insert(pos_where, start, end);
	}
}

int Span::shortestSpan() // минимальная разница
{
	if (array.size() < 2) // 1 или 0 элементов
		throw VectorIsTooFewElements();
	std::vector<int> tmp(array);
	std::sort(tmp.begin(), tmp.end());

	std::vector<int>::iterator count = tmp.begin();
	count++; // указывает теперь на [1] 

// abs - по модулю отдает число -9 |9|
	int min = std::abs(*count - *(count - 1));

	unsigned int i = 0;
	while(i < array.size())
	{
		int diff_np = std::abs(*count - *(count - 1)); // след - пред
		if (diff_np < min)
			min = diff_np;
		count++;
		i++;
	}
	return (min); // разница
	
} 

int Span::longestSpan() // большая разница
{
	if(array.size() < 2) // 1 или 0 элементов
		throw VectorIsTooFewElements();

	std::vector<int> tmp(array);
	std::sort(tmp.begin(), tmp.end());

	std::vector<int>::iterator start = tmp.begin();
	std::vector<int>::iterator end = tmp.end() - 1;

	return (*end - *start);
} 

////////////// exception //////////////

const char *Span::VectorIsFull::what() const throw()
{
	return ("\e[0;38;5;205mВектор переполнен\e[37;0m");
}

const char *Span::VectorIsTooFewElements::what() const throw()
{
	return ("\e[0;38;5;205mСлишком мало элементов в векторе\e[37;0m");
}