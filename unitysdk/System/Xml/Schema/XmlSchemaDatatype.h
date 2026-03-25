#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDatatypeVariety.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class FacetsChecker; }
namespace System::Xml::Schema { class RestrictionFacets; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXMLTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x18592B60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_TYPECODESTRING_OFFSET UNITYSDK_OFFSET(0x185AF0D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x185AF0C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_VARIETY_OFFSET UNITYSDK_OFFSET(0x185AF0B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_TYPECODETOSTRING_OFFSET UNITYSDK_OFFSET(0x185AF190)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x185AF540)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaDatatype_TypeDefinitionIndex = 2181;

	class XmlSchemaDatatype : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaDatatypeVariety get_Variety()
		{
			return ((::System::Xml::Schema::XmlSchemaDatatypeVariety(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_VARIETY_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_TYPECODE_OFFSET))(this);
		}

		::System::String* get_TypeCodeString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_TYPECODESTRING_OFFSET))(this);
		}

		::System::String* TypeCodeToString(::System::Xml::Schema::XmlTypeCode typeCode)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Schema::XmlTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_TYPECODETOSTRING_OFFSET))(this, typeCode);
		}

		static ::System::Xml::Schema::XmlSchemaDatatype* FromXmlTokenizedType(::System::Xml::XmlTokenizedType token)
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::System::Xml::XmlTokenizedType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXMLTOKENIZEDTYPE_OFFSET))(token);
		}
	};
}
