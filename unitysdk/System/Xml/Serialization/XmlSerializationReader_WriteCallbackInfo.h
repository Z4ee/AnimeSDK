#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Xml::Serialization { class XmlSerializationReadCallback; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_WRITECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0106D0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReader_WriteCallbackInfo_TypeDefinitionIndex = 2017;

	class XmlSerializationReader_WriteCallbackInfo : public ::System::Object
	{
	public:
		::System::String* TypeName; // 0x10
		::System::Type* Type; // 0x18
		::System::Xml::Serialization::XmlSerializationReadCallback* Callback; // 0x20
		::System::String* TypeNs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_WRITECALLBACKINFO__CTOR_OFFSET))(this);
		}
	};
}
