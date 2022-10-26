#pragma once
#include "IElectronics.h"
class SmallAppliances : virtual public IElectronics
{
public:
	SmallAppliances(int power);
	void Show() override;
protected:
	int _power;
};
class teapot final : public SmallAppliances
{
public:
	teapot(int power, string material);
	void Show() override;
private:
	string _material;
};
class VacuumCleaner final : public SmallAppliances
{
public:
	VacuumCleaner(int power, int weight);
	void Show() override;
private:
	int _weight;
};