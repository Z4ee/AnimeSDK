#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6F4F70)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C6F50D0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GETLOCALIZEDSTRING_OFFSET UNITYSDK_OFFSET(0x1C6F5180)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1C6F46E0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_APPEARANCE_OFFSET UNITYSDK_OFFSET(0x1C6F4780)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_ASYNCHRONOUS_OFFSET UNITYSDK_OFFSET(0x1C6F4810)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1C6F48A0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1C6F4F30)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1C6F4930)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1C6F49C0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DESIGN_OFFSET UNITYSDK_OFFSET(0x1C6F4AB0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DRAGDROP_OFFSET UNITYSDK_OFFSET(0x1C6F4B40)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_FOCUS_OFFSET UNITYSDK_OFFSET(0x1C6F4BD0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1C6F4C60)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1C6F4CF0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x1C6F4D80)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_MOUSE_OFFSET UNITYSDK_OFFSET(0x1C6F4E10)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_WINDOWSTYLE_OFFSET UNITYSDK_OFFSET(0x1C6F4EA0)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C6F5460)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6F4770)
#define SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F4A70)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CategoryAttribute_TypeDefinitionIndex = 2830;

	class CategoryAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::CategoryAttribute** StaticGet_layout()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2AE0);
		}
		static ::System::ComponentModel::CategoryAttribute** StaticGet_focus()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2AE8);
		}
		static ::System::ComponentModel::CategoryAttribute** StaticGet_design()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2AF0);
		}
		static ::System::ComponentModel::CategoryAttribute** StaticGet_mouse()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2AF8);
		}
		static ::System::ComponentModel::CategoryAttribute** StaticGet_key()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2B00);
		}
		static ::System::ComponentModel::CategoryAttribute** StaticGet_windowStyle()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2B08);
		}
		static ::System::ComponentModel::CategoryAttribute** StaticGet_appearance()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2B10);
		}
		static ::System::ComponentModel::CategoryAttribute** StaticGet_format()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2B18);
		}
		static ::System::ComponentModel::CategoryAttribute** StaticGet_defAttr()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2B20);
		}
		static ::System::ComponentModel::CategoryAttribute** StaticGet_asynchronous()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2B28);
		}
		static ::System::ComponentModel::CategoryAttribute** StaticGet_data()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2B30);
		}
		static ::System::ComponentModel::CategoryAttribute** StaticGet_behavior()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2B38);
		}
		static ::System::ComponentModel::CategoryAttribute** StaticGet_dragDrop()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2B40);
		}
		static ::System::ComponentModel::CategoryAttribute** StaticGet_action()
		{
			return (::System::ComponentModel::CategoryAttribute**)Il2CppClass::FromTypeDefinitionIndex(CategoryAttribute_TypeDefinitionIndex)->GetStaticField(0x2B48);
		}
		::System::String* categoryValue; // 0x10
		::System::Boolean localized; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE__CTOR_1_OFFSET))(this, category);
		}

		static ::System::ComponentModel::CategoryAttribute* get_Action()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_ACTION_OFFSET))();
		}

		static ::System::ComponentModel::CategoryAttribute* get_Appearance()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_APPEARANCE_OFFSET))();
		}

		static ::System::ComponentModel::CategoryAttribute* get_Asynchronous()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_ASYNCHRONOUS_OFFSET))();
		}

		static ::System::ComponentModel::CategoryAttribute* get_Behavior()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_BEHAVIOR_OFFSET))();
		}

		static ::System::ComponentModel::CategoryAttribute* get_Data()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DATA_OFFSET))();
		}

		static ::System::ComponentModel::CategoryAttribute* get_Default()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DEFAULT_OFFSET))();
		}

		static ::System::ComponentModel::CategoryAttribute* get_Design()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DESIGN_OFFSET))();
		}

		static ::System::ComponentModel::CategoryAttribute* get_DragDrop()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_DRAGDROP_OFFSET))();
		}

		static ::System::ComponentModel::CategoryAttribute* get_Focus()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_FOCUS_OFFSET))();
		}

		static ::System::ComponentModel::CategoryAttribute* get_Format()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_FORMAT_OFFSET))();
		}

		static ::System::ComponentModel::CategoryAttribute* get_Key()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_KEY_OFFSET))();
		}

		static ::System::ComponentModel::CategoryAttribute* get_Layout()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_LAYOUT_OFFSET))();
		}

		static ::System::ComponentModel::CategoryAttribute* get_Mouse()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_MOUSE_OFFSET))();
		}

		static ::System::ComponentModel::CategoryAttribute* get_WindowStyle()
		{
			return ((::System::ComponentModel::CategoryAttribute*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_WINDOWSTYLE_OFFSET))();
		}

		::System::String* get_Category()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GET_CATEGORY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* GetLocalizedString(::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_GETLOCALIZEDSTRING_OFFSET))(this, value);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CATEGORYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
