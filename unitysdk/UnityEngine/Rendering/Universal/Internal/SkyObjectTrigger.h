#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SKYOBJECTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB172E0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int SkyObjectTrigger_TypeDefinitionIndex = 27188;

	class SkyObjectTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SKYOBJECTTRIGGER__CTOR_OFFSET))(this);
		}
	};
}
