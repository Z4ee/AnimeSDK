#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_TIMELINE_IGNOREONPLAYABLETRACKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C2F70)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int IgnoreOnPlayableTrackAttribute_TypeDefinitionIndex = 30861;

	class IgnoreOnPlayableTrackAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IGNOREONPLAYABLETRACKATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
