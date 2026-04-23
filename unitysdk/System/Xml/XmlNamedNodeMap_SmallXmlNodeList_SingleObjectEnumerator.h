#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_SINGLEOBJECTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A05C950)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_SINGLEOBJECTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A05C9B0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_SINGLEOBJECTENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A05C9D0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_SINGLEOBJECTENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05C940)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator_TypeDefinitionIndex = 1902;

	class XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator : public ::System::Object
	{
	public:
		::System::Object* loneValue; // 0x10
		::System::Int32 position; // 0x18

		::System::Void _ctor(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_SINGLEOBJECTENUMERATOR__CTOR_OFFSET))(this, value);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_SINGLEOBJECTENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_SINGLEOBJECTENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_SINGLEOBJECTENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
