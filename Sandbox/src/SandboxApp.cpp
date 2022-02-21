#include <Thorn.h>

class Sandbox : public Thorn::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Thorn::Application* Thorn::CreateApplication()
{
	return new Sandbox();
}