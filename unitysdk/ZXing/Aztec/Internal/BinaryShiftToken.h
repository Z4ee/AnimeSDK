#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/Aztec/Internal/Token.h"

namespace System { class String; }
namespace ZXing::Common { class BitArray; }

#define ZXING_AZTEC_INTERNAL_BINARYSHIFTTOKEN_APPENDTO_OFFSET UNITYSDK_OFFSET(0x1AB270B0)
#define ZXING_AZTEC_INTERNAL_BINARYSHIFTTOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB27320)
#define ZXING_AZTEC_INTERNAL_BINARYSHIFTTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB27030)

namespace ZXing::Aztec::Internal
{
	inline static constexpr unsigned int BinaryShiftToken_TypeDefinitionIndex = 19185;

	class BinaryShiftToken : public ::ZXing::Aztec::Internal::Token
	{
	public:
		::System::Int16 binaryShiftByteCount; // 0x18
		::System::Int16 binaryShiftStart; // 0x1A

		::System::Void _ctor(::ZXing::Aztec::Internal::Token* previous, ::System::Int32 binaryShiftStart, ::System::Int32 binaryShiftByteCount)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Aztec::Internal::Token*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_BINARYSHIFTTOKEN__CTOR_OFFSET))(this, previous, binaryShiftStart, binaryShiftByteCount);
		}

		::System::Void appendTo(::ZXing::Common::BitArray* bitArray, ::Il2CppArray<::System::Byte>* text)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Common::BitArray*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_BINARYSHIFTTOKEN_APPENDTO_OFFSET))(this, bitArray, text);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_BINARYSHIFTTOKEN_TOSTRING_OFFSET))(this);
		}
	};
}
