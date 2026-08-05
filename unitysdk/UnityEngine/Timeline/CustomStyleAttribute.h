#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_CUSTOMSTYLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC17A10)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int CustomStyleAttribute_TypeDefinitionIndex = 33047;

	class CustomStyleAttribute : public ::System::Attribute
	{
	public:
		::System::String* ussStyle; // 0x10

		::System::Void _ctor(::System::String* ussStyle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUSTOMSTYLEATTRIBUTE__CTOR_OFFSET))(this, ussStyle);
		}
	};
}
