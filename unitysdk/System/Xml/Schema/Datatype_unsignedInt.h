#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_unsignedLong.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class FacetsChecker; }

#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT_COMPARE_OFFSET UNITYSDK_OFFSET(0x1E7F3770)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1E7F3700)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1E7F38D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1E7F3760)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1E7F3870)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1E7F3930)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F3B80)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E76E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_unsignedInt_TypeDefinitionIndex = 2142;

	class Datatype_unsignedInt : public ::System::Xml::Schema::Datatype_unsignedLong
	{
	public:
		static ::System::Xml::Schema::FacetsChecker** StaticGet_numeric10FacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(Datatype_unsignedInt_TypeDefinitionIndex)->GetStaticField(0x19B30);
		}
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_unsignedInt_TypeDefinitionIndex)->GetStaticField(0x19B38);
		}
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_unsignedInt_TypeDefinitionIndex)->GetStaticField(0x19B40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT_GET_TYPECODE_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Type* get_ListValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT_GET_LISTVALUETYPE_OFFSET))(this);
		}

		::System::Exception* TryParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3, ::System::Object*& a4)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDINT_TRYPARSEVALUE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
