#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNREALTYPES_TYPEHASH_GETTYPEHASH_1_OFFSET UNITYSDK_OFFSET(0x1E3964B0)
#define UNREALTYPES_TYPEHASH_GETTYPEHASH_OFFSET UNITYSDK_OFFSET(0x1E395B40)
#define UNREALTYPES_TYPEHASH_HASHCOMBINEFAST_OFFSET UNITYSDK_OFFSET(0x1E38E440)

namespace UnrealTypes
{
	inline static constexpr unsigned int TypeHash_TypeDefinitionIndex = 28299;

	class TypeHash : public ::System::Object
	{
	public:
		static ::System::UInt32 HashCombineFast(::System::UInt32 a, ::System::UInt32 b)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNREALTYPES_TYPEHASH_HASHCOMBINEFAST_OFFSET))(a, b);
		}

		static ::System::UInt32 GetTypeHash(::System::Byte value)
		{
			return ((::System::UInt32(*)(::System::Byte))((::PBYTE)hIl2Cpp + UNREALTYPES_TYPEHASH_GETTYPEHASH_OFFSET))(value);
		}

		static ::System::UInt32 GetTypeHash_1(::System::UInt16 value)
		{
			return ((::System::UInt32(*)(::System::UInt16))((::PBYTE)hIl2Cpp + UNREALTYPES_TYPEHASH_GETTYPEHASH_1_OFFSET))(value);
		}
	};
}
