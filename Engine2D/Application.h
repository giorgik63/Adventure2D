#pragma once

#include "Core.h"

namespace Engine2D {

	class ENGINE2D_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Definito nel Client
	Application* CreateApplication();

}
