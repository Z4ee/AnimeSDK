#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/WindZoneMode.h"

#define UNITYENGINE_WINDZONE_GET_WINDMAIN_OFFSET UNITYSDK_OFFSET(0x1C5615A0)
#define UNITYENGINE_WINDZONE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1C561590)
#define UNITYENGINE_WINDZONE_SET_WINDMAIN_OFFSET UNITYSDK_OFFSET(0x1C5615B0)
#define UNITYENGINE_WINDZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5615C0)

namespace UnityEngine
{
	inline static constexpr unsigned int WindZone_TypeDefinitionIndex = 25146;

	class WindZone : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDZONE__CTOR_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::WindZoneMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WindZoneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDZONE_SET_MODE_OFFSET))(this, value);
		}

		::System::Single get_windMain()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDZONE_GET_WINDMAIN_OFFSET))(this);
		}

		::System::Void set_windMain(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDZONE_SET_WINDMAIN_OFFSET))(this, value);
		}
	};
}
