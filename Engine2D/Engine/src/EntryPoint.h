#pragma once

#include "Application.h"
#include <iostream>

#ifdef EN2D_PLATFORM_WINDOWS

extern Engine2D::Application* Engine2D::CreateApplication();

int main(int argc, char** argv) {
	std::cout << "Engine2D motore 2D\n";
	auto app = Engine2D::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif  // EN2D_PLATFORM_WINDOWS
