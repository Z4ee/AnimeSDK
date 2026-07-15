#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Decoder.h"

#define SYSTEM_XML_SAFEASCIIDECODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x19F92520)
#define SYSTEM_XML_SAFEASCIIDECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x19F92490)
#define SYSTEM_XML_SAFEASCIIDECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x19F924A0)
#define SYSTEM_XML_SAFEASCIIDECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F92480)

namespace System::Xml
{
	inline static constexpr unsigned int SafeAsciiDecoder_TypeDefinitionIndex = 1944;

	class SafeAsciiDecoder : public ::System::Text::Decoder
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SAFEASCIIDECODER__CTOR_OFFSET))(this);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SAFEASCIIDECODER_GETCHARCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SAFEASCIIDECODER_GETCHARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Convert(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Int32& a8, ::System::Int32& a9, ::System::Boolean& a10)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SAFEASCIIDECODER_CONVERT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
	};
}
