#pragma once
#include "fmod.hpp"

class Audio
{
public:
	Audio();

	~Audio();
	Audio(const Audio& other) = delete;
	Audio(Audio&& other) noexcept = delete;
	Audio& operator=(const Audio& other) = delete;
	Audio& operator=(Audio&& other) noexcept = delete;

	void init();

private:
	FMOD::System* m_system = nullptr;
	FMOD::Sound* s_sound = nullptr;
	FMOD::Channel* c_channel = 0;
};