#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_SCHEMA_IDREFNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD5FC10)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int IdRefNode_TypeDefinitionIndex = 2202;

	class IdRefNode : public ::System::Object
	{
	public:
		::System::String* Id; // 0x10
		::System::Xml::Schema::IdRefNode* Next; // 0x18
		::System::Int32 LinePos; // 0x20
		::System::Int32 LineNo; // 0x24

		::System::Void _ctor(::System::Xml::Schema::IdRefNode* next, ::System::String* id, ::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::IdRefNode*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_IDREFNODE__CTOR_OFFSET))(this, next, id, lineNo, linePos);
		}
	};
}
