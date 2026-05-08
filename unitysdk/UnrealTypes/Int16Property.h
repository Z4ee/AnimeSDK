#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/UnmanagedProperty_1.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class Int16PropertyParams; }

#define UNREALTYPES_INT16PROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1ADA3110)
#define UNREALTYPES_INT16PROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1ADA3120)
#define UNREALTYPES_INT16PROPERTY_SETINTPROPERTYVALUE_1_OFFSET UNITYSDK_OFFSET(0x1ADA3140)
#define UNREALTYPES_INT16PROPERTY_SETINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1ADA3130)
#define UNREALTYPES_INT16PROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD9AFC0)

namespace UnrealTypes
{
	inline static constexpr unsigned int Int16Property_TypeDefinitionIndex = 25276;

	class Int16Property : public ::UnrealTypes::UnmanagedProperty_1<::System::Int16>
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::Int16PropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::Int16PropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_INT16PROPERTY__CTOR_OFFSET))(this, owner, prop);
		}

		::System::Int64 GetSignedIntPropertyValue(::System::Void* address)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_INT16PROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}

		::System::UInt64 GetUnsignedIntPropertyValue(::System::Void* address)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_INT16PROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}

		::System::Void SetIntPropertyValue(::System::Void* address, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int64))((::PBYTE)hIl2Cpp + UNREALTYPES_INT16PROPERTY_SETINTPROPERTYVALUE_OFFSET))(this, address, value);
		}

		::System::Void SetIntPropertyValue_1(::System::Void* address, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::UInt64))((::PBYTE)hIl2Cpp + UNREALTYPES_INT16PROPERTY_SETINTPROPERTYVALUE_1_OFFSET))(this, address, value);
		}
	};
}
