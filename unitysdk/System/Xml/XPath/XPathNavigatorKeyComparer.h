#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x185F8D60)
#define SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x185F8E70)
#define SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x185F8D50)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathNavigatorKeyComparer_TypeDefinitionIndex = 1965;

	class XPathNavigatorKeyComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IEqualityComparer_Equals(::System::Object* obj1, ::System::Object* obj2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET))(this, obj1, obj2);
		}

		::System::Int32 System_Collections_IEqualityComparer_GetHashCode(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATORKEYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
