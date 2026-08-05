#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCGCOLORWSLERP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFC790)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCGColorWSLerp_TypeDefinitionIndex = 27046;

	class NapCGColorWSLerp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCGCOLORWSLERP__CTOR_OFFSET))(this);
		}
	};
}
