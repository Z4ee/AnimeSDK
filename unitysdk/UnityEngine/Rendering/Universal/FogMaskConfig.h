#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_FOGMASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x191075A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FogMaskConfig_TypeDefinitionIndex = 29969;

	class FogMaskConfig : public ::System::Object
	{
	public:
		::System::Boolean enableFogMask; // 0x10
		::UnityEngine::Color fogMaskScattering; // 0x14
		::System::Single fogMaskTransmittance; // 0x24
		::System::Single fogMaskIntensity; // 0x28
		::System::Single fogMaskFade; // 0x2C
		::System::Single fogMaskRange; // 0x30
		::UnityEngine::Vector3 fogMaskCenter; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FOGMASKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
