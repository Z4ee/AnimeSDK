#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7DAD30)
#define SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7DAD90)
#define SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_GET_IMMUTABLE_OFFSET UNITYSDK_OFFSET(0x1A7DAD20)
#define SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A7DADA0)
#define SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7DAE60)
#define SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DAD10)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ImmutableObjectAttribute_TypeDefinitionIndex = 2914;

	class ImmutableObjectAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::ImmutableObjectAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::ImmutableObjectAttribute**)Il2CppClass::FromTypeDefinitionIndex(ImmutableObjectAttribute_TypeDefinitionIndex)->GetStaticField(0x2670);
		}
		static ::System::ComponentModel::ImmutableObjectAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::ImmutableObjectAttribute**)Il2CppClass::FromTypeDefinitionIndex(ImmutableObjectAttribute_TypeDefinitionIndex)->GetStaticField(0x2678);
		}
		static ::System::ComponentModel::ImmutableObjectAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::ImmutableObjectAttribute**)Il2CppClass::FromTypeDefinitionIndex(ImmutableObjectAttribute_TypeDefinitionIndex)->GetStaticField(0x2680);
		}
		::System::Boolean immutable; // 0x10

		::System::Void _ctor(::System::Boolean immutable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE__CTOR_OFFSET))(this, immutable);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_Immutable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_GET_IMMUTABLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
