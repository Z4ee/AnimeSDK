#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class ActiveAxis; }
namespace System::Xml::Schema { class ForwardAxis; }

#define SYSTEM_XML_SCHEMA_AXISSTACK_EQUAL_OFFSET UNITYSDK_OFFSET(0x1B58F7E0)
#define SYSTEM_XML_SCHEMA_AXISSTACK_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B58F6E0)
#define SYSTEM_XML_SCHEMA_AXISSTACK_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B58F4A0)
#define SYSTEM_XML_SCHEMA_AXISSTACK_MOVETOCHILD_OFFSET UNITYSDK_OFFSET(0x1B58EE10)
#define SYSTEM_XML_SCHEMA_AXISSTACK_MOVETOPARENT_OFFSET UNITYSDK_OFFSET(0x1B58F180)
#define SYSTEM_XML_SCHEMA_AXISSTACK_POP_OFFSET UNITYSDK_OFFSET(0x1B58F7A0)
#define SYSTEM_XML_SCHEMA_AXISSTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x1B58F710)
#define SYSTEM_XML_SCHEMA_AXISSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B58EB30)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int AxisStack_TypeDefinitionIndex = 1941;

	class AxisStack : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* stack; // 0x10
		::System::Xml::Schema::ActiveAxis* parent; // 0x18
		::System::Xml::Schema::ForwardAxis* subtree; // 0x20

		::System::Void _ctor(::System::Xml::Schema::ForwardAxis* faxis, ::System::Xml::Schema::ActiveAxis* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ForwardAxis*, ::System::Xml::Schema::ActiveAxis*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK__CTOR_OFFSET))(this, faxis, parent);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_GET_LENGTH_OFFSET))(this);
		}

		::System::Void Push(::System::Int32 depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_PUSH_OFFSET))(this, depth);
		}

		::System::Void Pop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_POP_OFFSET))(this);
		}

		static ::System::Boolean Equal(::System::String* thisname, ::System::String* thisURN, ::System::String* name, ::System::String* URN)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_EQUAL_OFFSET))(thisname, thisURN, name, URN);
		}

		::System::Void MoveToParent(::System::String* name, ::System::String* URN, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_MOVETOPARENT_OFFSET))(this, name, URN, depth);
		}

		::System::Boolean MoveToChild(::System::String* name, ::System::String* URN, ::System::Int32 depth)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_MOVETOCHILD_OFFSET))(this, name, URN, depth);
		}

		::System::Boolean MoveToAttribute(::System::String* name, ::System::String* URN, ::System::Int32 depth)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_MOVETOATTRIBUTE_OFFSET))(this, name, URN, depth);
		}
	};
}
