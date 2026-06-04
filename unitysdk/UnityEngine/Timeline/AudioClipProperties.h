#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define UNITYENGINE_TIMELINE_AUDIOCLIPPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B231B30)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AudioClipProperties_TypeDefinitionIndex = 35867;

	class AudioClipProperties : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single volume; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOCLIPPROPERTIES__CTOR_OFFSET))(this);
		}
	};
}
