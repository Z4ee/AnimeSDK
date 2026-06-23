#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlAsyncCheckReader.h"

namespace System::Xml { class IXmlLineInfo; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1D18DA20)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1D18DB00)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18D8F0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAsyncCheckReaderWithLineInfo_TypeDefinitionIndex = 1705;

	class XmlAsyncCheckReaderWithLineInfo : public ::System::Xml::XmlAsyncCheckReader
	{
	public:
		::System::Xml::IXmlLineInfo* readerAsIXmlLineInfo; // 0x20

		::System::Void _ctor(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO__CTOR_OFFSET))(this, reader);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO_GET_LINEPOSITION_OFFSET))(this);
		}
	};
}
