#pragma once
#include "LargeAppliances.h"
#include "SmallAppliances.h"
class microwave final : public LargeAppliances, SmallAppliances
{
public:
	microwave(int size, int power);
	void Show() override;
};
