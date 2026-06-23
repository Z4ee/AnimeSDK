#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/UnrealTypes/UnmanagedProperty_1.h"

namespace UnrealTypes { class FloatPropertyParams; }
namespace UnrealTypes { class IFieldVariant; }

#define UNREALTYPES_FLOATPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D1AE670)
#define UNREALTYPES_FLOATPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B5FC0)

namespace UnrealTypes
{
	inline static constexpr unsigned int FloatProperty_TypeDefinitionIndex = 27773;

	class FloatProperty : public ::UnrealTypes::UnmanagedProperty_1<::System::Single>
	{
	public:
		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_FLOATPROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::FloatPropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::FloatPropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_FLOATPROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}
	};
}
