#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_double.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_SCHEMA_DATATYPE_DOUBLEXDR_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1E7EFAD0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DOUBLEXDR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E5F10)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_doubleXdr_TypeDefinitionIndex = 2146;

	class Datatype_doubleXdr : public ::System::Xml::Schema::Datatype_double
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DOUBLEXDR__CTOR_OFFSET))(this);
		}

		::System::Object* ParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DOUBLEXDR_PARSEVALUE_OFFSET))(this, a1, a2, a3);
		}
	};
}
