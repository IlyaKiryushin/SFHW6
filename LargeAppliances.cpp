#include "LargeAppliances.h"
LargeAppliances::LargeAppliances(int size) : _size(size)
{
}
void LargeAppliances::Show()
{
	cout << "����� ������" << _size << endl;
}
fridge::fridge(int size, string color) : LargeAppliances(size), _color(color)
{
}
void fridge::Show()
{
	cout << "�����������: ����� " << _size << " ���� " << _color <<  endl;
}
four::four(int size, string option) : LargeAppliances(size), _option(option)
{
}
void four::Show()
{
	cout << "����� ������� ����: " << _size << " ����� " << _option << endl;
}