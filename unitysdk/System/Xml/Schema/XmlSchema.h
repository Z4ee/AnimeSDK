#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObject.h"

namespace System { class String; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AE5CF60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE5CF70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchema_TypeDefinitionIndex = 2172;

	class XmlSchema : public ::System::Xml::Schema::XmlSchemaObject
	{
	public:
		static ::System::Int32* StaticGet_globalIdCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XmlSchema_TypeDefinitionIndex)->GetStaticField(0x7E70);
		}
		::System::String* id; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA__CCTOR_OFFSET))();
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_ID_OFFSET))(this);
		}
	};
}
