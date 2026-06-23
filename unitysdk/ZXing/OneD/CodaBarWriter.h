#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDimensionalCodeWriter.h"

namespace System { class String; }

#define ZXING_ONED_CODABARWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1AB422A0)
#define ZXING_ONED_CODABARWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB42F50)
#define ZXING_ONED_CODABARWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB41E00)

namespace ZXing::OneD
{
	inline static constexpr unsigned int CodaBarWriter_TypeDefinitionIndex = 19108;

	class CodaBarWriter : public ::ZXing::OneD::OneDimensionalCodeWriter
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarWriter_TypeDefinitionIndex)->GetStaticField(0x8C50);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_START_END_CHARS()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarWriter_TypeDefinitionIndex)->GetStaticField(0x8C58);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ALT_START_END_CHARS()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarWriter_TypeDefinitionIndex)->GetStaticField(0x8C60);
		}
		static ::System::Char* StaticGet_DEFAULT_GUARD()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(CodaBarWriter_TypeDefinitionIndex)->GetStaticField(0x4470);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARWRITER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARWRITER__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Boolean>* encode(::System::String* contents)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARWRITER_ENCODE_OFFSET))(this, contents);
		}
	};
}
