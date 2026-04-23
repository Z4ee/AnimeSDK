#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::Common { class BitArray; }

#define ZXING_AZTEC_INTERNAL_TOKEN_ADDBINARYSHIFT_OFFSET UNITYSDK_OFFSET(0x1A73C4F0)
#define ZXING_AZTEC_INTERNAL_TOKEN_ADD_OFFSET UNITYSDK_OFFSET(0x1A73C450)
#define ZXING_AZTEC_INTERNAL_TOKEN_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x1A73C740)
#define ZXING_AZTEC_INTERNAL_TOKEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A73C750)
#define ZXING_AZTEC_INTERNAL_TOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A735CE0)

namespace ZXing::Aztec::Internal
{
	inline static constexpr unsigned int Token_TypeDefinitionIndex = 6085;

	class Token : public ::System::Object
	{
	public:
		static ::ZXing::Aztec::Internal::Token** StaticGet_EMPTY()
		{
			return (::ZXing::Aztec::Internal::Token**)Il2CppClass::FromTypeDefinitionIndex(Token_TypeDefinitionIndex)->GetStaticField(0x1840);
		}
		::ZXing::Aztec::Internal::Token* previous; // 0x10

		::System::Void _ctor(::ZXing::Aztec::Internal::Token* previous)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Aztec::Internal::Token*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_TOKEN__CTOR_OFFSET))(this, previous);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_TOKEN__CCTOR_OFFSET))();
		}

		::ZXing::Aztec::Internal::Token* get_Previous()
		{
			return ((::ZXing::Aztec::Internal::Token*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_TOKEN_GET_PREVIOUS_OFFSET))(this);
		}

		::ZXing::Aztec::Internal::Token* add(::System::Int32 value, ::System::Int32 bitCount)
		{
			return ((::ZXing::Aztec::Internal::Token*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_TOKEN_ADD_OFFSET))(this, value, bitCount);
		}

		::ZXing::Aztec::Internal::Token* addBinaryShift(::System::Int32 start, ::System::Int32 byteCount)
		{
			return ((::ZXing::Aztec::Internal::Token*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_TOKEN_ADDBINARYSHIFT_OFFSET))(this, start, byteCount);
		}
	};
}
