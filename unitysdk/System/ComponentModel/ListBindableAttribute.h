#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/ComponentModel/BindableSupport.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A47EB0)
#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A47F10)
#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_GET_LISTBINDABLE_OFFSET UNITYSDK_OFFSET(0x19A47EA0)
#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19A47F20)
#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A47FE0)
#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A47E90)
#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A47E80)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ListBindableAttribute_TypeDefinitionIndex = 2935;

	class ListBindableAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::ListBindableAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::ListBindableAttribute**)Il2CppClass::FromTypeDefinitionIndex(ListBindableAttribute_TypeDefinitionIndex)->GetStaticField(0x3660);
		}
		static ::System::ComponentModel::ListBindableAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::ListBindableAttribute**)Il2CppClass::FromTypeDefinitionIndex(ListBindableAttribute_TypeDefinitionIndex)->GetStaticField(0x3668);
		}
		static ::System::ComponentModel::ListBindableAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::ListBindableAttribute**)Il2CppClass::FromTypeDefinitionIndex(ListBindableAttribute_TypeDefinitionIndex)->GetStaticField(0x3670);
		}
		::System::Boolean listBindable; // 0x10
		::System::Boolean isDefault; // 0x11

		::System::Void _ctor(::System::Boolean listBindable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE__CTOR_OFFSET))(this, listBindable);
		}

		::System::Void _ctor_1(::System::ComponentModel::BindableSupport flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::BindableSupport))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE__CTOR_1_OFFSET))(this, flags);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_ListBindable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_GET_LISTBINDABLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
