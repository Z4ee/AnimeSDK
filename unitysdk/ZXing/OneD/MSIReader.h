#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

namespace System { class String; }

#define ZXING_ONED_MSIREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A75ABD0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int MSIReader_TypeDefinitionIndex = 6081;

	class MSIReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_doubleAndCrossSum()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MSIReader_TypeDefinitionIndex)->GetStaticField(0x4BE0);
		}
		static ::System::String** StaticGet_ALPHABET_STRING()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MSIReader_TypeDefinitionIndex)->GetStaticField(0x4BE8);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(MSIReader_TypeDefinitionIndex)->GetStaticField(0x4BF0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MSIReader_TypeDefinitionIndex)->GetStaticField(0x4BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_MSIREADER__CCTOR_OFFSET))();
		}
	};
}
