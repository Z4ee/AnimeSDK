#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

namespace System::Text { class StringBuilder; }

#define ZXING_ONED_CODABARREADER_ARRAYCONTAINS_OFFSET UNITYSDK_OFFSET(0x1886CAA0)
#define ZXING_ONED_CODABARREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1886CAE0)
#define ZXING_ONED_CODABARREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1886C9A0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int CodaBarReader_TypeDefinitionIndex = 8611;

	class CodaBarReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_CHARACTER_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x79F0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_STARTEND_ENCODING()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x79F8);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ALPHABET()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x7A00);
		}
		static ::System::Int32* StaticGet_PADDING()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x3BE0);
		}
		static ::System::Int32* StaticGet_MAX_ACCEPTABLE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodaBarReader_TypeDefinitionIndex)->GetStaticField(0x3BE4);
		}
		::System::Text::StringBuilder* decodeRowResult; // 0x10
		::Il2CppArray<::System::Int32>* counters; // 0x18
		::System::Int32 counterLength; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARREADER__CTOR_OFFSET))(this);
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
