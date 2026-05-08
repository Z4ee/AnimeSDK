#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Serialization { class XmlSerializationWriter; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERIMPLEMENTATION_GET_WRITER_OFFSET UNITYSDK_OFFSET(0x1AFFFB20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERIMPLEMENTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFFFB70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializerImplementation_TypeDefinitionIndex = 1920;

	class XmlSerializerImplementation : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERIMPLEMENTATION__CTOR_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlSerializationWriter* get_Writer()
		{
			return ((::System::Xml::Serialization::XmlSerializationWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERIMPLEMENTATION_GET_WRITER_OFFSET))(this);
		}
	};
}
