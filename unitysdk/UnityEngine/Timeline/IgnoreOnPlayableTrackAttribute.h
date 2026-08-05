#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_TIMELINE_IGNOREONPLAYABLETRACKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F81FA00)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int IgnoreOnPlayableTrackAttribute_TypeDefinitionIndex = 33043;

	class IgnoreOnPlayableTrackAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IGNOREONPLAYABLETRACKATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
