#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Ucs4Encoding.h"

namespace System { class String; }

#define SYSTEM_XML_UCS4ENCODING1234_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1AE96B90)
#define SYSTEM_XML_UCS4ENCODING1234_GET_ENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x1AE96B50)
#define SYSTEM_XML_UCS4ENCODING1234__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE96AA0)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Encoding1234_TypeDefinitionIndex = 1823;

	class Ucs4Encoding1234 : public ::System::Xml::Ucs4Encoding
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING1234__CTOR_OFFSET))(this);
		}

		::System::String* get_EncodingName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING1234_GET_ENCODINGNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPreamble()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING1234_GETPREAMBLE_OFFSET))(this);
		}
	};
}
