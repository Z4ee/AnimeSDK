#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_duration.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_SCHEMA_DATATYPE_YEARMONTHDURATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1AB0A8B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_YEARMONTHDURATION_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1AB0A6D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_YEARMONTHDURATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0A8C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_yearMonthDuration_TypeDefinitionIndex = 2000;

	class Datatype_yearMonthDuration : public ::System::Xml::Schema::Datatype_duration
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_YEARMONTHDURATION__CTOR_OFFSET))(this);
		}

		::System::Exception* TryParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_YEARMONTHDURATION_TRYPARSEVALUE_OFFSET))(this, s, nameTable, nsmgr, typedValue);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_YEARMONTHDURATION_GET_TYPECODE_OFFSET))(this);
		}
	};
}
