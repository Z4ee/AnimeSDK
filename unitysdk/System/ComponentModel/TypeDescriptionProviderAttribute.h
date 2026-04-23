#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDERATTRIBUTE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1A0CF600)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0CF580)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0CF510)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptionProviderAttribute_TypeDefinitionIndex = 2625;

	class TypeDescriptionProviderAttribute : public ::System::Attribute
	{
	public:
		::System::String* _typeName; // 0x10

		::System::Void _ctor(::System::String* typeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDERATTRIBUTE__CTOR_OFFSET))(this, typeName);
		}

		::System::Void _ctor_1(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDERATTRIBUTE__CTOR_1_OFFSET))(this, type);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDERATTRIBUTE_GET_TYPENAME_OFFSET))(this);
		}
	};
}
