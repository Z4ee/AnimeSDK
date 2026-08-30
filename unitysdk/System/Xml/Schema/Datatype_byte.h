#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_short.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class FacetsChecker; }

#define SYSTEM_XML_SCHEMA_DATATYPE_BYTE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BADE860)
#define SYSTEM_XML_SCHEMA_DATATYPE_BYTE_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1BADE7F0)
#define SYSTEM_XML_SCHEMA_DATATYPE_BYTE_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1BADE9B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_BYTE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BADE850)
#define SYSTEM_XML_SCHEMA_DATATYPE_BYTE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1BADE950)
#define SYSTEM_XML_SCHEMA_DATATYPE_BYTE_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1BADEA10)
#define SYSTEM_XML_SCHEMA_DATATYPE_BYTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BADEC60)
#define SYSTEM_XML_SCHEMA_DATATYPE_BYTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD64F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_byte_TypeDefinitionIndex = 2139;

	class Datatype_byte : public ::System::Xml::Schema::Datatype_short
	{
	public:
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_byte_TypeDefinitionIndex)->GetStaticField(0x1C280);
		}
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_byte_TypeDefinitionIndex)->GetStaticField(0x1C288);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_numeric10FacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(Datatype_byte_TypeDefinitionIndex)->GetStaticField(0x1C290);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BYTE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BYTE__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BYTE_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BYTE_GET_TYPECODE_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BYTE_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BYTE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Type* get_ListValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BYTE_GET_LISTVALUETYPE_OFFSET))(this);
		}

		::System::Exception* TryParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3, ::System::Object*& a4)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_BYTE_TRYPARSEVALUE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
