#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Ucs4Encoding.h"

namespace System { class String; }

#define SYSTEM_XML_UCS4ENCODING2143_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1B9767A0)
#define SYSTEM_XML_UCS4ENCODING2143_GET_ENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x1B976760)
#define SYSTEM_XML_UCS4ENCODING2143__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9766B0)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Encoding2143_TypeDefinitionIndex = 1825;

	class Ucs4Encoding2143 : public ::System::Xml::Ucs4Encoding
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING2143__CTOR_OFFSET))(this);
		}

		::System::String* get_EncodingName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING2143_GET_ENCODINGNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPreamble()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING2143_GETPREAMBLE_OFFSET))(this);
		}
	};
}
