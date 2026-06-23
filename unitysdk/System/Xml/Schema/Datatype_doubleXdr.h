#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_double.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_SCHEMA_DATATYPE_DOUBLEXDR_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1D471B50)
#define SYSTEM_XML_SCHEMA_DATATYPE_DOUBLEXDR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D471FC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_doubleXdr_TypeDefinitionIndex = 2043;

	class Datatype_doubleXdr : public ::System::Xml::Schema::Datatype_double
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DOUBLEXDR__CTOR_OFFSET))(this);
		}

		::System::Object* ParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DOUBLEXDR_PARSEVALUE_OFFSET))(this, s, nameTable, nsmgr);
		}
	};
}
