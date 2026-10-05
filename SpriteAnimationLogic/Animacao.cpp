#include "Animacao.h"

Animacao::Animacao(int quantidadeFramesAnimacao, float tempoPorFrameAnimacao) {
	quantidadeFrames = quantidadeFramesAnimacao;
	tempoPorFrame = tempoPorFrameAnimacao;
}

void Animacao::Update(float delta) {
	tempoAcumulado += delta;
	while (tempoAcumulado >= tempoPorFrame) {
		frameAtual++;

		if (frameAtual >= quantidadeFrames) {
			frameAtual = 0;
		}

		tempoAcumulado -= tempoPorFrame;
	}
}

int Animacao::FrameAtual() {
	return frameAtual;
}