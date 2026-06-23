#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_WWISEAUDIOINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2E30)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int WwiseAudioInfo_TypeDefinitionIndex = 32445;

	class WwiseAudioInfo : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::String* EvtName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WWISEAUDIOINFO__CTOR_OFFSET))(this);
		}
	};
}
