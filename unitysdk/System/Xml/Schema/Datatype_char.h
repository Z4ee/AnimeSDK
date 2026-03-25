#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR_COMPARE_OFFSET UNITYSDK_OFFSET(0x185861A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x18586140)
#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x185860E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x18586290)
#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x185863E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x18586470)
#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1857EAE0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_char_TypeDefinitionIndex = 2138;

	class Datatype_char : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_char_TypeDefinitionIndex)->GetStaticField(0x7A30);
		}
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_char_TypeDefinitionIndex)->GetStaticField(0x7A38);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR__CCTOR_OFFSET))();
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Type* get_ListValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR_GET_LISTVALUETYPE_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* value1, ::System::Object* value2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR_COMPARE_OFFSET))(this, value1, value2);
		}

		::System::Object* ParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR_PARSEVALUE_OFFSET))(this, s, nameTable, nsmgr);
		}

		::System::Exception* TryParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::Object*& typedValue)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR_TRYPARSEVALUE_OFFSET))(this, s, nameTable, nsmgr, typedValue);
		}
	};
}
