#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/SchemaNames_Token.h"

namespace System::Xml::Schema { class XdrBuilder_XdrAttributeEntry; }
namespace System::Xml::Schema { class XdrBuilder_XdrBeginChildFunction; }
namespace System::Xml::Schema { class XdrBuilder_XdrEndChildFunction; }
namespace System::Xml::Schema { class XdrBuilder_XdrInitFunction; }

#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F06AFA0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XdrBuilder_XdrEntry_TypeDefinitionIndex = 2108;

	class XdrBuilder_XdrEntry : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>* _Attributes; // 0x10
		::Il2CppArray<::System::Int32>* _NextStates; // 0x18
		::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* _EndChildFunc; // 0x20
		::System::Xml::Schema::XdrBuilder_XdrInitFunction* _InitFunc; // 0x28
		::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* _BeginChildFunc; // 0x30
		::System::Xml::Schema::SchemaNames_Token _Name; // 0x38
		::System::Boolean _AllowText; // 0x3C

		::System::Void _ctor(::System::Xml::Schema::SchemaNames_Token n, ::Il2CppArray<::System::Int32>* states, ::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>* attributes, ::System::Xml::Schema::XdrBuilder_XdrInitFunction* init, ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* begin, ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* end, ::System::Boolean fText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaNames_Token, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*, ::System::Xml::Schema::XdrBuilder_XdrInitFunction*, ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*, ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRENTRY__CTOR_OFFSET))(this, n, states, attributes, init, begin, end, fText);
		}
	};
}
