#pragma once

class Animacao {
private:
	int frameAtual = 0;
	int quantidadeFrames;
	float tempoPorFrame;
	float tempoAcumulado = 0;
	bool pausada = false;
public:
	Animacao(int quantidadeFrames, float tempoPorFrame);
	void Update(float delta);
	int FrameAtual();
	void Pausar();
	void Retomar();
	bool EstaPausada();
};