#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Encoding.h"

namespace System { class String; }
namespace System::Text { class Decoder; }
namespace System::Text { class Encoder; }
namespace System::Xml { class Ucs4Decoder; }

#define SYSTEM_XML_UCS4ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1BACE460)
#define SYSTEM_XML_UCS4ENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1BACE4D0)
#define SYSTEM_XML_UCS4ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1BACE4C0)
#define SYSTEM_XML_UCS4ENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1BACE560)
#define SYSTEM_XML_UCS4ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1BACE4F0)
#define SYSTEM_XML_UCS4ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x1BACE520)
#define SYSTEM_XML_UCS4ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x1BACE450)
#define SYSTEM_XML_UCS4ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1BACE590)
#define SYSTEM_XML_UCS4ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1BACE4E0)
#define SYSTEM_XML_UCS4ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1BACE540)
#define SYSTEM_XML_UCS4ENCODING_GET_CODEPAGE_OFFSET UNITYSDK_OFFSET(0x1BACE550)
#define SYSTEM_XML_UCS4ENCODING_GET_UCS4_2143_OFFSET UNITYSDK_OFFSET(0x1BACE640)
#define SYSTEM_XML_UCS4ENCODING_GET_UCS4_3412_OFFSET UNITYSDK_OFFSET(0x1BACE690)
#define SYSTEM_XML_UCS4ENCODING_GET_UCS4_BIGENDIAN_OFFSET UNITYSDK_OFFSET(0x1BACE5F0)
#define SYSTEM_XML_UCS4ENCODING_GET_UCS4_LITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x1BACE5A0)
#define SYSTEM_XML_UCS4ENCODING_GET_WEBNAME_OFFSET UNITYSDK_OFFSET(0x1BACE440)
#define SYSTEM_XML_UCS4ENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACE6E0)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Encoding_TypeDefinitionIndex = 1822;

	class Ucs4Encoding : public ::System::Text::Encoding
	{
	public:
		::System::Xml::Ucs4Decoder* ucs4Decoder; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING__CTOR_OFFSET))(this);
		}

		::System::String* get_WebName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GET_WEBNAME_OFFSET))(this);
		}

		::System::Text::Decoder* GetDecoder()
		{
			return ((::System::Text::Decoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETDECODER_OFFSET))(this);
		}

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* chars, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETBYTECOUNT_OFFSET))(this, chars, index, count);
		}

		::Il2CppArray<::System::Byte>* GetBytes(::System::String* s)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETBYTES_OFFSET))(this, s);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex, ::System::Int32 charCount, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETBYTES_1_OFFSET))(this, chars, charIndex, charCount, bytes, byteIndex);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 charCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETMAXBYTECOUNT_OFFSET))(this, charCount);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETCHARCOUNT_OFFSET))(this, bytes, index, count);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 byteCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETMAXCHARCOUNT_OFFSET))(this, byteCount);
		}

		::System::Int32 get_CodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GET_CODEPAGE_OFFSET))(this);
		}

		::System::Int32 GetCharCount_1(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETCHARCOUNT_1_OFFSET))(this, bytes);
		}

		::System::Text::Encoder* GetEncoder()
		{
			return ((::System::Text::Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETENCODER_OFFSET))(this);
		}

		static ::System::Text::Encoding* get_UCS4_Littleendian()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GET_UCS4_LITTLEENDIAN_OFFSET))();
		}

		static ::System::Text::Encoding* get_UCS4_Bigendian()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GET_UCS4_BIGENDIAN_OFFSET))();
		}

		static ::System::Text::Encoding* get_UCS4_2143()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GET_UCS4_2143_OFFSET))();
		}

		static ::System::Text::Encoding* get_UCS4_3412()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GET_UCS4_3412_OFFSET))();
		}
	};
}
