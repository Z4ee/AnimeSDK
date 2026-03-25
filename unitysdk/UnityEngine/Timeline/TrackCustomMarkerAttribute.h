#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNITYENGINE_TIMELINE_TRACKCUSTOMMARKERATTRIBUTE_SUPPORTTRACKTYPE_OFFSET UNITYSDK_OFFSET(0x189C5220)
#define UNITYENGINE_TIMELINE_TRACKCUSTOMMARKERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x189C5210)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackCustomMarkerAttribute_TypeDefinitionIndex = 29845;

	class TrackCustomMarkerAttribute : public ::System::Attribute
	{
	public:
		::System::Type* markerType; // 0x10

		::System::Void _ctor(::System::Type* clipClass)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCUSTOMMARKERATTRIBUTE__CTOR_OFFSET))(this, clipClass);
		}

		::System::Boolean SupportTrackType(::System::Type* markerType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCUSTOMMARKERATTRIBUTE_SUPPORTTRACKTYPE_OFFSET))(this, markerType);
		}
	};
}
