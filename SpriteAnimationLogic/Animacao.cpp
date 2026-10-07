#include "Animacao.h"

Animacao::Animacao(int quantidadeFramesAnimacao, float tempoPorFrameAnimacao) {
	quantidadeFrames = quantidadeFramesAnimacao;
	tempoPorFrame = tempoPorFrameAnimacao;
}

void Animacao::Update(float delta) {
	if (pausada) {
		return;
	}

	tempoAcumulado += delta;
	while (tempoAcumulado >= tempoPorFrame) {
		frameAtual++;

		if (frameAtual >= quantidadeFrames) {
			frameAtual = 0;
		}

		tempoAcumulado -= tempoPorFrame;
	}
}

bool Animacao::EstaPausada() {
	return pausada;
}

void Animacao::Pausar() {
	pausada = true;
}

void Animacao::Retomar() {
	pausada = false;
}

int Animacao::FrameAtual() {
	return frameAtual;
}