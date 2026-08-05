#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TIMELINE_CLEANBUBBLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A2000)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int CleanBubbleInfo_TypeDefinitionIndex = 32938;

	class CleanBubbleInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CLEANBUBBLEINFO__CTOR_OFFSET))(this);
		}
	};
}
