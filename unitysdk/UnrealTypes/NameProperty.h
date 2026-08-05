#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/UnrealTypes/UnmanagedProperty_1.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class NamePropertyParams; }

#define UNREALTYPES_NAMEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E384B80)
#define UNREALTYPES_NAMEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E38FEB0)

namespace UnrealTypes
{
	inline static constexpr unsigned int NameProperty_TypeDefinitionIndex = 28383;

	class NameProperty : public ::UnrealTypes::UnmanagedProperty_1<::Foundation::Unreal::FName>
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_NAMEPROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::NamePropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::NamePropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_NAMEPROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}
	};
}
