#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"
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

#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BADB1E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1BADADB0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1BADB9D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1BADB8B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1BADB940)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BADBA30)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1BADB820)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1BADBAC0)
#define SYSTEM_XML_SCHEMA_DATATYPE_LIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BADA700)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_List_TypeDefinitionIndex = 2091;

	class Datatype_List : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		::System::Xml::Schema::DatatypeImplementation* itemType; // 0x38
		::System::Int32 minListSize; // 0x40

		::System::Void _ctor(::System::Xml::Schema::DatatypeImplementation* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::DatatypeImplementation*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_CREATEVALUECONVERTER_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_COMPARE_OFFSET))(this, a1, a2);
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

		::System::Exception* TryParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3, ::System::Object*& a4)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_LIST_TRYPARSEVALUE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
