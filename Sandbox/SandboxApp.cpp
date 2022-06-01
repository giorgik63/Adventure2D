#include <Engine2D.h>

class Sandbox : public Engine2D::Application
{
public:
	Sandbox() { }
	~Sandbox() { }
};

Engine2D::Application* Engine2D::CreateApplication() {
	return new Sandbox();
}