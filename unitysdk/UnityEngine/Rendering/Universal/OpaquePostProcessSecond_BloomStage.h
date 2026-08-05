#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_BLOOMSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F822F00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OpaquePostProcessSecond_BloomStage_TypeDefinitionIndex = 27277;

	class OpaquePostProcessSecond_BloomStage : public ::System::Object
	{
	public:
		::System::Single bloomSize; // 0x10
		::UnityEngine::Vector3 bloomTint; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_BLOOMSTAGE__CTOR_OFFSET))(this);
		}
	};
}
