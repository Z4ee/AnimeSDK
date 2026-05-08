#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"
#include "unitysdk/System/Xml/Schema/RestrictionFlags.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class DatatypeImplementation; }
namespace System::Xml::Schema { class FacetsChecker; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_COMPARE_OFFSET UNITYSDK_OFFSET(0x1A45A150)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1A459D00)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1A45A750)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A45A6F0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1A45A720)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1A45A7B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1A45A7E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A45A6C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_TRYPARSEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1A45AF20)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1A45A7F0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45A0A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_List_TypeDefinitionIndex = 1989;

	class Datatype_List : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		::System::Xml::Schema::DatatypeImplementation* itemType; // 0x38
		::System::Int32 minListSize; // 0x40

		::System::Void _ctor(::System::Xml::Schema::DatatypeImplementation* type, ::System::Int32 minListSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::DatatypeImplementation*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST__CTOR_OFFSET))(this, type, minListSize);
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_CREATEVALUECONVERTER_OFFSET))(this, schemaType);
		}

		::System::Int32 Compare(::System::Object* value1, ::System::Object* value2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_COMPARE_OFFSET))(this, value1, value2);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_TOKENIZEDTYPE_OFFSET))(this);
		}

		::System::Type* get_ListValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_LISTVALUETYPE_OFFSET))(this);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags()
		{
			return ((::System::Xml::Schema::RestrictionFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_VALIDRESTRICTIONFLAGS_OFFSET))(this);
		}

		::System::Exception* TryParseValue(::System::Object* value, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* namespaceResolver, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_TRYPARSEVALUE_OFFSET))(this, value, nameTable, namespaceResolver, typedValue);
		}

		::System::Exception* TryParseValue_1(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_TRYPARSEVALUE_1_OFFSET))(this, s, nameTable, nsmgr, typedValue);
		}
	};
}
