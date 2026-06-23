#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"
#include "unitysdk/System/Xml/Schema/RestrictionFlags.h"
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
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectTable; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1CA26C10)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x1CA26DB0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1CA26C60)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1CA26D50)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1CA26CD0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1CA26CC0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1CA26CE0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1CA26CF0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1CA26DC0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_VERIFYSCHEMAVALID_OFFSET UNITYSDK_OFFSET(0x1CA27020)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA273F0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA27350)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_NOTATION_TypeDefinitionIndex = 2029;

	class Datatype_NOTATION : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_NOTATION_TypeDefinitionIndex)->GetStaticField(0x1F60);
		}
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_NOTATION_TypeDefinitionIndex)->GetStaticField(0x1F68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_CREATEVALUECONVERTER_OFFSET))(this, schemaType);
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

		::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags()
		{
			return ((::System::Xml::Schema::RestrictionFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_GET_VALIDRESTRICTIONFLAGS_OFFSET))(this);
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

		::System::Exception* TryParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_TRYPARSEVALUE_OFFSET))(this, s, nameTable, nsmgr, typedValue);
		}

		::System::Void VerifySchemaValid(::System::Xml::Schema::XmlSchemaObjectTable* notations, ::System::Xml::Schema::XmlSchemaObject* caller)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NOTATION_VERIFYSCHEMAVALID_OFFSET))(this, notations, caller);
		}
	};
}
