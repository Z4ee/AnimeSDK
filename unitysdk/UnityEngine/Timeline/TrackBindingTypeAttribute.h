#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Timeline/TrackBindingFlags.h"

namespace System { class Type; }

#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x189C51B0)
#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x189C51A0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackBindingTypeAttribute_TypeDefinitionIndex = 29902;

	class TrackBindingTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Type* type; // 0x10
		::UnityEngine::Timeline::TrackBindingFlags flags; // 0x18

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_OFFSET))(this, type);
		}

		::System::Void _ctor_1(::System::Type* type, ::UnityEngine::Timeline::TrackBindingFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::UnityEngine::Timeline::TrackBindingFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_1_OFFSET))(this, type, flags);
		}
	};
}
