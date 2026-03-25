#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_decimal.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_SCHEMA_DATATYPE_INTEGER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x18589880)
#define SYSTEM_XML_SCHEMA_DATATYPE_INTEGER_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x18589890)
#define SYSTEM_XML_SCHEMA_DATATYPE_INTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1857FB60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_integer_TypeDefinitionIndex = 2121;

	class Datatype_integer : public ::System::Xml::Schema::Datatype_decimal
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INTEGER__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INTEGER_GET_TYPECODE_OFFSET))(this);
		}

		::System::Exception* TryParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INTEGER_TRYPARSEVALUE_OFFSET))(this, s, nameTable, nsmgr, typedValue);
		}
	};
}
