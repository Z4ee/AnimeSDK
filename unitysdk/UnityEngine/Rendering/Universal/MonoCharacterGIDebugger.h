#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIDEBUGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E4230)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoCharacterGIDebugger_TypeDefinitionIndex = 26283;

	class MonoCharacterGIDebugger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOCHARACTERGIDEBUGGER__CTOR_OFFSET))(this);
		}
	};
}
