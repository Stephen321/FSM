#ifndef FLYSTATE_H
#define FLYSTATE_H
#include "State.h"
class Alien;
class FlyState : public State<Alien>{
public:
	void start(Alien* owner) override;
	void update(Alien* owner) override;
	void end(Alien* owner) override;
};
#include "Alien.h"
#endif