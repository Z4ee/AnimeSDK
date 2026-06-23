#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnrealTypes/EnumFlags.h"

namespace System { class String; }
namespace System { class Type; }

#define UNREALTYPES_ENUMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AECD0)

namespace UnrealTypes
{
	inline static constexpr unsigned int EnumParams_TypeDefinitionIndex = 27751;

	class EnumParams : public ::System::Object
	{
	public:
		::Il2CppArray<::System::ValueTuple_2<::System::String*, ::System::Int64>>* EnumeratorParams; // 0x10
		::System::String* Name; // 0x18
		::System::Type* EnumType; // 0x20
		::System::String* Namespace; // 0x28
		::System::Type* UnderlyingType; // 0x30
		::System::UInt32 TypeId; // 0x38
		::UnrealTypes::EnumFlags Flags; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUMPARAMS__CTOR_OFFSET))(this);
		}
	};
}
