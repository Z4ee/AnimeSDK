#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDENTETY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E10E720)
#define SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDENTETY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E10E690)
#define SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDENTETY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E10E680)

namespace System::Data
{
	inline static constexpr unsigned int XmlToDatasetMap_XmlNodeIdentety_TypeDefinitionIndex = 39359;

	class XmlToDatasetMap_XmlNodeIdentety : public ::System::Object
	{
	public:
		::System::String* NamespaceURI; // 0x10
		::System::String* LocalName; // 0x18

		::System::Void _ctor(::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDENTETY__CTOR_OFFSET))(this, localName, namespaceURI);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDENTETY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDENTETY_EQUALS_OFFSET))(this, obj);
		}
	};
}
