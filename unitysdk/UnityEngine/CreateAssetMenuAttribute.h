#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_CREATEASSETMENUATTRIBUTE_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1A434F00)
#define UNITYENGINE_CREATEASSETMENUATTRIBUTE_SET_MENUNAME_OFFSET UNITYSDK_OFFSET(0x1A434EF0)
#define UNITYENGINE_CREATEASSETMENUATTRIBUTE_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1A434F10)
#define UNITYENGINE_CREATEASSETMENUATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A434F20)

namespace UnityEngine
{
	inline static constexpr unsigned int CreateAssetMenuAttribute_TypeDefinitionIndex = 4113;

	class CreateAssetMenuAttribute : public ::System::Attribute
	{
	public:
		::System::String* _fileName_k__BackingField; // 0x10
		::System::String* _menuName_k__BackingField; // 0x18
		::System::Int32 _order_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CREATEASSETMENUATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void set_menuName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CREATEASSETMENUATTRIBUTE_SET_MENUNAME_OFFSET))(this, value);
		}

		::System::Void set_fileName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CREATEASSETMENUATTRIBUTE_SET_FILENAME_OFFSET))(this, value);
		}

		::System::Void set_order(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CREATEASSETMENUATTRIBUTE_SET_ORDER_OFFSET))(this, value);
		}
	};
}
