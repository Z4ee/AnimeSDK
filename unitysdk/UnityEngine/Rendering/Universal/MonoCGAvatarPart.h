#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCGAVATARPART__CTOR_OFFSET UNITYSDK_OFFSET(0x1C44D080)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoCGAvatarPart_TypeDefinitionIndex = 26328;

	class MonoCGAvatarPart : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCGAVATARPART__CTOR_OFFSET))(this);
		}
	};
}
