#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_CUSTOMSTYLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E4260)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int CustomStyleAttribute_TypeDefinitionIndex = 35628;

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
