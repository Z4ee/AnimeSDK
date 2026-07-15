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

#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x19FA6670)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x19FA66C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x19FA66D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x19FA6740)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x19FA6730)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x19FA6750)
#define SYSTEM_XML_SCHEMA_DATATYPE_STRING__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9AA20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_string_TypeDefinitionIndex = 2089;

	class Datatype_string : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_CREATEVALUECONVERTER_OFFSET))(this, a1);
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

		::System::Exception* TryParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3, ::System::Object*& a4)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_STRING_TRYPARSEVALUE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
