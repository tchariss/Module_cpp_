#include <iostream>

# define END "\e[37;0m"

using std::cout;
using std::endl;

// serialize; deserialize
// Boost::serialization

/* reinterpret_cast<T>(expr)
Используется для преобразования между произвольными типами указателей */

// допустимая структура данных
struct Data
{
    int age;
    std::string name;
};

Data* deserialize(uintptr_t raw) //  Эта функция вернет необработанные данные, созданные с помощью "сериализации", преобразуются в структуру данны
{
// Десериализация — чтение содержимого из байтового массива и заполнение объекта
    return (reinterpret_cast<Data*>(raw));
}

uintptr_t serialize(Data* ptr) // Эта функция вернет параметр в целочисленном типе
{
// Cериализация — сохранение структуры объекта в виде байтового массива 
    return (reinterpret_cast<uintptr_t>(ptr));
}

int main()
{
    Data p;
    Data *new_data = NULL;
// Возьмите адрес данных, используйте сериализацию на нем.
    p.age = 22;
    p.name = "Vikoska";
    cout << "Data p : " << "\e[0;38;5;216m" << &p << END << '\n' 
    << "- age = "  << "\e[0;38;5;157m" << p.age << END << endl;
    cout << "- name = "<< "\e[0;38;5;156m" << p.name << END << endl;

    uintptr_t arg;
    arg = serialize(&p);
    new_data = deserialize(arg);

    cout << endl;
    cout << "New_data : " << "\e[0;38;5;216m" << new_data << END << '\n' 
    << "- age = " << "\e[0;38;5;147m" << new_data->age << END << endl;
    cout << "- name = "<< "\e[0;38;5;146m" << new_data->name << END << endl;

    return (0);
}
