#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/Aztec/Internal/Token.h"

namespace System { class String; }
namespace ZXing::Common { class BitArray; }

#define ZXING_AZTEC_INTERNAL_SIMPLETOKEN_APPENDTO_OFFSET UNITYSDK_OFFSET(0x1BE6E120)
#define ZXING_AZTEC_INTERNAL_SIMPLETOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BE6E150)
#define ZXING_AZTEC_INTERNAL_SIMPLETOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE6E0B0)

namespace ZXing::Aztec::Internal
{
	inline static constexpr unsigned int SimpleToken_TypeDefinitionIndex = 19502;

	class SimpleToken : public ::ZXing::Aztec::Internal::Token
	{
	public:
		::System::Int16 value; // 0x18
		::System::Int16 bitCount; // 0x1A

		::System::Void _ctor(::ZXing::Aztec::Internal::Token* previous, ::System::Int32 value, ::System::Int32 bitCount)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Aztec::Internal::Token*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_SIMPLETOKEN__CTOR_OFFSET))(this, previous, value, bitCount);
		}

		::System::Void appendTo(::ZXing::Common::BitArray* bitArray, ::Il2CppArray<::System::Byte>* text)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Common::BitArray*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_SIMPLETOKEN_APPENDTO_OFFSET))(this, bitArray, text);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_SIMPLETOKEN_TOSTRING_OFFSET))(this);
		}
	};
}
