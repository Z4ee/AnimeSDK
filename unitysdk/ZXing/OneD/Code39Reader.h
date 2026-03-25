#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

namespace System { class String; }

#define ZXING_ONED_CODE39READER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D1A920)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code39Reader_TypeDefinitionIndex = 6098;

	class Code39Reader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::System::String** StaticGet_ALPHABET_STRING()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Code39Reader_TypeDefinitionIndex)->GetStaticField(0x87D0);
		}
		static ::System::String** StaticGet_CHECK_DIGIT_STRING()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Code39Reader_TypeDefinitionIndex)->GetStaticField(0x87D8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Code39Reader_TypeDefinitionIndex)->GetStaticField(0x87E0);
		}
		static ::System::Int32* StaticGet_ASTERISK_ENCODING()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Code39Reader_TypeDefinitionIndex)->GetStaticField(0x44D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODE39READER__CCTOR_OFFSET))();
		}
	};
}
