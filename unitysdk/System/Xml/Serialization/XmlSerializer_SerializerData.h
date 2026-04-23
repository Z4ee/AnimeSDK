#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
namespace System::Xml::Serialization { class XmlSerializationWriter; }
namespace System::Xml::Serialization { class XmlSerializerImplementation; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZERDATA_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x1A02B1B0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializer_SerializerData_TypeDefinitionIndex = 2030;

	class XmlSerializer_SerializerData : public ::System::Object
	{
	public:
		::System::Xml::Serialization::XmlSerializerImplementation* Implementation; // 0x10
		::System::Reflection::MethodInfo* ReaderMethod; // 0x18
		::System::Type* WriterType; // 0x20
		::System::Reflection::MethodInfo* WriterMethod; // 0x28

		::System::Xml::Serialization::XmlSerializationWriter* CreateWriter()
		{
			return ((::System::Xml::Serialization::XmlSerializationWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZERDATA_CREATEWRITER_OFFSET))(this);
		}
	};
}
