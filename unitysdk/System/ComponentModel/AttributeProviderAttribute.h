#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x19E27120)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x19E27110)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E26FE0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19E27090)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E26F70)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AttributeProviderAttribute_TypeDefinitionIndex = 2818;

	class AttributeProviderAttribute : public ::System::Attribute
	{
	public:
		::System::String* _propertyName; // 0x10
		::System::String* _typeName; // 0x18

		::System::Void _ctor(::System::String* typeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE__CTOR_OFFSET))(this, typeName);
		}

		::System::Void _ctor_1(::System::String* typeName, ::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE__CTOR_1_OFFSET))(this, typeName, propertyName);
		}

		::System::Void _ctor_2(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE__CTOR_2_OFFSET))(this, type);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_GET_TYPENAME_OFFSET))(this);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTEPROVIDERATTRIBUTE_GET_PROPERTYNAME_OFFSET))(this);
		}
	};
}
