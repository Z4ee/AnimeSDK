#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Ucs4Encoding.h"

namespace System { class String; }

#define SYSTEM_XML_UCS4ENCODING4321_GETPREAMBLE_OFFSET UNITYSDK_OFFSET(0x1A02F7B0)
#define SYSTEM_XML_UCS4ENCODING4321_GET_ENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x1A02F770)
#define SYSTEM_XML_UCS4ENCODING4321__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02F1D0)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Encoding4321_TypeDefinitionIndex = 1943;

	class Ucs4Encoding4321 : public ::System::Xml::Ucs4Encoding
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING4321__CTOR_OFFSET))(this);
		}

		::System::String* get_EncodingName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING4321_GET_ENCODINGNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPreamble()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4ENCODING4321_GETPREAMBLE_OFFSET))(this);
		}
	};
}
