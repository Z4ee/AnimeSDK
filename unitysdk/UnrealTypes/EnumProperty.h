#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/UnrealTypes/Property.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class UnmanagedProperty; }

#define UNREALTYPES_ENUMPROPERTY_ADDCPPPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D1AEE40)
#define UNREALTYPES_ENUMPROPERTY_GETPROPERTYVALUEINCONTAINER_1_OFFSET UNITYSDK_OFFSET(0x1D1AEF90)
#define UNREALTYPES_ENUMPROPERTY_GETPROPERTYVALUEINCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D1AEF30)
#define UNREALTYPES_ENUMPROPERTY_GET_MINALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1D1AECE0)
#define UNREALTYPES_ENUMPROPERTY_LINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D1AEEE0)
#define UNREALTYPES_ENUMPROPERTY_SETENUM_OFFSET UNITYSDK_OFFSET(0x1D1AEF20)
#define UNREALTYPES_ENUMPROPERTY_SETPROPERTYVALUEINCONTAINER_1_OFFSET UNITYSDK_OFFSET(0x1D1AF010)
#define UNREALTYPES_ENUMPROPERTY_SETPROPERTYVALUEINCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D1AEFD0)
#define UNREALTYPES_ENUMPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D1AE730)
#define UNREALTYPES_ENUMPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AED20)

namespace UnrealTypes
{
	inline static constexpr unsigned int EnumProperty_TypeDefinitionIndex = 27782;

	class EnumProperty : public ::UnrealTypes::Property
	{
	public:
		::UnrealTypes::Enum* Enum; // 0x58
		::UnrealTypes::UnmanagedProperty* UnderlyingProperty; // 0x60

		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::EnumPropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::EnumPropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}

		::System::Int32 get_MinAlignment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPROPERTY_GET_MINALIGNMENT_OFFSET))(this);
		}

		::System::Void AddCppProperty(::UnrealTypes::Property* property)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPROPERTY_ADDCPPPROPERTY_OFFSET))(this, property);
		}

		::System::Void LinkInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPROPERTY_LINKINTERNAL_OFFSET))(this);
		}

		::System::Void SetEnum(::UnrealTypes::Enum* enum_)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Enum*))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPROPERTY_SETENUM_OFFSET))(this, enum_);
		}

		::System::Int64 GetPropertyValueInContainer(::System::Void* container, ::System::Int32 arrayIndex)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPROPERTY_GETPROPERTYVALUEINCONTAINER_OFFSET))(this, container, arrayIndex);
		}

		::System::Int64 GetPropertyValueInContainer_1(::System::IntPtr container, ::System::Int32 arrayIndex)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPROPERTY_GETPROPERTYVALUEINCONTAINER_1_OFFSET))(this, container, arrayIndex);
		}

		::System::Void SetPropertyValueInContainer(::System::Void* container, ::System::Int64 value, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPROPERTY_SETPROPERTYVALUEINCONTAINER_OFFSET))(this, container, value, arrayIndex);
		}

		::System::Void SetPropertyValueInContainer_1(::System::IntPtr container, ::System::Int64 value, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPROPERTY_SETPROPERTYVALUEINCONTAINER_1_OFFSET))(this, container, value, arrayIndex);
		}
	};
}
