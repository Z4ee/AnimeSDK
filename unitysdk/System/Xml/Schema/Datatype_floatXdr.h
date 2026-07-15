#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_float.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_SCHEMA_DATATYPE_FLOATXDR_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x19FA4870)
#define SYSTEM_XML_SCHEMA_DATATYPE_FLOATXDR__CTOR_OFFSET UNITYSDK_OFFSET(0x19F99D70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_floatXdr_TypeDefinitionIndex = 2140;

	class Datatype_floatXdr : public ::System::Xml::Schema::Datatype_float
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_FLOATXDR__CTOR_OFFSET))(this);
		}

		::System::Object* ParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_FLOATXDR_PARSEVALUE_OFFSET))(this, a1, a2, a3);
		}
	};
}
