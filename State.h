#ifndef STATE_H
#define STATE_H
#include <iostream>

template<typename T>
class State {
public:
	virtual void start(T* owner) = 0;
	virtual void update(T* owner) = 0;
	virtual void end(T* owner) = 0;
};

#endif