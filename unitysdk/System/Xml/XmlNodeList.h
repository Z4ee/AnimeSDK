#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_XMLNODELIST_GET_ITEMOF_OFFSET UNITYSDK_OFFSET(0x1E62B8D0)
#define SYSTEM_XML_XMLNODELIST_PRIVATEDISPOSENODELIST_OFFSET UNITYSDK_OFFSET(0x1E62B8F0)
#define SYSTEM_XML_XMLNODELIST_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E62B8E0)
#define SYSTEM_XML_XMLNODELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E62B150)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeList_TypeDefinitionIndex = 1780;

	class XmlNodeList : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST__CTOR_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_ItemOf(::System::Int32 i)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST_GET_ITEMOF_OFFSET))(this, i);
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
