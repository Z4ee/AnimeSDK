#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Numerics/BigNumber_BigNumberBuffer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class ArgumentException; }
namespace System { class String; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_NUMERICS_BIGNUMBER_ASREADONLYSPAN_OFFSET UNITYSDK_OFFSET(0x1C6C8540)
#define SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGERTOHEXSTRING_OFFSET UNITYSDK_OFFSET(0x1C6C8B90)
#define SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1C6BEB50)
#define SYSTEM_NUMERICS_BIGNUMBER_HEXNUMBERTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1C6C86A0)
#define SYSTEM_NUMERICS_BIGNUMBER_NUMBERTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1C6C8830)
#define SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_1_OFFSET UNITYSDK_OFFSET(0x1C6BA150)
#define SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1C6B9C30)
#define SYSTEM_NUMERICS_BIGNUMBER_PARSEFORMATSPECIFIER_OFFSET UNITYSDK_OFFSET(0x1C6C8AA0)
#define SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_1_OFFSET UNITYSDK_OFFSET(0x1C6BA2A0)
#define SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1C6BA000)
#define SYSTEM_NUMERICS_BIGNUMBER_TRYVALIDATEPARSESTYLEINTEGER_OFFSET UNITYSDK_OFFSET(0x1C6C8440)

namespace System::Numerics
{
	inline static constexpr unsigned int BigNumber_TypeDefinitionIndex = 3831;

	class BigNumber : public ::System::Object
	{
	public:
		static ::System::Boolean TryValidateParseStyleInteger(::System::Globalization::NumberStyles a1, ::System::ArgumentException*& a2)
		{
			return ((::System::Boolean(*)(::System::Globalization::NumberStyles, ::System::ArgumentException*&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_TRYVALIDATEPARSESTYLEINTEGER_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParseBigInteger(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3, ::System::Numerics::BigInteger& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseBigInteger_1(::System::ReadOnlySpan_1<::System::Char> a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3, ::System::Numerics::BigInteger& a4)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Numerics::BigInteger ParseBigInteger(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_OFFSET))(a1, a2, a3);
		}

		static ::System::ReadOnlySpan_1<::System::Char> AsReadOnlySpan(::System::String* a1)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_ASREADONLYSPAN_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger ParseBigInteger_1(::System::ReadOnlySpan_1<::System::Char> a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::Numerics::BigInteger(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HexNumberToBigInteger(::System::Numerics::BigNumber_BigNumberBuffer& a1, ::System::Numerics::BigInteger& a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigNumber_BigNumberBuffer&, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_HEXNUMBERTOBIGINTEGER_OFFSET))(a1, a2);
		}

		static ::System::Boolean NumberToBigInteger(::System::Numerics::BigNumber_BigNumberBuffer& a1, ::System::Numerics::BigInteger& a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigNumber_BigNumberBuffer&, ::System::Numerics::BigInteger&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_NUMBERTOBIGINTEGER_OFFSET))(a1, a2);
		}

		static ::System::Char ParseFormatSpecifier(::System::String* a1, ::System::Int32& a2)
		{
			return ((::System::Char(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_PARSEFORMATSPECIFIER_OFFSET))(a1, a2);
		}

		static ::System::String* FormatBigIntegerToHexString(::System::Numerics::BigInteger a1, ::System::Char a2, ::System::Int32 a3, ::System::Globalization::NumberFormatInfo* a4)
		{
			return ((::System::String*(*)(::System::Numerics::BigInteger, ::System::Char, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGERTOHEXSTRING_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* FormatBigInteger(::System::Numerics::BigInteger a1, ::System::String* a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::Numerics::BigInteger, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGER_OFFSET))(a1, a2, a3);
		}
	};
}
