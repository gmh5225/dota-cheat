#pragma once

#include "../helpers/memory.hpp"

class IVEngineClient2
{
public:
	VFUNC( 22, GetLocalPlayer( int& nOutPlayerSlot, int nSplitScreenSlot = 0 ), ( this, std::ref( nOutPlayerSlot ), nSplitScreenSlot ), void );
};