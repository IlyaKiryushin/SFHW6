#include "LargeAppliances.h"
LargeAppliances::LargeAppliances(int size) : _size(size)
{
}
void LargeAppliances::Show()
{
	std::cout << "Объем товара" << _size << std::endl;
}
fridge::fridge(int size, const std::string& color) : LargeAppliances(size), _color(color)
{
}
void fridge::Show()
{
	std::cout << "Холодильник: объем " << _size << " цвет " << _color << std::endl;
}
four::four(int size, const std::string& option) : LargeAppliances(size), _option(option)
{
}
void four::Show()
{
	std::cout << "Объем духовой печи: " << _size << " опция " << _option << std::endl;
}