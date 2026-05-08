#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/PositionInfo.h"

namespace System::Xml { class IXmlLineInfo; }

#define SYSTEM_XML_READERPOSITIONINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1B29E810)
#define SYSTEM_XML_READERPOSITIONINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B29E8F0)
#define SYSTEM_XML_READERPOSITIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B29E800)

namespace System::Xml
{
	inline static constexpr unsigned int ReaderPositionInfo_TypeDefinitionIndex = 1795;

	class ReaderPositionInfo : public ::System::Xml::PositionInfo
	{
	public:
		::System::Xml::IXmlLineInfo* lineInfo; // 0x10

		::System::Void _ctor(::System::Xml::IXmlLineInfo* lineInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IXmlLineInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_READERPOSITIONINFO__CTOR_OFFSET))(this, lineInfo);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_READERPOSITIONINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_READERPOSITIONINFO_GET_LINEPOSITION_OFFSET))(this);
		}
	};
}
