#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Decoder.h"

#define SYSTEM_XML_UTF16DECODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x198934F0)
#define SYSTEM_XML_UTF16DECODER_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x198930F0)
#define SYSTEM_XML_UTF16DECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x198930A0)
#define SYSTEM_XML_UTF16DECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x198931D0)
#define SYSTEM_XML_UTF16DECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x19893090)

namespace System::Xml
{
	inline static constexpr unsigned int UTF16Decoder_TypeDefinitionIndex = 1820;

	class UTF16Decoder : public ::System::Text::Decoder
	{
	public:
		::System::Boolean bigEndian; // 0x20
		::System::Int32 lastByte; // 0x24

		::System::Void _ctor(::System::Boolean bigEndian)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER__CTOR_OFFSET))(this, bigEndian);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER_GETCHARCOUNT_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetCharCount_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count, ::System::Boolean flush)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER_GETCHARCOUNT_1_OFFSET))(this, bytes, index, count, flush);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER_GETCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}

		::System::Void Convert(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::System::Boolean flush, ::System::Int32& bytesUsed, ::System::Int32& charsUsed, ::System::Boolean& completed)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER_CONVERT_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed);
		}
	};
}
