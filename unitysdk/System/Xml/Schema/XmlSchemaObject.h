#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlAttribute; }
namespace System::Xml::Schema { class XmlSchemaAnnotation; }
namespace System::Xml::Serialization { class XmlSerializerNamespaces; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x19891E00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_CLONE_OFFSET UNITYSDK_OFFSET(0x19891E30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19891DD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19891E10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x19891D80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SETUNHANDLEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19891DF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19891DE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19891E20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19891700)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObject_TypeDefinitionIndex = 2171;

	class XmlSchemaObject : public ::System::Object
	{
	public:
		::System::Xml::Schema::XmlSchemaObject* parent; // 0x10
		::System::String* sourceUri; // 0x18
		::System::Xml::Serialization::XmlSerializerNamespaces* namespaces; // 0x20
		::System::Boolean isProcessing; // 0x28
		::System::Int32 lineNum; // 0x2C
		::System::Int32 linePos; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT__CTOR_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlSerializerNamespaces* get_Namespaces()
		{
			return ((::System::Xml::Serialization::XmlSerializerNamespaces*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_NAMESPACES_OFFSET))(this);
		}

		::System::String* get_IdAttribute()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_IDATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_IdAttribute(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_IDATTRIBUTE_OFFSET))(this, value);
		}

		::System::Void SetUnhandledAttributes(::Il2CppArray<::System::Xml::XmlAttribute*>* moreAttributes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Xml::XmlAttribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SETUNHANDLEDATTRIBUTES_OFFSET))(this, moreAttributes);
		}

		::System::Void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnnotation*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ADDANNOTATION_OFFSET))(this, annotation);
		}

		::System::String* get_NameAttribute()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_NAMEATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_NameAttribute(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_NAMEATTRIBUTE_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_CLONE_OFFSET))(this);
		}
	};
}
