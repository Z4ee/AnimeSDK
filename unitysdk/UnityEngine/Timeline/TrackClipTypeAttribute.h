#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Timeline/CreateClipFlags.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_TIMELINE_TRACKCLIPTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x189C51C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackClipTypeAttribute_TypeDefinitionIndex = 29899;

	class TrackClipTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Type* inspectedType; // 0x10
		::System::String* showIfMethod; // 0x18
		::System::Boolean allowAutoCreate; // 0x20
		::System::Boolean isHideSubClass; // 0x21
		::UnityEngine::Timeline::CreateClipFlags clipFlags; // 0x24

		::System::Void _ctor(::System::Type* clipClass, ::System::Boolean autoCreate, ::UnityEngine::Timeline::CreateClipFlags createFlags, ::System::String* showIf, ::System::Boolean hideSubClass)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean, ::UnityEngine::Timeline::CreateClipFlags, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCLIPTYPEATTRIBUTE__CTOR_OFFSET))(this, clipClass, autoCreate, createFlags, showIf, hideSubClass);
		}
	};
}
