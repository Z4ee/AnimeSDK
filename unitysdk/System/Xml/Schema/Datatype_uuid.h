#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_SCHEMA_DATATYPE_UUID_COMPARE_OFFSET UNITYSDK_OFFSET(0x19FA80E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UUID_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x19FA8080)
#define SYSTEM_XML_SCHEMA_DATATYPE_UUID_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x19FA8020)
#define SYSTEM_XML_SCHEMA_DATATYPE_UUID_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x19FA81D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UUID_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x19FA8340)
#define SYSTEM_XML_SCHEMA_DATATYPE_UUID__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FA83D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UUID__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9B0C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_uuid_TypeDefinitionIndex = 2145;

	class Datatype_uuid : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_uuid_TypeDefinitionIndex)->GetStaticField(0x23790);
		}
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_uuid_TypeDefinitionIndex)->GetStaticField(0x23798);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UUID__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UUID__CCTOR_OFFSET))();
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UUID_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Type* get_ListValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UUID_GET_LISTVALUETYPE_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UUID_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Object* ParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UUID_PARSEVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Exception* TryParseValue(::System::String* a1, ::System::Xml::XmlNameTable* a2, ::System::Xml::IXmlNamespaceResolver* a3, ::System::Object*& a4)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UUID_TRYPARSEVALUE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
