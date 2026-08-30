#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::Common { class BitArray; }

#define ZXING_AZTEC_INTERNAL_TOKEN_ADDBINARYSHIFT_OFFSET UNITYSDK_OFFSET(0x1EFDAF50)
#define ZXING_AZTEC_INTERNAL_TOKEN_ADD_OFFSET UNITYSDK_OFFSET(0x1EFDAEB0)
#define ZXING_AZTEC_INTERNAL_TOKEN_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x1EFDB1A0)
#define ZXING_AZTEC_INTERNAL_TOKEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFDB1B0)
#define ZXING_AZTEC_INTERNAL_TOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD4860)

namespace ZXing::Aztec::Internal
{
	inline static constexpr unsigned int Token_TypeDefinitionIndex = 7008;

	class Token : public ::System::Object
	{
	public:
		static ::ZXing::Aztec::Internal::Token** StaticGet_EMPTY()
		{
			return (::ZXing::Aztec::Internal::Token**)Il2CppClass::FromTypeDefinitionIndex(Token_TypeDefinitionIndex)->GetStaticField(0x25EF0);
		}
		::ZXing::Aztec::Internal::Token* previous; // 0x10

		::System::Void _ctor(::ZXing::Aztec::Internal::Token* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Aztec::Internal::Token*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_TOKEN__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_TOKEN__CCTOR_OFFSET))();
		}

		::ZXing::Aztec::Internal::Token* get_Previous()
		{
			return ((::ZXing::Aztec::Internal::Token*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_TOKEN_GET_PREVIOUS_OFFSET))(this);
		}

		::ZXing::Aztec::Internal::Token* add(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::ZXing::Aztec::Internal::Token*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_TOKEN_ADD_OFFSET))(this, a1, a2);
		}

		::ZXing::Aztec::Internal::Token* addBinaryShift(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::ZXing::Aztec::Internal::Token*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_TOKEN_ADDBINARYSHIFT_OFFSET))(this, a1, a2);
		}
	};
}
