#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Serialization { class XmlSerializationWriter; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERIMPLEMENTATION_GET_WRITER_OFFSET UNITYSDK_OFFSET(0x162AC500)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializerImplementation_TypeDefinitionIndex = 2035;

	class XmlSerializerImplementation : public ::System::Object
	{
	public:
		::System::Xml::Serialization::XmlSerializationWriter* get_Writer()
		{
			return ((::System::Xml::Serialization::XmlSerializationWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERIMPLEMENTATION_GET_WRITER_OFFSET))(this);
		}
	};
}
