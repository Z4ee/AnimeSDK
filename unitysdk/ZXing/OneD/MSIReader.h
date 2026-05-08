#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZXING_ONED_MSIREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1887AF50)
#define ZXING_ONED_MSIREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1887AE60)
#define ZXING_ONED_MSIREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1887AD80)

namespace ZXing::OneD
{
	inline static constexpr unsigned int MSIReader_TypeDefinitionIndex = 8646;

	class MSIReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_doubleAndCrossSum()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MSIReader_TypeDefinitionIndex)->GetStaticField(0x7AE0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MSIReader_TypeDefinitionIndex)->GetStaticField(0x7AE8);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(MSIReader_TypeDefinitionIndex)->GetStaticField(0x7AF0);
		}
		static ::System::String** StaticGet_ALPHABET_STRING()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MSIReader_TypeDefinitionIndex)->GetStaticField(0x7AF8);
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
