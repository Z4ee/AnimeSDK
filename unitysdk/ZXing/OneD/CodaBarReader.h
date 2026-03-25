#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_CODABARREADER_ARRAYCONTAINS_OFFSET UNITYSDK_OFFSET(0x18D13510)
#define ZXING_ONED_CODABARREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D13550)

namespace ZXing::OneD
{
	inline static constexpr unsigned int CodaBarReader_TypeDefinitionIndex = 6034;

	class CodaBarReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x8770);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_STARTEND_ENCODING()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x8778);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x8780);
		}
		static ::System::Int32* StaticGet_MAX_ACCEPTABLE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x44A0);
		}
		static ::System::Int32* StaticGet_PADDING()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x44A4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARREADER__CCTOR_OFFSET))();
		}

		static ::System::Boolean arrayContains(::Il2CppArray<::System::Char>* array, ::System::Char key)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Char>*, ::System::Char))((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARREADER_ARRAYCONTAINS_OFFSET))(array, key);
		}
	};
}
