#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_ADDCOMPONENTMENU__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A424660)
#define UNITYENGINE_ADDCOMPONENTMENU__CTOR_OFFSET UNITYSDK_OFFSET(0x1A424650)

namespace UnityEngine
{
	inline static constexpr unsigned int AddComponentMenu_TypeDefinitionIndex = 4112;

	class AddComponentMenu : public ::System::Attribute
	{
	public:
		::System::String* m_AddComponentMenu; // 0x10
		::System::Int32 m_Ordering; // 0x18

		::System::Void _ctor(::System::String* menuName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDCOMPONENTMENU__CTOR_OFFSET))(this, menuName);
		}

		::System::Void _ctor_1(::System::String* menuName, ::System::Int32 order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDCOMPONENTMENU__CTOR_1_OFFSET))(this, menuName, order);
		}
	};
}
