#include "Microwave.h"
microwave::microwave(int size, int power) : LargeAppliances(size), SmallAppliances(power)
{
}
void microwave::Show()
{
	cout << "Микровая печь: объём " << _size << " мощность " << _power << endl;
}