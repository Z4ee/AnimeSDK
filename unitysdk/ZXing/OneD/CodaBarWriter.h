#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDimensionalCodeWriter.h"

namespace System { class String; }

#define ZXING_ONED_CODABARWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1B54FFC0)
#define ZXING_ONED_CODABARWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B550B20)
#define ZXING_ONED_CODABARWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54FC90)

namespace ZXing::OneD
{
	inline static constexpr unsigned int CodaBarWriter_TypeDefinitionIndex = 6418;

	class CodaBarWriter : public ::ZXing::OneD::OneDimensionalCodeWriter
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarWriter_TypeDefinitionIndex)->GetStaticField(0x3A30);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_START_END_CHARS()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarWriter_TypeDefinitionIndex)->GetStaticField(0x3A38);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_ALT_START_END_CHARS()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(CodaBarWriter_TypeDefinitionIndex)->GetStaticField(0x3A40);
		}
		static ::System::Char* StaticGet_DEFAULT_GUARD()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(CodaBarWriter_TypeDefinitionIndex)->GetStaticField(0x2590);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARWRITER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARWRITER__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Boolean>* encode(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODABARWRITER_ENCODE_OFFSET))(this, a1);
		}
	};
}
