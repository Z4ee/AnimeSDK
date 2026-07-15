#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Timeline/TrackBindingFlags.h"

namespace System { class Type; }

#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3D3710)
#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D3700)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackBindingTypeAttribute_TypeDefinitionIndex = 36704;

	class TrackBindingTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Type* type; // 0x10
		::UnityEngine::Timeline::TrackBindingFlags flags; // 0x18

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Type* a1, ::UnityEngine::Timeline::TrackBindingFlags a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::UnityEngine::Timeline::TrackBindingFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
