#include "SmallAppliances.h"
SmallAppliances::SmallAppliances(int power) : _power(power)
{
}
void SmallAppliances::Show()
{
	cout << "Номинальная мощность: " << _power << endl;
}
teapot::teapot(int power, string material) : SmallAppliances(power), _material(material)
{
}
void teapot::Show()
{
	cout << "Чайник: мощность " << _power << " материал " << _material << endl;
}
VacuumCleaner::VacuumCleaner(int power, int weight) : SmallAppliances(power), _weight(weight)
{
}
void VacuumCleaner::Show()
{
	cout << "Пылесос: мощность " << _power << " вес " << _weight << endl;
}