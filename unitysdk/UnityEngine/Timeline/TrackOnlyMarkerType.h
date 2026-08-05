#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNITYENGINE_TIMELINE_TRACKONLYMARKERTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F964FA0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackOnlyMarkerType_TypeDefinitionIndex = 33049;

	class TrackOnlyMarkerType : public ::System::Attribute
	{
	public:
		::System::Type* markerType; // 0x10

		::System::Void _ctor(::System::Type* markerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKONLYMARKERTYPE__CTOR_OFFSET))(this, markerType);
		}
	};
}
