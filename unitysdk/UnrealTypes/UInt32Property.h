#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/UnrealTypes/UnmanagedProperty_1.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class UInt32PropertyParams; }

#define UNREALTYPES_UINT32PROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1D1BE580)
#define UNREALTYPES_UINT32PROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1D1BE590)
#define UNREALTYPES_UINT32PROPERTY_SETINTPROPERTYVALUE_1_OFFSET UNITYSDK_OFFSET(0x1D1BE5B0)
#define UNREALTYPES_UINT32PROPERTY_SETINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1D1BE5A0)
#define UNREALTYPES_UINT32PROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D1AE610)
#define UNREALTYPES_UINT32PROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BC510)

namespace UnrealTypes
{
	inline static constexpr unsigned int UInt32Property_TypeDefinitionIndex = 27771;

	class UInt32Property : public ::UnrealTypes::UnmanagedProperty_1<::System::UInt32>
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT32PROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::UInt32PropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::UInt32PropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT32PROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}

		::System::Int64 GetSignedIntPropertyValue(::System::Void* address)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT32PROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}

		::System::UInt64 GetUnsignedIntPropertyValue(::System::Void* address)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT32PROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}

		::System::Void SetIntPropertyValue(::System::Void* address, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int64))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT32PROPERTY_SETINTPROPERTYVALUE_OFFSET))(this, address, value);
		}

		::System::Void SetIntPropertyValue_1(::System::Void* address, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::UInt64))((::PBYTE)hIl2Cpp + UNREALTYPES_UINT32PROPERTY_SETINTPROPERTYVALUE_1_OFFSET))(this, address, value);
		}
	};
}
