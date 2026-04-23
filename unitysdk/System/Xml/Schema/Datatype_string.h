#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class FacetsChecker; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x19FC5450)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x19FC54A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x19FC54B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x19FC5520)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x19FC5510)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x19FC5530)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING__CTOR_OFFSET UNITYSDK_OFFSET(0x19FBB220)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_string_TypeDefinitionIndex = 2085;

	class Datatype_string : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_CREATEVALUECONVERTER_OFFSET))(this, schemaType);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
		{
			return ((::System::Xml::Schema::XmlSchemaWhiteSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_BUILTINWHITESPACEFACET_OFFSET))(this);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_TOKENIZEDTYPE_OFFSET))(this);
		}

		::System::Exception* TryParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_TRYPARSEVALUE_OFFSET))(this, s, nameTable, nsmgr, typedValue);
		}
	};
}
