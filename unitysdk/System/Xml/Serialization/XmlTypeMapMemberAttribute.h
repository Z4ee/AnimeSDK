#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMember.h"

namespace System { class String; }
namespace System::Xml::Serialization { class XmlTypeMapping; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_GET_ATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x185F1A40)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_GET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0x185F1A90)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x185F1A60)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_ATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x185F1A50)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_FORM_OFFSET UNITYSDK_OFFSET(0x185F1A80)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0x185F1AA0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x185F1A70)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x185D1F90)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberAttribute_TypeDefinitionIndex = 2036;

	class XmlTypeMapMemberAttribute : public ::System::Xml::Serialization::XmlTypeMapMember
	{
	public:
		::System::String* _namespace; // 0x50
		::System::String* _attributeName; // 0x58
		::System::Xml::Serialization::XmlTypeMapping* _mappedType; // 0x60
		::System::Xml::Schema::XmlSchemaForm _form; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::String* get_AttributeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_GET_ATTRIBUTENAME_OFFSET))(this);
		}

		::System::Void set_AttributeName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_ATTRIBUTENAME_OFFSET))(this, value);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Void set_Namespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_NAMESPACE_OFFSET))(this, value);
		}

		::System::Void set_Form(::System::Xml::Schema::XmlSchemaForm value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaForm))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_FORM_OFFSET))(this, value);
		}

		::System::Xml::Serialization::XmlTypeMapping* get_MappedType()
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_GET_MAPPEDTYPE_OFFSET))(this);
		}

		::System::Void set_MappedType(::System::Xml::Serialization::XmlTypeMapping* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_MAPPEDTYPE_OFFSET))(this, value);
		}
	};
}
