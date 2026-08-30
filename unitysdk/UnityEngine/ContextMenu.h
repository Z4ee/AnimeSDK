#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_CONTEXTMENU__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED14F50)
#define UNITYENGINE_CONTEXTMENU__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1ED14F60)
#define UNITYENGINE_CONTEXTMENU__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED14F40)

namespace UnityEngine
{
	inline static constexpr unsigned int ContextMenu_TypeDefinitionIndex = 4303;

	class ContextMenu : public ::System::Attribute
	{
	public:
		::System::String* menuItem; // 0x10
		::System::Boolean validate; // 0x18
		::System::Int32 priority; // 0x1C

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTEXTMENU__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTEXTMENU__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTEXTMENU__CTOR_2_OFFSET))(this, a1, a2, a3);
		}
	};
}
