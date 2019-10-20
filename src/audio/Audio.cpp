#include "Audio.hpp"

Audio::Audio() : m_system(nullptr), s_sound(nullptr), c_channel(0)
{
}

Audio::~Audio()
{
	s_sound->release();
	m_system->close();
	m_system->release();
}

void Audio::init()
{
	FMOD::System_Create(&m_system);

	m_system->init(16, FMOD_INIT_NORMAL, 0);

	m_system->createSound("media/sounds/penguin.wav", FMOD_LOOP_NORMAL, 0, &s_sound);

	m_system->playSound(s_sound, 0, false, &c_channel);
}
