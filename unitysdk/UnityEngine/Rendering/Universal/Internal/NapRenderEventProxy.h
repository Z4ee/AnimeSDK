#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DDF30)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapRenderEventProxy_TypeDefinitionIndex = 27908;

	class NapRenderEventProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXY__CTOR_OFFSET))(this);
		}
	};
}
