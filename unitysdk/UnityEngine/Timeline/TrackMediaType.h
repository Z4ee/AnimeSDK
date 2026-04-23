#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Timeline/TimelineAsset_MediaType.h"

#define UNITYENGINE_TIMELINE_TRACKMEDIATYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FECC0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackMediaType_TypeDefinitionIndex = 35617;

	class TrackMediaType : public ::System::Attribute
	{
	public:
		::UnityEngine::Timeline::TimelineAsset_MediaType m_MediaType; // 0x10

		::System::Void _ctor(::UnityEngine::Timeline::TimelineAsset_MediaType mt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset_MediaType))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKMEDIATYPE__CTOR_OFFSET))(this, mt);
		}
	};
}
