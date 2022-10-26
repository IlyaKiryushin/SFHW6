#pragma once
#include<iostream>
class IElectronics
{
public:
	virtual void Show() = 0;
	virtual ~IElectronics() = default;
};