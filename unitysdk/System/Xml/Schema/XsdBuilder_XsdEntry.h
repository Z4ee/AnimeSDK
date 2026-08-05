#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/SchemaNames_Token.h"
#include "unitysdk/System/Xml/Schema/XsdBuilder_State.h"

namespace System::Xml::Schema { class XsdBuilder_XsdAttributeEntry; }
namespace System::Xml::Schema { class XsdBuilder_XsdEndChildFunction; }
namespace System::Xml::Schema { class XsdBuilder_XsdInitFunction; }

#define SYSTEM_XML_SCHEMA_XSDBUILDER_XSDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F10B5B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdBuilder_XsdEntry_TypeDefinitionIndex = 2225;

	class XsdBuilder_XsdEntry : public ::System::Object
	{
	public:
		::System::Xml::Schema::XsdBuilder_XsdInitFunction* InitFunc; // 0x10
		::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* EndChildFunc; // 0x18
		::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>* NextStates; // 0x20
		::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>* Attributes; // 0x28
		::System::Boolean ParseContent; // 0x30
		::System::Xml::Schema::SchemaNames_Token Name; // 0x34
		::System::Xml::Schema::XsdBuilder_State CurrentState; // 0x38

		::System::Void _ctor(::System::Xml::Schema::SchemaNames_Token n, ::System::Xml::Schema::XsdBuilder_State state, ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>* nextStates, ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>* attributes, ::System::Xml::Schema::XsdBuilder_XsdInitFunction* init, ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* end, ::System::Boolean parseContent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaNames_Token, ::System::Xml::Schema::XsdBuilder_State, ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>*, ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*, ::System::Xml::Schema::XsdBuilder_XsdInitFunction*, ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_XSDENTRY__CTOR_OFFSET))(this, n, state, nextStates, attributes, init, end, parseContent);
		}
	};
}
