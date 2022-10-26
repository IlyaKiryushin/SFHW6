#pragma once
#include "IElectronics.h"
class LargeAppliances : virtual public IElectronics
{
public:
	LargeAppliances(int size);
	void Show() override;
protected:
	int _size;
};
class fridge final : public LargeAppliances
{
public:
	fridge(int size, string color);
	void Show() override;
private:
	string _color;
};
class four final : public LargeAppliances
{
public:
	four(int size, string option);
	void Show() override;
private:
	string _option;
};