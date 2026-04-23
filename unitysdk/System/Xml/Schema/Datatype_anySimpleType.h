#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/DatatypeImplementation.h"
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

#define SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_COMPARE_OFFSET UNITYSDK_OFFSET(0x19FBFA70)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x19FBF8C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x19FBFA60)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x19FBF920)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x19FBF9F0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x19FBFA50)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x19FBF9E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x19FBF980)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x19FBFAF0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FBFB10)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB94F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_anySimpleType_TypeDefinitionIndex = 2082;

	class Datatype_anySimpleType : public ::System::Xml::Schema::DatatypeImplementation
	{
	public:
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_anySimpleType_TypeDefinitionIndex)->GetStaticField(0xD190);
		}
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_anySimpleType_TypeDefinitionIndex)->GetStaticField(0xD198);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_CREATEVALUECONVERTER_OFFSET))(this, schemaType);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_GET_TYPECODE_OFFSET))(this);
		}

		::System::Type* get_ListValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_GET_LISTVALUETYPE_OFFSET))(this);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_GET_TOKENIZEDTYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
		{
			return ((::System::Xml::Schema::XmlSchemaWhiteSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_GET_BUILTINWHITESPACEFACET_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* value1, ::System::Object* value2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_COMPARE_OFFSET))(this, value1, value2);
		}

		::System::Exception* TryParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYSIMPLETYPE_TRYPARSEVALUE_OFFSET))(this, s, nameTable, nsmgr, typedValue);
		}
	};
}
