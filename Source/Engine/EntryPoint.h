#pragma once

extern Engine::Application* Engine::CreateApplication();

#ifdef ENGINE_PLATFORM_WINDOWS
int main(int argv, char* argc)
{
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}
#endif