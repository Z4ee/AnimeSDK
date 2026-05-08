#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_MENUCATEGORYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0B8B0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MenuCategoryAttribute_TypeDefinitionIndex = 30866;

	class MenuCategoryAttribute : public ::System::Attribute
	{
	public:
		::System::String* category; // 0x10

		::System::Void _ctor(::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MENUCATEGORYATTRIBUTE__CTOR_OFFSET))(this, category);
		}
	};
}
