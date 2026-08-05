#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x1E38EF20)
#define UNREALTYPES_FPROPERTYBAGPROPERTYDESC_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E38EED0)

namespace UnrealTypes
{
	inline static constexpr unsigned int FPropertyBagPropertyDesc_StructOpsTypeTraits_TypeDefinitionIndex = 28407;

	class FPropertyBagPropertyDesc_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGPROPERTYDESC_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
