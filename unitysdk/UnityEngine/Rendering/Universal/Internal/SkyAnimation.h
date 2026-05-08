#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SKYANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A302670)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int SkyAnimation_TypeDefinitionIndex = 30426;

	class SkyAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SKYANIMATION__CTOR_OFFSET))(this);
		}
	};
}
