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
namespace System::Xml::Schema { class SchemaNames; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaObjectTable; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_CONCATENATEDTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D662B40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_DERIVEBYUNION_OFFSET UNITYSDK_OFFSET(0x1D663600)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXDRNAME_OFFSET UNITYSDK_OFFSET(0x1D6635A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXMLTOKENIZEDTYPEXSD_OFFSET UNITYSDK_OFFSET(0x1D6634C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXMLTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1D6633E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_TYPECODESTRING_OFFSET UNITYSDK_OFFSET(0x1D65BE00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1D662770)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_VARIETY_OFFSET UNITYSDK_OFFSET(0x1D662760)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_ISDERIVEDFROM_OFFSET UNITYSDK_OFFSET(0x1D662780)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_TYPECODETOSTRING_OFFSET UNITYSDK_OFFSET(0x1D662790)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_XDRCANONIZEURI_OFFSET UNITYSDK_OFFSET(0x1D663660)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6637B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaDatatype_TypeDefinitionIndex = 2136;

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

		::System::Boolean IsDerivedFrom(::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_ISDERIVEDFROM_OFFSET))(this, datatype);
		}

		::System::String* get_TypeCodeString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_GET_TYPECODESTRING_OFFSET))(this);
		}

		::System::String* TypeCodeToString(::System::Xml::Schema::XmlTypeCode typeCode)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Schema::XmlTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_TYPECODETOSTRING_OFFSET))(this, typeCode);
		}

		static ::System::String* ConcatenatedToString(::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_CONCATENATEDTOSTRING_OFFSET))(value);
		}

		static ::System::Xml::Schema::XmlSchemaDatatype* FromXmlTokenizedType(::System::Xml::XmlTokenizedType token)
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::System::Xml::XmlTokenizedType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXMLTOKENIZEDTYPE_OFFSET))(token);
		}

		static ::System::Xml::Schema::XmlSchemaDatatype* FromXmlTokenizedTypeXsd(::System::Xml::XmlTokenizedType token)
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::System::Xml::XmlTokenizedType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXMLTOKENIZEDTYPEXSD_OFFSET))(token);
		}

		static ::System::Xml::Schema::XmlSchemaDatatype* FromXdrName(::System::String* name)
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_FROMXDRNAME_OFFSET))(name);
		}

		static ::System::Xml::Schema::XmlSchemaDatatype* DeriveByUnion(::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>* types, ::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>*, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_DERIVEBYUNION_OFFSET))(types, schemaType);
		}

		static ::System::String* XdrCanonizeUri(::System::String* uri, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames)
		{
			return ((::System::String*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADATATYPE_XDRCANONIZEURI_OFFSET))(uri, nameTable, schemaNames);
		}
	};
}
