#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_CONTEXTMENU__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A434E40)
#define UNITYENGINE_CONTEXTMENU__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A434E50)
#define UNITYENGINE_CONTEXTMENU__CTOR_OFFSET UNITYSDK_OFFSET(0x1A434E30)

namespace UnityEngine
{
	inline static constexpr unsigned int ContextMenu_TypeDefinitionIndex = 4114;

	class ContextMenu : public ::System::Attribute
	{
	public:
		::System::String* menuItem; // 0x10
		::System::Int32 priority; // 0x18
		::System::Boolean validate; // 0x1C

		::System::Void _ctor(::System::String* itemName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTEXTMENU__CTOR_OFFSET))(this, itemName);
		}

		::System::Void _ctor_1(::System::String* itemName, ::System::Boolean isValidateFunction)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTEXTMENU__CTOR_1_OFFSET))(this, itemName, isValidateFunction);
		}

		::System::Void _ctor_2(::System::String* itemName, ::System::Boolean isValidateFunction, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTEXTMENU__CTOR_2_OFFSET))(this, itemName, isValidateFunction, priority);
		}
	};
}
