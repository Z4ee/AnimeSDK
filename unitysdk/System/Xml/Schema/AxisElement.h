#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Schema { class DoubleLinkAxis; }
namespace System::Xml::Schema { class ForwardAxis; }

#define SYSTEM_XML_SCHEMA_AXISELEMENT_MOVETOCHILD_OFFSET UNITYSDK_OFFSET(0x1B8E8220)
#define SYSTEM_XML_SCHEMA_AXISELEMENT_MOVETOPARENT_OFFSET UNITYSDK_OFFSET(0x1B8E8110)
#define SYSTEM_XML_SCHEMA_AXISELEMENT_SETDEPTH_OFFSET UNITYSDK_OFFSET(0x1B8E8100)
#define SYSTEM_XML_SCHEMA_AXISELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8E80E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int AxisElement_TypeDefinitionIndex = 1940;

	class AxisElement : public ::System::Object
	{
	public:
		::System::Xml::Schema::DoubleLinkAxis* curNode; // 0x10
		::System::Int32 rootDepth; // 0x18
		::System::Int32 curDepth; // 0x1C
		::System::Boolean isMatch; // 0x20

		::System::Void _ctor(::System::Xml::Schema::DoubleLinkAxis* node, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::DoubleLinkAxis*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISELEMENT__CTOR_OFFSET))(this, node, depth);
		}

		::System::Void SetDepth(::System::Int32 depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISELEMENT_SETDEPTH_OFFSET))(this, depth);
		}

		::System::Void MoveToParent(::System::Int32 depth, ::System::Xml::Schema::ForwardAxis* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::ForwardAxis*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISELEMENT_MOVETOPARENT_OFFSET))(this, depth, parent);
		}

		::System::Boolean MoveToChild(::System::String* name, ::System::String* URN, ::System::Int32 depth, ::System::Xml::Schema::ForwardAxis* parent)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Xml::Schema::ForwardAxis*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISELEMENT_MOVETOCHILD_OFFSET))(this, name, URN, depth, parent);
		}
	};
}
