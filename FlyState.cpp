#include "FlyState.h"

void FlyState::start(Alien * owner)
{
	std::cout << "Start to fly" << std::endl;
}

void FlyState::update(Alien * owner)
{
	std::cout << "flying" << std::endl;
	if (owner->getSpottedPlayer())
		owner->changeState(&Alien::attackState);
}

void FlyState::end(Alien * owner)
{
	std::cout << "Stop flying" << std::endl;
}
