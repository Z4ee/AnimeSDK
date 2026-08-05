#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1E618980)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1E618730)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1E618920)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1E618740)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6189E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E615620)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_QNameXdr_TypeDefinitionIndex = 2045;

	class Datatype_QNameXdr : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_QNameXdr_TypeDefinitionIndex)->GetStaticField(0x2240);
		}
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_QNameXdr_TypeDefinitionIndex)->GetStaticField(0x2248);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR__CCTOR_OFFSET))();
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_TOKENIZEDTYPE_OFFSET))(this);
		}

		::System::Object* ParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_PARSEVALUE_OFFSET))(this, s, nameTable, nsmgr);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Type* get_ListValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_LISTVALUETYPE_OFFSET))(this);
		}
	};
}
