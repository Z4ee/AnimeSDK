#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::IO { class Stream; }

#define SYSTEM_XML_XMLDOWNLOADMANAGER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD023A0)
#define SYSTEM_XML_XMLDOWNLOADMANAGER___C__DISPLAYCLASS4_0__GETSTREAMASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1BD023B0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDownloadManager___c__DisplayClass4_0_TypeDefinitionIndex = 1814;

	class XmlDownloadManager___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Uri* uri; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::IO::Stream* _GetStreamAsync_b__0()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER___C__DISPLAYCLASS4_0__GETSTREAMASYNC_B__0_OFFSET))(this);
		}
	};
}
