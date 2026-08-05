#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCGAVATARCOLORLERP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB17830)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoCGAvatarColorLerp_TypeDefinitionIndex = 27656;

	class MonoCGAvatarColorLerp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCGAVATARCOLORLERP__CTOR_OFFSET))(this);
		}
	};
}
