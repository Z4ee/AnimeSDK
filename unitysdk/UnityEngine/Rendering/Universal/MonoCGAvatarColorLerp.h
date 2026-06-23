#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCGAVATARCOLORLERP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FA920)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoCGAvatarColorLerp_TypeDefinitionIndex = 26952;

	class MonoCGAvatarColorLerp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCGAVATARCOLORLERP__CTOR_OFFSET))(this);
		}
	};
}
