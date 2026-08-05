#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/ComponentModel/BindableSupport.h"
#include "unitysdk/System/ComponentModel/BindingDirection.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D882520)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D882580)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_GET_BINDABLE_OFFSET UNITYSDK_OFFSET(0x1D882500)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1D882510)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D882590)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D882650)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8824B0)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D8824C0)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D8824E0)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8824A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BindableAttribute_TypeDefinitionIndex = 2821;

	class BindableAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::BindableAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::BindableAttribute**)Il2CppClass::FromTypeDefinitionIndex(BindableAttribute_TypeDefinitionIndex)->GetStaticField(0x28D0);
		}
		static ::System::ComponentModel::BindableAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::BindableAttribute**)Il2CppClass::FromTypeDefinitionIndex(BindableAttribute_TypeDefinitionIndex)->GetStaticField(0x28D8);
		}
		static ::System::ComponentModel::BindableAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::BindableAttribute**)Il2CppClass::FromTypeDefinitionIndex(BindableAttribute_TypeDefinitionIndex)->GetStaticField(0x28E0);
		}
		::System::Boolean isDefault; // 0x10
		::System::Boolean bindable; // 0x11
		::System::ComponentModel::BindingDirection direction; // 0x14

		::System::Void _ctor(::System::Boolean bindable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE__CTOR_OFFSET))(this, bindable);
		}

		::System::Void _ctor_1(::System::Boolean bindable, ::System::ComponentModel::BindingDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::ComponentModel::BindingDirection))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE__CTOR_1_OFFSET))(this, bindable, direction);
		}

		::System::Void _ctor_2(::System::ComponentModel::BindableSupport flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::BindableSupport))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE__CTOR_2_OFFSET))(this, flags);
		}

		::System::Void _ctor_3(::System::ComponentModel::BindableSupport flags, ::System::ComponentModel::BindingDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::BindableSupport, ::System::ComponentModel::BindingDirection))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE__CTOR_3_OFFSET))(this, flags, direction);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_Bindable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_GET_BINDABLE_OFFSET))(this);
		}

		::System::ComponentModel::BindingDirection get_Direction()
		{
			return ((::System::ComponentModel::BindingDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_GET_DIRECTION_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
