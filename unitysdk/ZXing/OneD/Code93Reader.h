#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_CODE93READER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1554FE00)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code93Reader_TypeDefinitionIndex = 6422;

	class Code93Reader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Code93Reader_TypeDefinitionIndex)->GetStaticField(0x2240);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Code93Reader_TypeDefinitionIndex)->GetStaticField(0x2248);
		}
		static ::System::Int32* StaticGet_ASTERISK_ENCODING()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Code93Reader_TypeDefinitionIndex)->GetStaticField(0xE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODE93READER__CCTOR_OFFSET))();
		}
	};
}
