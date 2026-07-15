#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_BOOTSTRING_ADAPT_OFFSET UNITYSDK_OFFSET(0x172A6500)
#define SYSTEM_GLOBALIZATION_BOOTSTRING_DECODEDIGIT_OFFSET UNITYSDK_OFFSET(0x172A6580)
#define SYSTEM_GLOBALIZATION_BOOTSTRING_DECODE_OFFSET UNITYSDK_OFFSET(0x172A65B0)
#define SYSTEM_GLOBALIZATION_BOOTSTRING_ENCODEDIGIT_OFFSET UNITYSDK_OFFSET(0x172A64F0)
#define SYSTEM_GLOBALIZATION_BOOTSTRING_ENCODE_OFFSET UNITYSDK_OFFSET(0x172A5BD0)
#define SYSTEM_GLOBALIZATION_BOOTSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x172A5B90)

namespace System::Globalization
{
	inline static constexpr unsigned int Bootstring_TypeDefinitionIndex = 790;

	class Bootstring : public ::System::Object
	{
	public:
		::System::Int32 skew; // 0x10
		::System::Int32 tmax; // 0x14
		::System::Int32 damp; // 0x18
		::System::Char delimiter; // 0x1C
		::System::Int32 initial_n; // 0x20
		::System::Int32 base_num; // 0x24
		::System::Int32 initial_bias; // 0x28
		::System::Int32 tmin; // 0x2C

		::System::Void _ctor(::System::Char a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* Encode(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_ENCODE_OFFSET))(this, a1, a2);
		}

		::System::Char EncodeDigit(::System::Int32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_ENCODEDIGIT_OFFSET))(this, a1);
		}

		::System::Int32 DecodeDigit(::System::Char a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_DECODEDIGIT_OFFSET))(this, a1);
		}

		::System::Int32 Adapt(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_ADAPT_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Decode(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_DECODE_OFFSET))(this, a1, a2);
		}
	};
}
