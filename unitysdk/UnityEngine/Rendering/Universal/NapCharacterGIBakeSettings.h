#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIBAKESETTINGS_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1F822D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIBAKESETTINGS_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F822E40)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIBAKESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F822E20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCharacterGIBakeSettings_TypeDefinitionIndex = 26874;

	class NapCharacterGIBakeSettings : public ::System::Object
	{
	public:
		// static const ::System::String* LabelInterval; // 0x0
		// static const ::System::String* LabelProbeYOffset; // 0x0
		// static const ::System::String* LabelTileSampleRange; // 0x0
		// static const ::System::String* LabelExpand; // 0x0
		// static const ::System::String* LabelOverlappingHeight; // 0x0
		::System::Single interval; // 0x10
		::System::Single probeYOffset; // 0x14
		::System::Int32 sampleRange; // 0x18
		::System::Int32 expand; // 0x1C
		::System::Single overlappingHeight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIBAKESETTINGS__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::Universal::NapCharacterGIBakeSettings* get_Default()
		{
			return ((::UnityEngine::Rendering::Universal::NapCharacterGIBakeSettings*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIBAKESETTINGS_GET_DEFAULT_OFFSET))();
		}

		::System::Boolean IsValid(::System::String*& reason)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIBAKESETTINGS_ISVALID_OFFSET))(this, reason);
		}
	};
}
