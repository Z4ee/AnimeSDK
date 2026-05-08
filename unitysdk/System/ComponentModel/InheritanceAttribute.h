#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/ComponentModel/InheritanceLevel.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x18FAA250)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18FAA2B0)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_GET_INHERITANCELEVEL_OFFSET UNITYSDK_OFFSET(0x18FAA240)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18FAA2C0)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18FAA380)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FAA4A0)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18FAA230)
#define SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAA1B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int InheritanceAttribute_TypeDefinitionIndex = 3017;

	class InheritanceAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::InheritanceAttribute** StaticGet_Inherited()
		{
			return (::System::ComponentModel::InheritanceAttribute**)Il2CppClass::FromTypeDefinitionIndex(InheritanceAttribute_TypeDefinitionIndex)->GetStaticField(0x2B90);
		}
		static ::System::ComponentModel::InheritanceAttribute** StaticGet_NotInherited()
		{
			return (::System::ComponentModel::InheritanceAttribute**)Il2CppClass::FromTypeDefinitionIndex(InheritanceAttribute_TypeDefinitionIndex)->GetStaticField(0x2B98);
		}
		static ::System::ComponentModel::InheritanceAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::InheritanceAttribute**)Il2CppClass::FromTypeDefinitionIndex(InheritanceAttribute_TypeDefinitionIndex)->GetStaticField(0x2BA0);
		}
		static ::System::ComponentModel::InheritanceAttribute** StaticGet_InheritedReadOnly()
		{
			return (::System::ComponentModel::InheritanceAttribute**)Il2CppClass::FromTypeDefinitionIndex(InheritanceAttribute_TypeDefinitionIndex)->GetStaticField(0x2BA8);
		}
		::System::ComponentModel::InheritanceLevel inheritanceLevel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::ComponentModel::InheritanceLevel inheritanceLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::InheritanceLevel))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE__CTOR_1_OFFSET))(this, inheritanceLevel);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::ComponentModel::InheritanceLevel get_InheritanceLevel()
		{
			return ((::System::ComponentModel::InheritanceLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_GET_INHERITANCELEVEL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INHERITANCEATTRIBUTE_TOSTRING_OFFSET))(this);
		}
	};
}
