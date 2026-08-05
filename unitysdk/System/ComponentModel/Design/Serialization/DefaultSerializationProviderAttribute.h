#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DEFAULTSERIALIZATIONPROVIDERATTRIBUTE_GET_PROVIDERTYPENAME_OFFSET UNITYSDK_OFFSET(0x1D8827C0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DEFAULTSERIALIZATIONPROVIDERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D882750)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DEFAULTSERIALIZATIONPROVIDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8826D0)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int DefaultSerializationProviderAttribute_TypeDefinitionIndex = 3099;

	class DefaultSerializationProviderAttribute : public ::System::Attribute
	{
	public:
		::System::String* _providerTypeName; // 0x10

		::System::Void _ctor(::System::Type* providerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DEFAULTSERIALIZATIONPROVIDERATTRIBUTE__CTOR_OFFSET))(this, providerType);
		}

		::System::Void _ctor_1(::System::String* providerTypeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DEFAULTSERIALIZATIONPROVIDERATTRIBUTE__CTOR_1_OFFSET))(this, providerTypeName);
		}

		::System::String* get_ProviderTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DEFAULTSERIALIZATIONPROVIDERATTRIBUTE_GET_PROVIDERTYPENAME_OFFSET))(this);
		}
	};
}
