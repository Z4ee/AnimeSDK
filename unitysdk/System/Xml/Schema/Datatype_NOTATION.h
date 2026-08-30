#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class FacetsChecker; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1E7EB890)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x1E7EBA20)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1E7EB8E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1E7EB9C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1E7EB950)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1E7EB940)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1E7EB960)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1E7EBA30)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7EBD70)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E6F60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_NOTATION_TypeDefinitionIndex = 2132;

	class Datatype_NOTATION : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_NOTATION_TypeDefinitionIndex)->GetStaticField(0x192B0);
		}
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_NOTATION_TypeDefinitionIndex)->GetStaticField(0x192B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_CREATEVALUECONVERTER_OFFSET))(this, a1);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_TOKENIZEDTYPE_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Type* get_ListValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_LISTVALUETYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
		{
			return ((::System::Xml::Schema::XmlSchemaWhiteSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_BUILTINWHITESPACEFACET_OFFSET))(this);
		}

		::System::Exception* TryParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3, ::System::Object*& a4)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_TRYPARSEVALUE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
