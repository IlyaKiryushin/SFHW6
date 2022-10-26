#include"LargeAppliances.h"
#include"SmallAppliances.h"
#include"Microwave.h"
int main()
{
	setlocale(LC_ALL, "");
	IElectronics* warehouse[5];
	warehouse[0] = new fridge(290, std::string("red"));
	warehouse[1] = new four(50, std::string("grill"));
	warehouse[2] = new teapot(1500, std::string("plastic"));
	warehouse[3] = new VacuumCleaner(1700, 8);
	warehouse[4] = new microwave(20, 1000);
	bool open = true;
	while (open)
	{
		std::cout << "Выберите товар: 1 - холодильник, 2 - духовая печь, 3 - чайник, 4 - пылесос, 5 - микроволновая печь, 0 - выход" << std::endl;
		int product;
		std::cin >> product;
		switch (product)
		{
		case 1:
			warehouse[0]->Show();
			break;
		case 2:
			warehouse[1]->Show();
			break;
		case 3:
			warehouse[2]->Show();
			break;
		case 4:
			warehouse[3]->Show();
			break;
		case 5:
			warehouse[4]->Show();
			break;
		case 0:
			open = false;
			break;
		default:
			std::cout << "Выберите товар от 1 до 5 или 0, чтобы выйти" << std::endl;
			break;
		}
	}
	delete warehouse[0];
	delete warehouse[1];
	delete warehouse[2];
	delete warehouse[3];
	delete warehouse[4];

	return 0;


}