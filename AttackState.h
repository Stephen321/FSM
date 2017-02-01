#ifndef ATTACKSTATE_H
#define ATTACKSTATE_H
#include "State.h"

class Alien;
class AttackState :	public State<Alien>
{
public:
	void start(Alien* owner) override;
	void update(Alien* owner) override;
	void end(Alien* owner) override;
};
#include "Alien.h"
#endif

