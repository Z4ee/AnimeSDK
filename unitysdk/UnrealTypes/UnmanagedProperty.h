#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/UnrealTypes/Property.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class PropertyParamsBase; }

#define UNREALTYPES_UNMANAGEDPROPERTY_GETPROPERTYVALUEPTRINCONTAINER_OFFSET UNITYSDK_OFFSET(0x1ADAB290)
#define UNREALTYPES_UNMANAGEDPROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1ADAB0D0)
#define UNREALTYPES_UNMANAGEDPROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1ADAB140)
#define UNREALTYPES_UNMANAGEDPROPERTY_SETINTPROPERTYVALUE_1_OFFSET UNITYSDK_OFFSET(0x1ADAB220)
#define UNREALTYPES_UNMANAGEDPROPERTY_SETINTPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1ADAB1B0)
#define UNREALTYPES_UNMANAGEDPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ADAB0C0)
#define UNREALTYPES_UNMANAGEDPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAB0B0)

namespace UnrealTypes
{
	inline static constexpr unsigned int UnmanagedProperty_TypeDefinitionIndex = 25273;

	class UnmanagedProperty : public ::UnrealTypes::Property
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_UNMANAGEDPROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::PropertyParamsBase* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::PropertyParamsBase*))((::PBYTE)hIl2Cpp + UNREALTYPES_UNMANAGEDPROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}

		::System::Int64 GetSignedIntPropertyValue(::System::Void* address)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_UNMANAGEDPROPERTY_GETSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}

		::System::UInt64 GetUnsignedIntPropertyValue(::System::Void* address)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNREALTYPES_UNMANAGEDPROPERTY_GETUNSIGNEDINTPROPERTYVALUE_OFFSET))(this, address);
		}

		::System::Void SetIntPropertyValue(::System::Void* address, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int64))((::PBYTE)hIl2Cpp + UNREALTYPES_UNMANAGEDPROPERTY_SETINTPROPERTYVALUE_OFFSET))(this, address, value);
		}

		::System::Void SetIntPropertyValue_1(::System::Void* address, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::UInt64))((::PBYTE)hIl2Cpp + UNREALTYPES_UNMANAGEDPROPERTY_SETINTPROPERTYVALUE_1_OFFSET))(this, address, value);
		}

		::System::Void* GetPropertyValuePtrInContainer(::System::Void* container, ::System::Int32 arrayIndex)
		{
			return ((::System::Void*(*)(::PVOID, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_UNMANAGEDPROPERTY_GETPROPERTYVALUEPTRINCONTAINER_OFFSET))(this, container, arrayIndex);
		}
	};
}
