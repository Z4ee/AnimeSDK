#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }

#define SYSTEM_XML_XMLNODELIST_PRIVATEDISPOSENODELIST_OFFSET UNITYSDK_OFFSET(0x1AED13C0)
#define SYSTEM_XML_XMLNODELIST_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AED13B0)
#define SYSTEM_XML_XMLNODELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AED13D0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeList_TypeDefinitionIndex = 1906;

	class XmlNodeList : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST__CTOR_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void PrivateDisposeNodeList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST_PRIVATEDISPOSENODELIST_OFFSET))(this);
		}
	};
}
