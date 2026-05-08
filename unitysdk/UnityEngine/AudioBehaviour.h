#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

#define UNITYENGINE_AUDIOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C25A390)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioBehaviour_TypeDefinitionIndex = 9629;

	class AudioBehaviour : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
