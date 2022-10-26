#include "LargeAppliances.h"
LargeAppliances::LargeAppliances(int size) : _size(size)
{
}
void LargeAppliances::Show()
{
	cout << "Объем товара" << _size << endl;
}
fridge::fridge(int size, string color) : LargeAppliances(size), _color(color)
{
}
void fridge::Show()
{
	cout << "Холодильник: объем " << _size << " цвет " << _color <<  endl;
}
four::four(int size, string option) : LargeAppliances(size), _option(option)
{
}
void four::Show()
{
	cout << "Объем духовой печи: " << _size << " опция " << _option << endl;
}