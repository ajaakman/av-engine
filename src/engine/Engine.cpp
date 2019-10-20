#include "Engine.hpp"

Engine::Engine() : m_audio()
{
}

void Engine::init()
{
	m_audio.init(); 
	m_graphics.init();
}