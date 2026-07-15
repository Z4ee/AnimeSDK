#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNITYENGINE_TIMELINE_TRACKCUSTOMMARKERATTRIBUTE_SUPPORTTRACKTYPE_OFFSET UNITYSDK_OFFSET(0x1A3D3780)
#define UNITYENGINE_TIMELINE_TRACKCUSTOMMARKERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D3770)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackCustomMarkerAttribute_TypeDefinitionIndex = 36647;

	class TrackCustomMarkerAttribute : public ::System::Attribute
	{
	public:
		::System::Type* markerType; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCUSTOMMARKERATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean SupportTrackType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCUSTOMMARKERATTRIBUTE_SUPPORTTRACKTYPE_OFFSET))(this, a1);
		}
	};
}
