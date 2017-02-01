#ifndef FINITE_STATE_MACHINE
#define FINITE_STATE_MACHINE
#include "State.h"
template <typename T>
class FiniteStateMachine {
public:
	FiniteStateMachine(T* owner)
		: m_currentState(nullptr)
		, m_owner(owner)
	{};

	void update() {
		if (m_currentState) {
			m_currentState->update(m_owner);
		}
	}

	void changeState(State<T>* state) {
		if (!state) {
			return;
		}

		if (!m_currentState) {
			m_currentState = state;
			m_currentState->start(m_owner);
			return;
		}

		m_currentState->end(m_owner);
		m_currentState = state;
		m_currentState->start(m_owner);
	}

private:
	T* m_owner;
	State<T>* m_currentState;
};

#endif