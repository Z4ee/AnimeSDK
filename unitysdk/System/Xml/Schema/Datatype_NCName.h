#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_Name.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_SCHEMA_DATATYPE_NCNAME_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1E7EB630)
#define SYSTEM_XML_SCHEMA_DATATYPE_NCNAME_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1E7EB640)
#define SYSTEM_XML_SCHEMA_DATATYPE_NCNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E6D00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_NCName_TypeDefinitionIndex = 2128;

	class Datatype_NCName : public ::System::Xml::Schema::Datatype_Name
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NCNAME__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NCNAME_GET_TYPECODE_OFFSET))(this);
		}

		::System::Exception* TryParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3, ::System::Object*& a4)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NCNAME_TRYPARSEVALUE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
