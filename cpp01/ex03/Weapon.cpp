#include "Weapon.hpp"

// Определяю поведение функций класса не в хедере (так правильнее)
void  Weapon::setType(std::string new_type) // Установить
{
    // const -> значение переменной не может быть изменено после инициализации
    type = new_type;
}

std::string &Weapon::getType()
{
    // Возвращает постоянную ссылка строку
    return(type);
}

Weapon::Weapon(std::string str)
{
    this->type = str;
}

Weapon::~Weapon()
{
}

