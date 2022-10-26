#include "LargeAppliances.h"
LargeAppliances::LargeAppliances(int size) : _size(size)
{
}
void LargeAppliances::Show()
{
	std::cout << "����� ������" << _size << std::endl;
}
fridge::fridge(int size, const std::string& color) : LargeAppliances(size), _color(color)
{
}
void fridge::Show()
{
	std::cout << "�����������: ����� " << _size << " ���� " << _color << std::endl;
}
four::four(int size, const std::string& option) : LargeAppliances(size), _option(option)
{
}
void four::Show()
{
	std::cout << "����� ������� ����: " << _size << " ����� " << _option << std::endl;
}