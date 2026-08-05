#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

namespace System::Text { class StringBuilder; }

#define ZXING_ONED_CODE93READER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE8C230)
#define ZXING_ONED_CODE93READER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8C150)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code93Reader_TypeDefinitionIndex = 19452;

	class Code93Reader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Code93Reader_TypeDefinitionIndex)->GetStaticField(0x8CE0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Code93Reader_TypeDefinitionIndex)->GetStaticField(0x8CE8);
		}
		static ::System::Int32* StaticGet_ASTERISK_ENCODING()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Code93Reader_TypeDefinitionIndex)->GetStaticField(0x44D0);
		}
		::Il2CppArray<::System::Int32>* counters; // 0x10
		::System::Text::StringBuilder* decodeRowResult; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE93READER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODE93READER__CCTOR_OFFSET))();
		}
	};
}
