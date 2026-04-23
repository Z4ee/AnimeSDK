#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Decoder.h"

#define SYSTEM_XML_SAFEASCIIDECODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x19FB1F40)
#define SYSTEM_XML_SAFEASCIIDECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x19FB1E90)
#define SYSTEM_XML_SAFEASCIIDECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x19FB1EA0)
#define SYSTEM_XML_SAFEASCIIDECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB1E80)

namespace System::Xml
{
	inline static constexpr unsigned int SafeAsciiDecoder_TypeDefinitionIndex = 1940;

	class SafeAsciiDecoder : public ::System::Text::Decoder
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SAFEASCIIDECODER__CTOR_OFFSET))(this);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SAFEASCIIDECODER_GETCHARCOUNT_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SAFEASCIIDECODER_GETCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}

		::System::Void Convert(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::System::Boolean flush, ::System::Int32& bytesUsed, ::System::Int32& charsUsed, ::System::Boolean& completed)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SAFEASCIIDECODER_CONVERT_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed);
		}
	};
}
