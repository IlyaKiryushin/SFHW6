#include "Microwave.h"
microwave::microwave(int size, int power) : LargeAppliances(size), SmallAppliances(power)
{
}
void microwave::Show()
{
	std::cout << "�������� ����: ����� " << _size << " �������� " << _power << std::endl;
}