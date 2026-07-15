#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_CODABARREADER_ARRAYCONTAINS_OFFSET UNITYSDK_OFFSET(0x15548420)
#define ZXING_ONED_CODABARREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15548460)

namespace ZXing::OneD
{
	inline static constexpr unsigned int CodaBarReader_TypeDefinitionIndex = 6424;

	class CodaBarReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_STARTEND_ENCODING()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x2030);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x2038);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x2040);
		}
		static ::System::Int32* StaticGet_MAX_ACCEPTABLE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0xDF0);
		}
		static ::System::Int32* StaticGet_PADDING()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0xDF4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARREADER__CCTOR_OFFSET))();
		}

		static ::System::Boolean arrayContains(::Il2CppArray<::System::Char>* a1, ::System::Char a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Char>*, ::System::Char))((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARREADER_ARRAYCONTAINS_OFFSET))(a1, a2);
		}
	};
}
