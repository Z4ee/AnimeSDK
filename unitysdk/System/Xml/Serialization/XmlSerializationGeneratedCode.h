#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONGENERATEDCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E84B320)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationGeneratedCode_TypeDefinitionIndex = 2025;

	class XmlSerializationGeneratedCode : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONGENERATEDCODE__CTOR_OFFSET))(this);
		}
	};
}
