#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"
#include "unitysdk/System/Xml/Schema/RestrictionFlags.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class FacetsChecker; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AFFADD0)
#define SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1AFFAC30)
#define SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x1AFFADB0)
#define SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1AFFAC80)
#define SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1AFFAD50)
#define SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1AFFACE0)
#define SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1AFFADC0)
#define SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1AFFACF0)
#define SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1AFFAED0)
#define SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFFB150)
#define SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFFB0B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_base64Binary_TypeDefinitionIndex = 2016;

	class Datatype_base64Binary : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_base64Binary_TypeDefinitionIndex)->GetStaticField(0x1BB0);
		}
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_base64Binary_TypeDefinitionIndex)->GetStaticField(0x1BB8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_CREATEVALUECONVERTER_OFFSET))(this, schemaType);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_GET_TYPECODE_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Type* get_ListValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_GET_LISTVALUETYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
		{
			return ((::System::Xml::Schema::XmlSchemaWhiteSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_GET_BUILTINWHITESPACEFACET_OFFSET))(this);
		}

		::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags()
		{
			return ((::System::Xml::Schema::RestrictionFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_GET_VALIDRESTRICTIONFLAGS_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* value1, ::System::Object* value2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_COMPARE_OFFSET))(this, value1, value2);
		}

		::System::Exception* TryParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BASE64BINARY_TRYPARSEVALUE_OFFSET))(this, s, nameTable, nsmgr, typedValue);
		}
	};
}
