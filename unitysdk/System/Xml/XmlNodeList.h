#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_XMLNODELIST_GET_ITEMOF_OFFSET UNITYSDK_OFFSET(0x1AE973A0)
#define SYSTEM_XML_XMLNODELIST_PRIVATEDISPOSENODELIST_OFFSET UNITYSDK_OFFSET(0x1AE973C0)
#define SYSTEM_XML_XMLNODELIST_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE973B0)
#define SYSTEM_XML_XMLNODELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE96C20)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeList_TypeDefinitionIndex = 1781;

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
