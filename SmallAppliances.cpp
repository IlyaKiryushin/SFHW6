#include "SmallAppliances.h"
SmallAppliances::SmallAppliances(int power) : _power(power)
{
}
void SmallAppliances::Show()
{
	std::cout << "Номинальная мощность: " << _power << std::endl;
}
teapot::teapot(int power, const std::string& material) : SmallAppliances(power), _material(material)
{
}
void teapot::Show()
{
	std::cout << "Чайник: мощность " << _power << " материал " << _material << std::endl;
}
VacuumCleaner::VacuumCleaner(int power, int weight) : SmallAppliances(power), _weight(weight)
{
}
void VacuumCleaner::Show()
{
	std::cout << "Пылесос: мощность " << _power << " вес " << _weight << std::endl;
}