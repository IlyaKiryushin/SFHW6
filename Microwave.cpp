#include "Microwave.h"
microwave::microwave(int size, int power) : LargeAppliances(size), SmallAppliances(power)
{
}
void microwave::Show()
{
	cout << "�������� ����: ����� " << _size << " �������� " << _power << endl;
}