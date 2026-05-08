#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObject.h"

namespace System { class String; }
namespace System::Xml { class XmlNode; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1B8EE850)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8EE950)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8EE940)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaDocumentation_TypeDefinitionIndex = 2139;

	class XmlSchemaDocumentation : public ::System::Xml::Schema::XmlSchemaObject
	{
	public:
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_languageType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaDocumentation_TypeDefinitionIndex)->GetStaticField(0x1A70);
		}
		::System::String* language; // 0x38
		::System::String* source; // 0x40
		::Il2CppArray<::System::Xml::XmlNode*>* markup; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION__CCTOR_OFFSET))();
		}

		::System::Void set_Language(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION_SET_LANGUAGE_OFFSET))(this, value);
		}
	};
}
