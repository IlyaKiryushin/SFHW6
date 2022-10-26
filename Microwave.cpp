#include "Microwave.h"
microwave::microwave(int size, int power) : LargeAppliances(size), SmallAppliances(power)
{
}
void microwave::Show()
{
	std::cout << "Микровая печь: объём " << _size << " мощность " << _power << std::endl;
}