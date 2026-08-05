#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_BOOTSTRING_ADAPT_OFFSET UNITYSDK_OFFSET(0x1D683AC0)
#define SYSTEM_GLOBALIZATION_BOOTSTRING_DECODEDIGIT_OFFSET UNITYSDK_OFFSET(0x1D683B40)
#define SYSTEM_GLOBALIZATION_BOOTSTRING_DECODE_OFFSET UNITYSDK_OFFSET(0x1D683B70)
#define SYSTEM_GLOBALIZATION_BOOTSTRING_ENCODEDIGIT_OFFSET UNITYSDK_OFFSET(0x1D683AB0)
#define SYSTEM_GLOBALIZATION_BOOTSTRING_ENCODE_OFFSET UNITYSDK_OFFSET(0x1D683190)
#define SYSTEM_GLOBALIZATION_BOOTSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D683150)

namespace System::Globalization
{
	inline static constexpr unsigned int Bootstring_TypeDefinitionIndex = 779;

	class Bootstring : public ::System::Object
	{
	public:
		::System::Int32 skew; // 0x10
		::System::Int32 tmax; // 0x14
		::System::Char delimiter; // 0x18
		::System::Int32 tmin; // 0x1C
		::System::Int32 initial_n; // 0x20
		::System::Int32 base_num; // 0x24
		::System::Int32 initial_bias; // 0x28
		::System::Int32 damp; // 0x2C

		::System::Void _ctor(::System::Char delimiter, ::System::Int32 baseNum, ::System::Int32 tmin, ::System::Int32 tmax, ::System::Int32 skew, ::System::Int32 damp, ::System::Int32 initialBias, ::System::Int32 initialN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING__CTOR_OFFSET))(this, delimiter, baseNum, tmin, tmax, skew, damp, initialBias, initialN);
		}

		::System::String* Encode(::System::String* s, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_ENCODE_OFFSET))(this, s, offset);
		}

		::System::Char EncodeDigit(::System::Int32 d)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_ENCODEDIGIT_OFFSET))(this, d);
		}

		::System::Int32 DecodeDigit(::System::Char c)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_DECODEDIGIT_OFFSET))(this, c);
		}

		::System::Int32 Adapt(::System::Int32 delta, ::System::Int32 numPoints, ::System::Boolean firstTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_ADAPT_OFFSET))(this, delta, numPoints, firstTime);
		}

		::System::String* Decode(::System::String* s, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_DECODE_OFFSET))(this, s, offset);
		}
	};
}
