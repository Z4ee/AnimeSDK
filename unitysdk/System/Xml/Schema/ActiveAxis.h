#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class Asttree; }

#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_ENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1ECA4CD0)
#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1ECA5000)
#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_MOVETOSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1ECA4900)
#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_REACTIVATE_OFFSET UNITYSDK_OFFSET(0x1ECA4600)
#define SYSTEM_XML_SCHEMA_ACTIVEAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECA4610)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ActiveAxis_TypeDefinitionIndex = 1941;

	class ActiveAxis : public ::System::Object
	{
	public:
		::System::Xml::Schema::Asttree* axisTree; // 0x10
		::System::Collections::ArrayList* axisStack; // 0x18
		::System::Boolean isActive; // 0x20
		::System::Int32 currentDepth; // 0x24

		::System::Void _ctor(::System::Xml::Schema::Asttree* axisTree)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::Asttree*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS__CTOR_OFFSET))(this, axisTree);
		}

		::System::Void Reactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_REACTIVATE_OFFSET))(this);
		}

		::System::Boolean MoveToStartElement(::System::String* localname, ::System::String* URN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_MOVETOSTARTELEMENT_OFFSET))(this, localname, URN);
		}

		::System::Boolean EndElement(::System::String* localname, ::System::String* URN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_ENDELEMENT_OFFSET))(this, localname, URN);
		}

		::System::Boolean MoveToAttribute(::System::String* localname, ::System::String* URN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_MOVETOATTRIBUTE_OFFSET))(this, localname, URN);
		}
	};
}
