#include "Alien.h"

FlyState Alien::flyState;
AttackState Alien::attackState;


Alien::Alien() : m_fsm(this) {
	m_fsm.changeState(&Alien::flyState);
}

void Alien::update() {
	m_fsm.update();
}

void Alien::changeState(State<Alien>* state) {
	m_fsm.changeState(state);
}

void Alien::toggleSpottedPlayer() {
	m_spottedPlayer = !m_spottedPlayer;
}

bool Alien::getSpottedPlayer() const {
	return m_spottedPlayer;
}
