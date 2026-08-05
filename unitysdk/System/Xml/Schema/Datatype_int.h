#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_long.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class FacetsChecker; }

#define SYSTEM_XML_SCHEMA_DATATYPE_INT_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D0914C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_INT_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1D091450)
#define SYSTEM_XML_SCHEMA_DATATYPE_INT_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1D091640)
#define SYSTEM_XML_SCHEMA_DATATYPE_INT_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1D0914B0)
#define SYSTEM_XML_SCHEMA_DATATYPE_INT_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1D0915E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_INT_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1D0916A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_INT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D091870)
#define SYSTEM_XML_SCHEMA_DATATYPE_INT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D091810)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_int_TypeDefinitionIndex = 2034;

	class Datatype_int : public ::System::Xml::Schema::Datatype_long
	{
	public:
		static ::System::Xml::Schema::FacetsChecker** StaticGet_numeric10FacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(Datatype_int_TypeDefinitionIndex)->GetStaticField(0x18F0);
		}
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_int_TypeDefinitionIndex)->GetStaticField(0x18F8);
		}
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_int_TypeDefinitionIndex)->GetStaticField(0x1900);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INT__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INT_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INT_GET_TYPECODE_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* value1, ::System::Object* value2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INT_COMPARE_OFFSET))(this, value1, value2);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INT_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Type* get_ListValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INT_GET_LISTVALUETYPE_OFFSET))(this);
		}

		::System::Exception* TryParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INT_TRYPARSEVALUE_OFFSET))(this, s, nameTable, nsmgr, typedValue);
		}
	};
}
