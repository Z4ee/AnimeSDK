#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/IncrementalReadDecoder.h"

#define SYSTEM_XML_BINHEXDECODER_DECODE_1_OFFSET UNITYSDK_OFFSET(0x185624D0)
#define SYSTEM_XML_BINHEXDECODER_DECODE_2_OFFSET UNITYSDK_OFFSET(0x18562220)
#define SYSTEM_XML_BINHEXDECODER_DECODE_OFFSET UNITYSDK_OFFSET(0x18562020)
#define SYSTEM_XML_BINHEXDECODER_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x18562010)

namespace System::Xml
{
	inline static constexpr unsigned int BinHexDecoder_TypeDefinitionIndex = 1778;

	class BinHexDecoder : public ::System::Xml::IncrementalReadDecoder
	{
	public:
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::Boolean hasHalfByteCached; // 0x18
		::System::Byte cachedHalfByte; // 0x19
		::System::Int32 endIndex; // 0x1C
		::System::Int32 curIndex; // 0x20

		::System::Boolean get_IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXDECODER_GET_ISFULL_OFFSET))(this);
		}

		::System::Int32 Decode(::Il2CppArray<::System::Char>* chars, ::System::Int32 startPos, ::System::Int32 len)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXDECODER_DECODE_OFFSET))(this, chars, startPos, len);
		}

		static ::Il2CppArray<::System::Byte>* Decode_1(::Il2CppArray<::System::Char>* chars, ::System::Boolean allowOddChars)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Char>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXDECODER_DECODE_1_OFFSET))(chars, allowOddChars);
		}

		static ::System::Void Decode_2(::System::Char* pChars, ::System::Char* pCharsEndPos, ::System::Byte* pBytes, ::System::Byte* pBytesEndPos, ::System::Boolean& hasHalfByteCached, ::System::Byte& cachedHalfByte, ::System::Int32& charsDecoded, ::System::Int32& bytesDecoded)
		{
			return ((::System::Void(*)(::System::Char*, ::System::Char*, ::System::Byte*, ::System::Byte*, ::System::Boolean&, ::System::Byte&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXDECODER_DECODE_2_OFFSET))(pChars, pCharsEndPos, pBytes, pBytesEndPos, hasHalfByteCached, cachedHalfByte, charsDecoded, bytesDecoded);
		}
	};
}
