#include <chrono>
#include <thread>
#include "Alien.h"

int main() {
	Alien a;
	std::chrono::seconds duration(1);
	int secondsPassed = 1;
	while (true) {
		a.update();

		if (secondsPassed % 5 == 0)
			a.toggleSpottedPlayer();

		std::this_thread::sleep_for(duration);
		secondsPassed++;
	}

	return 0;
}