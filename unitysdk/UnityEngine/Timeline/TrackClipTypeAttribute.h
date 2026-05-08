#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNITYENGINE_TIMELINE_TRACKCLIPTYPEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BA18A30)
#define UNITYENGINE_TIMELINE_TRACKCLIPTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA18A20)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackClipTypeAttribute_TypeDefinitionIndex = 30855;

	class TrackClipTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Type* inspectedType; // 0x10
		::System::Boolean allowAutoCreate; // 0x18

		::System::Void _ctor(::System::Type* clipClass)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCLIPTYPEATTRIBUTE__CTOR_OFFSET))(this, clipClass);
		}

		::System::Void _ctor_1(::System::Type* clipClass, ::System::Boolean allowAutoCreate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCLIPTYPEATTRIBUTE__CTOR_1_OFFSET))(this, clipClass, allowAutoCreate);
		}
	};
}
