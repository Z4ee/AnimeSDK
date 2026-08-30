#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Timeline/CreateClipFlags.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_TIMELINE_TRACKCLIPTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF82D50)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackClipTypeAttribute_TypeDefinitionIndex = 37560;

	class TrackClipTypeAttribute : public ::System::Attribute
	{
	public:
		::System::String* showIfMethod; // 0x10
		::System::Type* inspectedType; // 0x18
		::UnityEngine::Timeline::CreateClipFlags clipFlags; // 0x20
		::System::Boolean allowAutoCreate; // 0x24
		::System::Boolean isHideSubClass; // 0x25

		::System::Void _ctor(::System::Type* a1, ::System::Boolean a2, ::UnityEngine::Timeline::CreateClipFlags a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean, ::UnityEngine::Timeline::CreateClipFlags, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCLIPTYPEATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
