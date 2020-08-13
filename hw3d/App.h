#pragma once
#include "Window.h"
#include "ChiliTimer.h"

class App
{
public:
	App();
	// master frame / message loop
	int Go();
	//
	//void DoFrame();
private:
	//err error LNK2019: unresolved external symbol "public: void __cdecl Graphics::DrawTestTriangle(void)" (?DrawTestTriangle@Graphics@@QEAAXXZ) referenced in function "private: void __cdecl App::DoFrame(void)" (?DoFrame@App@@AEAAXXZ)
	void DoFrame();
private:
	Window wnd;
	ChiliTimer timer;
};