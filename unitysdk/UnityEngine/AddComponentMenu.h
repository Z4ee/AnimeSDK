#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_ADDCOMPONENTMENU__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED052E0)
#define UNITYENGINE_ADDCOMPONENTMENU__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED052D0)

namespace UnityEngine
{
	inline static constexpr unsigned int AddComponentMenu_TypeDefinitionIndex = 4301;

	class AddComponentMenu : public ::System::Attribute
	{
	public:
		::System::String* m_AddComponentMenu; // 0x10
		::System::Int32 m_Ordering; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDCOMPONENTMENU__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDCOMPONENTMENU__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
