#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_decimal.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_SCHEMA_DATATYPE_FIXED_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x19FA3AA0)
#define SYSTEM_XML_SCHEMA_DATATYPE_FIXED_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x19FA4140)
#define SYSTEM_XML_SCHEMA_DATATYPE_FIXED__CTOR_OFFSET UNITYSDK_OFFSET(0x19F99BE0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_fixed_TypeDefinitionIndex = 2144;

	class Datatype_fixed : public ::System::Xml::Schema::Datatype_decimal
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_FIXED__CTOR_OFFSET))(this);
		}

		::System::Object* ParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_FIXED_PARSEVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Exception* TryParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3, ::System::Object*& a4)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_FIXED_TRYPARSEVALUE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
