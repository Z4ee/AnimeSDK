#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AEA56C0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AEA57E0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA56B0)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathNavigatorKeyComparer_TypeDefinitionIndex = 1966;

	class XPathNavigatorKeyComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IEqualityComparer_Equals(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_Collections_IEqualityComparer_GetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
