#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_WWISEBGMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E47D0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int WwiseBGMInfo_TypeDefinitionIndex = 30897;

	class WwiseBGMInfo : public ::System::Object
	{
	public:
		::System::String* StateKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WWISEBGMINFO__CTOR_OFFSET))(this);
		}
	};
}
