#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_TIMELINE_TRACKNONEEDCONTEXTADDMARKERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F822030)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackNoNeedContextAddMarkerItem_TypeDefinitionIndex = 33051;

	class TrackNoNeedContextAddMarkerItem : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKNONEEDCONTEXTADDMARKERITEM__CTOR_OFFSET))(this);
		}
	};
}
