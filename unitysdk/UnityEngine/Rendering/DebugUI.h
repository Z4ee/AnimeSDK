#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_DEBUGUI__CTOR_OFFSET UNITYSDK_OFFSET(0x188E0EB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_TypeDefinitionIndex = 27810;

	class DebugUI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI__CTOR_OFFSET))(this);
		}
	};
}
