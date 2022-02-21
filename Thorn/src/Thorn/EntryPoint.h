#pragma once

#ifdef TH_PLATFORM_WINDOWS

extern Thorn::Application* Thorn::CreateApplication();

int main(int argc, char** argv)
{
	Thorn::Log::Init();
	TH_CORE_WARN("Initialized Log!");

	int a = 5;
	TH_INFO("Hello! Var={0}", a);
	
	auto app = Thorn::CreateApplication();
	app->Run();
	delete app;
}
#endif