#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Xml::Serialization { class XmlSerializationWriteCallback; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17C5EE50)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationWriter_WriteCallbackInfo_TypeDefinitionIndex = 2037;

	class XmlSerializationWriter_WriteCallbackInfo : public ::System::Object
	{
	public:
		::System::Xml::Serialization::XmlSerializationWriteCallback* Callback; // 0x10
		::System::String* TypeNs; // 0x18
		::System::String* TypeName; // 0x20
		::System::Type* Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITECALLBACKINFO__CTOR_OFFSET))(this);
		}
	};
}
