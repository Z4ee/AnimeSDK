#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/Property.h"

namespace UnrealTypes { class ArrayPropertyParams; }
namespace UnrealTypes { class IFieldVariant; }

#define UNREALTYPES_ARRAYPROPERTY_ADDCPPPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D1AC470)
#define UNREALTYPES_ARRAYPROPERTY_LINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D1AC480)
#define UNREALTYPES_ARRAYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AC380)

namespace UnrealTypes
{
	inline static constexpr unsigned int ArrayProperty_TypeDefinitionIndex = 27781;

	class ArrayProperty : public ::UnrealTypes::Property
	{
	public:
		::UnrealTypes::Property* Inner; // 0x58

		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::ArrayPropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::ArrayPropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY__CTOR_OFFSET))(this, owner, prop);
		}

		::System::Void AddCppProperty(::UnrealTypes::Property* property)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY_ADDCPPPROPERTY_OFFSET))(this, property);
		}

		::System::Void LinkInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY_LINKINTERNAL_OFFSET))(this);
		}
	};
}
