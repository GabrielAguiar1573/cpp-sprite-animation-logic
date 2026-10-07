#include "Animacao.h"
#include <iostream>

int main() {
	Animacao animacao(4, 0.5);

	animacao.Update(0.5);
	std::cout << animacao.FrameAtual() << " | Pausada: " << animacao.EstaPausada() << std::endl;

	animacao.Pausar();
	std::cout << animacao.FrameAtual() << " | Pausada: " << animacao.EstaPausada() << std::endl;

	animacao.Update(1.0);
	std::cout << animacao.FrameAtual() << " | Pausada: " << animacao.EstaPausada() << std::endl;

	animacao.Retomar();
	std::cout << animacao.FrameAtual() << " | Pausada: " << animacao.EstaPausada() << std::endl;

	animacao.Update(0.5);
	std::cout << animacao.FrameAtual() << " | Pausada: " << animacao.EstaPausada() << std::endl;
}