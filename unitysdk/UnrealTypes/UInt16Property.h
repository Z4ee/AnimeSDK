#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/UnmanagedProperty_1.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class UInt16PropertyParams; }

#define UNREALTYPES_UINT16PROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E3964C0)
#define UNREALTYPES_UINT16PROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E3964D0)
#define UNREALTYPES_UINT16PROPERTY_SETINTPROPERTYVALUE_1_OFFSET UNITYSDK_OFFSET(0x1E3964F0)
#define UNREALTYPES_UINT16PROPERTY_SETINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E3964E0)
#define UNREALTYPES_UINT16PROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E384A90)

namespace UnrealTypes
{
	inline static constexpr unsigned int UInt16Property_TypeDefinitionIndex = 28373;

	class UInt16Property : public ::UnrealTypes::UnmanagedProperty_1<::System::UInt16>
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::UInt16PropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::UInt16PropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT16PROPERTY__CTOR_OFFSET))(this, owner, prop);
		}

		::System::Int64 GetSignedIntPropertyValue(::System::Void* address)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT16PROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}

		::System::UInt64 GetUnsignedIntPropertyValue(::System::Void* address)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT16PROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}

		::System::Void SetIntPropertyValue(::System::Void* address, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int64))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT16PROPERTY_SETINTPROPERTYVALUE_OFFSET))(this, address, value);
		}

		::System::Void SetIntPropertyValue_1(::System::Void* address, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::UInt64))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT16PROPERTY_SETINTPROPERTYVALUE_1_OFFSET))(this, address, value);
		}
	};
}
