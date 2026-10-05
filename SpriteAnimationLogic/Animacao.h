#pragma once

class Animacao {
private:
	int frameAtual = 0;
	int quantidadeFrames;
	float tempoPorFrame;
	float tempoAcumulado = 0;
public:

	Animacao(int quantidadeFrames, float tempoPorFrame);
	void Update(float delta);
	int FrameAtual();
};