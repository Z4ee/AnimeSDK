#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Decoder.h"

#define SYSTEM_XML_UCS4DECODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x185F2F80)
#define SYSTEM_XML_UCS4DECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x185F2D30)
#define SYSTEM_XML_UCS4DECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x185F2D50)
#define SYSTEM_XML_UCS4DECODER_UCS4TOUTF16_OFFSET UNITYSDK_OFFSET(0x185F32C0)
#define SYSTEM_XML_UCS4DECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x185F3340)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Decoder_TypeDefinitionIndex = 1945;

	class Ucs4Decoder : public ::System::Text::Decoder
	{
	public:
		::Il2CppArray<::System::Byte>* lastBytes; // 0x20
		::System::Int32 lastBytesCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER__CTOR_OFFSET))(this);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER_GETCHARCOUNT_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER_GETCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}

		::System::Void Convert(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::System::Boolean flush, ::System::Int32& bytesUsed, ::System::Int32& charsUsed, ::System::Boolean& completed)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER_CONVERT_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed);
		}

		::System::Void Ucs4ToUTF16(::System::UInt32 code, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER_UCS4TOUTF16_OFFSET))(this, code, chars, charIndex);
		}
	};
}
