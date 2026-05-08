#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Media { class SystemSound; }

#define SYSTEM_MEDIA_SYSTEMSOUNDS_GET_ASTERISK_OFFSET UNITYSDK_OFFSET(0x19AE7710)
#define SYSTEM_MEDIA_SYSTEMSOUNDS_GET_BEEP_OFFSET UNITYSDK_OFFSET(0x19AE7750)
#define SYSTEM_MEDIA_SYSTEMSOUNDS_GET_EXCLAMATION_OFFSET UNITYSDK_OFFSET(0x19AE7790)
#define SYSTEM_MEDIA_SYSTEMSOUNDS_GET_HAND_OFFSET UNITYSDK_OFFSET(0x19AE77D0)
#define SYSTEM_MEDIA_SYSTEMSOUNDS_GET_QUESTION_OFFSET UNITYSDK_OFFSET(0x19AE7810)
#define SYSTEM_MEDIA_SYSTEMSOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE76D0)

namespace System::Media
{
	inline static constexpr unsigned int SystemSounds_TypeDefinitionIndex = 4152;

	class SystemSounds : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUNDS__CTOR_OFFSET))(this);
		}

		static ::System::Media::SystemSound* get_Asterisk()
		{
			return ((::System::Media::SystemSound*(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUNDS_GET_ASTERISK_OFFSET))();
		}

		static ::System::Media::SystemSound* get_Beep()
		{
			return ((::System::Media::SystemSound*(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUNDS_GET_BEEP_OFFSET))();
		}

		static ::System::Media::SystemSound* get_Exclamation()
		{
			return ((::System::Media::SystemSound*(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUNDS_GET_EXCLAMATION_OFFSET))();
		}

		static ::System::Media::SystemSound* get_Hand()
		{
			return ((::System::Media::SystemSound*(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUNDS_GET_HAND_OFFSET))();
		}

		static ::System::Media::SystemSound* get_Question()
		{
			return ((::System::Media::SystemSound*(*)())((::PBYTE)hIl2Cpp + SYSTEM_MEDIA_SYSTEMSOUNDS_GET_QUESTION_OFFSET))();
		}
	};
}
