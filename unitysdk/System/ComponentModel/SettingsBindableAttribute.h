#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C7000E0)
#define SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C700140)
#define SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_GET_BINDABLE_OFFSET UNITYSDK_OFFSET(0x1C7000D0)
#define SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C700150)
#define SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7000C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int SettingsBindableAttribute_TypeDefinitionIndex = 2980;

	class SettingsBindableAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::SettingsBindableAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::SettingsBindableAttribute**)Il2CppClass::FromTypeDefinitionIndex(SettingsBindableAttribute_TypeDefinitionIndex)->GetStaticField(0x2BF0);
		}
		static ::System::ComponentModel::SettingsBindableAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::SettingsBindableAttribute**)Il2CppClass::FromTypeDefinitionIndex(SettingsBindableAttribute_TypeDefinitionIndex)->GetStaticField(0x2BF8);
		}
		::System::Boolean _bindable; // 0x10

		::System::Void _ctor(::System::Boolean bindable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE__CTOR_OFFSET))(this, bindable);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_Bindable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_GET_BINDABLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
