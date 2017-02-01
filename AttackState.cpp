#include "AttackState.h"

void AttackState::start(Alien * owner)
{
	std::cout << "Start to attack" << std::endl;
}

void AttackState::update(Alien * owner)
{
	std::cout << "attacking" << std::endl;
	if (owner->getSpottedPlayer() == false)
		owner->changeState(&Alien::flyState);
}

void AttackState::end(Alien * owner)
{
	std::cout << "Stop attacking" << std::endl;
}
