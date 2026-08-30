#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Schema { class XmlSchemaObjectCollection; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONADD_OFFSET UNITYSDK_OFFSET(0x1E8202F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1E820310)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1E820300)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81DC70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObject_TypeDefinitionIndex = 2204;

	class XmlSchemaObject : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::System::Xml::Schema::XmlSchemaObjectCollection* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONADD_OFFSET))(this, a1, a2);
		}

		::System::Void OnRemove(::System::Xml::Schema::XmlSchemaObjectCollection* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONREMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void OnClear(::System::Xml::Schema::XmlSchemaObjectCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONCLEAR_OFFSET))(this, a1);
		}
	};
}
