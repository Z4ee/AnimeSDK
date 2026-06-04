#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/Aztec/Internal/Token.h"

namespace System { class String; }
namespace ZXing::Common { class BitArray; }

#define ZXING_AZTEC_INTERNAL_BINARYSHIFTTOKEN_APPENDTO_OFFSET UNITYSDK_OFFSET(0x1B536970)
#define ZXING_AZTEC_INTERNAL_BINARYSHIFTTOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B536BD0)
#define ZXING_AZTEC_INTERNAL_BINARYSHIFTTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5368F0)

namespace ZXing::Aztec::Internal
{
	inline static constexpr unsigned int BinaryShiftToken_TypeDefinitionIndex = 6493;

	class BinaryShiftToken : public ::ZXing::Aztec::Internal::Token
	{
	public:
		::System::Int16 binaryShiftStart; // 0x18
		::System::Int16 binaryShiftByteCount; // 0x1A

		::System::Void _ctor(::ZXing::Aztec::Internal::Token* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Aztec::Internal::Token*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_BINARYSHIFTTOKEN__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void appendTo(::ZXing::Common::BitArray* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Common::BitArray*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_BINARYSHIFTTOKEN_APPENDTO_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_BINARYSHIFTTOKEN_TOSTRING_OFFSET))(this);
		}
	};
}
