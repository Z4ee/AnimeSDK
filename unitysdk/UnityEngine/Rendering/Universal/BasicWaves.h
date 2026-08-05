#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_BASICWAVES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AFA30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BasicWaves_TypeDefinitionIndex = 27057;

	class BasicWaves : public ::System::Object
	{
	public:
		::System::Int32 numWaves; // 0x10
		::System::Single amplitude; // 0x14
		::System::Single wavelength; // 0x18
		::System::Single direction; // 0x1C
		::System::Single speed; // 0x20
		::UnityEngine::Texture* surfaceMap; // 0x28
		::System::Single surfaceMapIntensity; // 0x30

		::System::Void _ctor(::System::Single amp, ::System::Single dir, ::System::Single len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BASICWAVES__CTOR_OFFSET))(this, amp, dir, len);
		}
	};
}
