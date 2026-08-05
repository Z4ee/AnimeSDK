#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_MEDIA_SYSTEMSOUND_PLAY_OFFSET UNITYSDK_OFFSET(0x1E977F70)
#define SYSTEM_MEDIA_SYSTEMSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1E977F30)

namespace System::Media
{
	inline static constexpr unsigned int SystemSound_TypeDefinitionIndex = 4150;

	class SystemSound : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUND__CTOR_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUND_PLAY_OFFSET))(this);
		}
	};
}
