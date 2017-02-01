#ifndef ALIEN
#define ALIEN
#include "FiniteStateMachine.h"
#include "FlyState.h"
#include "AttackState.h"

class Alien
{
public:
	static FlyState flyState;
	static AttackState attackState;

	Alien();
	void update();
	void changeState(State<Alien>* state);

	void toggleSpottedPlayer();
	bool getSpottedPlayer() const;
private:
	FiniteStateMachine<Alien> m_fsm;
	bool m_spottedPlayer;
};

#endif