#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Decoder.h"

#define SYSTEM_XML_UTF16DECODER_CONVERT_OFFSET UNITYSDK_OFFSET(0x17C700C0)
#define SYSTEM_XML_UTF16DECODER_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x17C6FD50)
#define SYSTEM_XML_UTF16DECODER_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x17C6FD00)
#define SYSTEM_XML_UTF16DECODER_GETCHARS_OFFSET UNITYSDK_OFFSET(0x17C6FE30)
#define SYSTEM_XML_UTF16DECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x17C6FCF0)

namespace System::Xml
{
	inline static constexpr unsigned int UTF16Decoder_TypeDefinitionIndex = 1950;

	class UTF16Decoder : public ::System::Text::Decoder
	{
	public:
		::System::Int32 lastByte; // 0x20
		::System::Boolean bigEndian; // 0x24

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER_GETCHARCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetCharCount_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER_GETCHARCOUNT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER_GETCHARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Convert(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Int32& a8, ::System::Int32& a9, ::System::Boolean& a10)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_XML_UTF16DECODER_CONVERT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
	};
}
