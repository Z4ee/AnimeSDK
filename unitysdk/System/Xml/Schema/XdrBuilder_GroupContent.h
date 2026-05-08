#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_SCHEMA_XDRBUILDER_GROUPCONTENT_COPY_1_OFFSET UNITYSDK_OFFSET(0x1ACC2310)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_GROUPCONTENT_COPY_OFFSET UNITYSDK_OFFSET(0x1ACC9340)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_GROUPCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC08D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XdrBuilder_GroupContent_TypeDefinitionIndex = 2101;

	class XdrBuilder_GroupContent : public ::System::Object
	{
	public:
		::System::Int32 _Order; // 0x10
		::System::UInt32 _MinVal; // 0x14
		::System::Boolean _HasMaxAttr; // 0x18
		::System::Boolean _HasMinAttr; // 0x19
		::System::UInt32 _MaxVal; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_GROUPCONTENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Copy(::System::Xml::Schema::XdrBuilder_GroupContent* from, ::System::Xml::Schema::XdrBuilder_GroupContent* to)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder_GroupContent*, ::System::Xml::Schema::XdrBuilder_GroupContent*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_GROUPCONTENT_COPY_OFFSET))(from, to);
		}

		static ::System::Xml::Schema::XdrBuilder_GroupContent* Copy_1(::System::Xml::Schema::XdrBuilder_GroupContent* other)
		{
			return ((::System::Xml::Schema::XdrBuilder_GroupContent*(*)(::System::Xml::Schema::XdrBuilder_GroupContent*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_GROUPCONTENT_COPY_1_OFFSET))(other);
		}
	};
}
