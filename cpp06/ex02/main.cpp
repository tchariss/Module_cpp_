#include <iostream>
#include "Base.hpp"

// void identify(Base* p)
// void identify(Base& p)

// Ф-ия которая случайным образом создает экземпляр A, B или C и возвращает экземпляр в качестве базового указателя 
Base *generate(void)
{
	int i = rand() % 3;

	switch (i)
	{
		case 0 :
		{
			cout << "\e[0;38;5;183m" << "Class A : Привет, я родился" << END << endl;
			return (new A());
		}
		case 1 :
		{
			cout << "\e[0;38;5;193m" << "Class B : Привет, я родился" << END << endl;
			return (new B());
		}
		default :
		{
			cout << "\e[0;38;5;153m" << "Class C : Привет, я родился" << END << endl;
			return (new C());
		}
	}
}


// Ф-ия которая отображает соответствие "A", "B" или "C" -в соответствии с реальным типом p
void identify(Base* p)
{
	A *a2 = dynamic_cast<A*>(p);
	if (a2 != NULL)
		cout << "\e[0;38;5;183m" << "Указатель : loading ... -> Class A" << END << endl;
	B *b2 = dynamic_cast<B*>(p);
	if (b2 != NULL)
		cout << "\e[0;38;5;193m" << "Указатель : loading ... -> Class В" << END << endl;
	C *c2 = dynamic_cast<C*>(p);
	if (c2 != NULL)
		cout << "\e[0;38;5;153m" << "Указатель : loading ... -> Class C" << END << endl;
}

// // Ф-ия которая отображает "A", "B" или "C" в соответствии с реальным типом p
void identify_l(Base &p)
{
	A *a2 = dynamic_cast<A*>(&p);
	if (a2 != NULL)
		cout << "\e[0;38;5;183m" << "Идентификация : loading ... -> Class A" << END << endl;
	B *b2 = dynamic_cast<B*>(&p);
	if (b2 != NULL)
		cout << "\e[0;38;5;193m" << "Идентификация : loading ... -> Class В" << END << endl;
	C *c2 = dynamic_cast<C*>(&p);
	if (c2 != NULL)
		cout << "\e[0;38;5;153m" << "Идентификация : loading ... -> Class C" << END << endl;

}

int main()
{
	srand(time(NULL));

	Base *p;

	p = generate(); // Создали рандомно класс А В С
	
// dynamic_cast <T>(expr) -> Он используется для преобразования типов между классами, которые имеют отношения наследования друг с другом
	identify_l(*p); // Ссылочка
	identify(p); // Указатель
	return (0);
}