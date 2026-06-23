#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_unsignedShort.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class FacetsChecker; }

#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D472370)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x1D472300)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1D4724F0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1D472360)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1D472490)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1D472550)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D472AC0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D472A60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_unsignedByte_TypeDefinitionIndex = 2041;

	class Datatype_unsignedByte : public ::System::Xml::Schema::Datatype_unsignedShort
	{
	public:
		static ::System::Xml::Schema::FacetsChecker** StaticGet_numeric10FacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(Datatype_unsignedByte_TypeDefinitionIndex)->GetStaticField(0x1BD0);
		}
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_unsignedByte_TypeDefinitionIndex)->GetStaticField(0x1BD8);
		}
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_unsignedByte_TypeDefinitionIndex)->GetStaticField(0x1BE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE_GET_TYPECODE_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* value1, ::System::Object* value2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE_COMPARE_OFFSET))(this, value1, value2);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Type* get_ListValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE_GET_LISTVALUETYPE_OFFSET))(this);
		}

		::System::Exception* TryParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNSIGNEDBYTE_TRYPARSEVALUE_OFFSET))(this, s, nameTable, nsmgr, typedValue);
		}
	};
}
