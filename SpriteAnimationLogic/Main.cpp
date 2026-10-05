#include "Animacao.h"
#include <iostream>
#include <vector>

int main() {
	Animacao animacao(4, 0.5);

	std::vector <float> deltas = {0.2, 0.3, 1.2, 2.1};

	for (float delta : deltas) {
		animacao.Update(delta);
		std::cout << animacao.FrameAtual() << std::endl;
	}
}