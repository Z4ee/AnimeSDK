#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Xml::Schema { class XmlSchema; }

#define SYSTEM_XML_SCHEMA_CHAMELEONKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BCD3CE0)
#define SYSTEM_XML_SCHEMA_CHAMELEONKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BCD3C10)
#define SYSTEM_XML_SCHEMA_CHAMELEONKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD3BC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ChameleonKey_TypeDefinitionIndex = 1949;

	class ChameleonKey : public ::System::Object
	{
	public:
		::System::Xml::Schema::XmlSchema* originalSchema; // 0x10
		::System::String* targetNS; // 0x18
		::System::Uri* chameleonLocation; // 0x20
		::System::Int32 hashCode; // 0x28

		::System::Void _ctor(::System::String* ns, ::System::Xml::Schema::XmlSchema* originalSchema)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHAMELEONKEY__CTOR_OFFSET))(this, ns, originalSchema);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHAMELEONKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHAMELEONKEY_EQUALS_OFFSET))(this, obj);
		}
	};
}
