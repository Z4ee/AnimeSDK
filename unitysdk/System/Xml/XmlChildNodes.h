#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNodeList.h"

namespace System::Collections { class IEnumerator; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_XMLCHILDNODES_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AE875B0)
#define SYSTEM_XML_XMLCHILDNODES_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AE87550)
#define SYSTEM_XML_XMLCHILDNODES__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEAAA90)

namespace System::Xml
{
	inline static constexpr unsigned int XmlChildNodes_TypeDefinitionIndex = 1885;

	class XmlChildNodes : public ::System::Xml::XmlNodeList
	{
	public:
		::System::Xml::XmlNode* container; // 0x10

		::System::Void _ctor(::System::Xml::XmlNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDNODES__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDNODES_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDNODES_GETENUMERATOR_OFFSET))(this);
		}
	};
}
