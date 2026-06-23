#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"
#include "unitysdk/System/Xml/Schema/RestrictionFlags.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_SCHEMA_DATATYPE_UUID_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D2CE410)
#define SYSTEM_XML_SCHEMA_DATATYPE_UUID_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1D2CE3A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UUID_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1D2CE400)
#define SYSTEM_XML_SCHEMA_DATATYPE_UUID_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1D2CE340)
#define SYSTEM_XML_SCHEMA_DATATYPE_UUID_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1D2CE500)
#define SYSTEM_XML_SCHEMA_DATATYPE_UUID_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1D2CE660)
#define SYSTEM_XML_SCHEMA_DATATYPE_UUID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2CE6F0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UUID__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2CAF20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_uuid_TypeDefinitionIndex = 2049;

	class Datatype_uuid : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_uuid_TypeDefinitionIndex)->GetStaticField(0x2250);
		}
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_uuid_TypeDefinitionIndex)->GetStaticField(0x2258);
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

		::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags()
		{
			return ((::System::Xml::Schema::RestrictionFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UUID_GET_VALIDRESTRICTIONFLAGS_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* value1, ::System::Object* value2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UUID_COMPARE_OFFSET))(this, value1, value2);
		}

		::System::Object* ParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UUID_PARSEVALUE_OFFSET))(this, s, nameTable, nsmgr);
		}

		::System::Exception* TryParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UUID_TRYPARSEVALUE_OFFSET))(this, s, nameTable, nsmgr, typedValue);
		}
	};
}
