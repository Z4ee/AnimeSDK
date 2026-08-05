#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZXING_ONED_CODE39READER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE8B450)
#define ZXING_ONED_CODE39READER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE8B350)
#define ZXING_ONED_CODE39READER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BE8B360)
#define ZXING_ONED_CODE39READER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8B260)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code39Reader_TypeDefinitionIndex = 19518;

	class Code39Reader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::System::String** StaticGet_ALPHABET_STRING()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Code39Reader_TypeDefinitionIndex)->GetStaticField(0x8CC0);
		}
		static ::System::String** StaticGet_CHECK_DIGIT_STRING()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Code39Reader_TypeDefinitionIndex)->GetStaticField(0x8CC8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Code39Reader_TypeDefinitionIndex)->GetStaticField(0x8CD0);
		}
		static ::System::Int32* StaticGet_ASTERISK_ENCODING()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Code39Reader_TypeDefinitionIndex)->GetStaticField(0x44C0);
		}
		::System::Text::StringBuilder* decodeRowResult; // 0x10
		::Il2CppArray<::System::Int32>* counters; // 0x18
		::System::Boolean usingCheckDigit; // 0x20
		::System::Boolean extendedMode; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE39READER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean usingCheckDigit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE39READER__CTOR_1_OFFSET))(this, usingCheckDigit);
		}

		::System::Void _ctor_2(::System::Boolean usingCheckDigit, ::System::Boolean extendedMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE39READER__CTOR_2_OFFSET))(this, usingCheckDigit, extendedMode);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODE39READER__CCTOR_OFFSET))();
		}
	};
}
