#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/Encoding.h"

namespace System { class String; }
namespace System::Text { class Decoder; }
namespace System::Text { class Encoder; }
namespace System::Xml { class Ucs4Decoder; }

#define SYSTEM_XML_UCS4ENCODING_GETBYTECOUNT_1_OFFSET UNITYSDK_OFFSET(0x162B0880)
#define SYSTEM_XML_UCS4ENCODING_GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x162B0820)
#define SYSTEM_XML_UCS4ENCODING_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x162B08B0)
#define SYSTEM_XML_UCS4ENCODING_GETBYTES_OFFSET UNITYSDK_OFFSET(0x162B08A0)
#define SYSTEM_XML_UCS4ENCODING_GETCHARCOUNT_1_OFFSET UNITYSDK_OFFSET(0x162B0940)
#define SYSTEM_XML_UCS4ENCODING_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x162B08D0)
#define SYSTEM_XML_UCS4ENCODING_GETCHARS_OFFSET UNITYSDK_OFFSET(0x162B0900)
#define SYSTEM_XML_UCS4ENCODING_GETDECODER_OFFSET UNITYSDK_OFFSET(0x162B0810)
#define SYSTEM_XML_UCS4ENCODING_GETENCODER_OFFSET UNITYSDK_OFFSET(0x162B0970)
#define SYSTEM_XML_UCS4ENCODING_GETMAXBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x162B08C0)
#define SYSTEM_XML_UCS4ENCODING_GETMAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x162B0920)
#define SYSTEM_XML_UCS4ENCODING_GET_CODEPAGE_OFFSET UNITYSDK_OFFSET(0x162B0930)
#define SYSTEM_XML_UCS4ENCODING_GET_UCS4_2143_OFFSET UNITYSDK_OFFSET(0x162B0D20)
#define SYSTEM_XML_UCS4ENCODING_GET_UCS4_3412_OFFSET UNITYSDK_OFFSET(0x162B0EF0)
#define SYSTEM_XML_UCS4ENCODING_GET_UCS4_BIGENDIAN_OFFSET UNITYSDK_OFFSET(0x162B0B50)
#define SYSTEM_XML_UCS4ENCODING_GET_UCS4_LITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x162B0980)
#define SYSTEM_XML_UCS4ENCODING_GET_WEBNAME_OFFSET UNITYSDK_OFFSET(0x162B0790)
#define SYSTEM_XML_UCS4ENCODING__CTOR_OFFSET UNITYSDK_OFFSET(0x162B10C0)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Encoding_TypeDefinitionIndex = 1945;

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

		::System::Int32 GetByteCount(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETBYTECOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetByteCount_1(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETBYTECOUNT_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetBytes(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETBYTES_OFFSET))(this, a1);
		}

		::System::Int32 GetBytes_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETBYTES_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetMaxByteCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETMAXBYTECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetCharCount(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETCHARCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetChars(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETCHARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetMaxCharCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETMAXCHARCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_CodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GET_CODEPAGE_OFFSET))(this);
		}

		::System::Int32 GetCharCount_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING_GETCHARCOUNT_1_OFFSET))(this, a1);
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
