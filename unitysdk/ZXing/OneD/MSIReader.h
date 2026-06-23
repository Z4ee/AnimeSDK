#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZXING_ONED_MSIREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB504E0)
#define ZXING_ONED_MSIREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB503F0)
#define ZXING_ONED_MSIREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB50310)

namespace ZXing::OneD
{
	inline static constexpr unsigned int MSIReader_TypeDefinitionIndex = 19144;

	class MSIReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_doubleAndCrossSum()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MSIReader_TypeDefinitionIndex)->GetStaticField(0x8D20);
		}
		static ::System::String** StaticGet_ALPHABET_STRING()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MSIReader_TypeDefinitionIndex)->GetStaticField(0x8D28);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(MSIReader_TypeDefinitionIndex)->GetStaticField(0x8D30);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MSIReader_TypeDefinitionIndex)->GetStaticField(0x8D38);
		}
		::System::Text::StringBuilder* decodeRowResult; // 0x10
		::Il2CppArray<::System::Int32>* counters; // 0x18
		::System::Boolean usingCheckDigit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_MSIREADER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean usingCheckDigit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_ONED_MSIREADER__CTOR_1_OFFSET))(this, usingCheckDigit);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_MSIREADER__CCTOR_OFFSET))();
		}
	};
}
