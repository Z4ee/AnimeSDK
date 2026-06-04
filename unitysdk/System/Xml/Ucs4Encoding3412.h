#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Ucs4Encoding.h"

namespace System { class String; }

#define SYSTEM_XML_UCS4ENCODING3412_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1AEA1510)
#define SYSTEM_XML_UCS4ENCODING3412_GET_ENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x1AEA14D0)
#define SYSTEM_XML_UCS4ENCODING3412__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA1340)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Encoding3412_TypeDefinitionIndex = 1945;

	class Ucs4Encoding3412 : public ::System::Xml::Ucs4Encoding
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING3412__CTOR_OFFSET))(this);
		}

		::System::String* get_EncodingName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING3412_GET_ENCODINGNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPreamble()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING3412_GETPREAMBLE_OFFSET))(this);
		}
	};
}
