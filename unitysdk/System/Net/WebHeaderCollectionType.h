#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int WebHeaderCollectionType_TypeDefinitionIndex = 2755;

	enum class WebHeaderCollectionType : ::System::UInt16
	{
		Unknown = 0x0,
		WebRequest = 0x1,
		WebResponse = 0x2,
		HttpWebRequest = 0x3,
		HttpWebResponse = 0x4,
		HttpListenerRequest = 0x5,
		HttpListenerResponse = 0x6,
		FtpWebRequest = 0x7,
		FtpWebResponse = 0x8,
		FileWebRequest = 0x9,
		FileWebResponse = 0xA,
	};
}
