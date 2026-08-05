#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LENSFLARECONFIG_ISVALID_OFFSET UNITYSDK_OFFSET(0x1CB17360)
#define UNITYENGINE_RENDERING_UNIVERSAL_LENSFLARECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB173D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LensFlareConfig_TypeDefinitionIndex = 27132;

	class LensFlareConfig : public ::System::Object
	{
	public:
		::System::Single intensity; // 0x10
		::System::Single scale; // 0x14
		::System::Single OcclusionRadius; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LENSFLARECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LENSFLARECONFIG_ISVALID_OFFSET))(this);
		}
	};
}
