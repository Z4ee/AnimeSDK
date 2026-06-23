#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"
#include "unitysdk/System/Xml/Schema/RestrictionFlags.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class DatatypeImplementation; }
namespace System::Xml::Schema { class FacetsChecker; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D933A70)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1D933980)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1D933BE0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1D933C40)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1D933BD0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1D933CA0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1D933B70)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_HASATOMICMEMBERS_OFFSET UNITYSDK_OFFSET(0x1D933CB0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_ISUNIONBASEOF_OFFSET UNITYSDK_OFFSET(0x1D933D40)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_TRYPARSEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1D934040)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1D933DE0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9344B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9339D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_union_TypeDefinitionIndex = 1989;

	class Datatype_union : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_union_TypeDefinitionIndex)->GetStaticField(0x1F30);
		}
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_union_TypeDefinitionIndex)->GetStaticField(0x1F38);
		}
		::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>* types; // 0x38

		::System::Void _ctor(::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>* types)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION__CTOR_OFFSET))(this, types);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_CREATEVALUECONVERTER_OFFSET))(this, schemaType);
		}

		::System::Int32 Compare(::System::Object* value1, ::System::Object* value2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_COMPARE_OFFSET))(this, value1, value2);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Type* get_ListValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_LISTVALUETYPE_OFFSET))(this);
		}

		::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags()
		{
			return ((::System::Xml::Schema::RestrictionFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_GET_VALIDRESTRICTIONFLAGS_OFFSET))(this);
		}

		::System::Boolean HasAtomicMembers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_HASATOMICMEMBERS_OFFSET))(this);
		}

		::System::Boolean IsUnionBaseOf(::System::Xml::Schema::DatatypeImplementation* derivedType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::DatatypeImplementation*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_ISUNIONBASEOF_OFFSET))(this, derivedType);
		}

		::System::Exception* TryParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_TRYPARSEVALUE_OFFSET))(this, s, nameTable, nsmgr, typedValue);
		}

		::System::Exception* TryParseValue_1(::System::Object* value, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_TRYPARSEVALUE_1_OFFSET))(this, value, nameTable, nsmgr, typedValue);
		}
	};
}
