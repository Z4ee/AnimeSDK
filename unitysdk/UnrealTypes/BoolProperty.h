#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/UnrealTypes/UnmanagedProperty_1.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class IFieldVariant; }

#define UNREALTYPES_BOOLPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E382A20)
#define UNREALTYPES_BOOLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3829F0)

namespace UnrealTypes
{
	inline static constexpr unsigned int BoolProperty_TypeDefinitionIndex = 28378;

	class BoolProperty : public ::UnrealTypes::UnmanagedProperty_1<::System::Boolean>
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_BOOLPROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::BoolPropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::BoolPropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_BOOLPROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}
	};
}
