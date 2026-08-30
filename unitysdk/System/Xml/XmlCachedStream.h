#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/MemoryStream.h"

namespace System { class Uri; }
namespace System::IO { class Stream; }

#define SYSTEM_XML_XMLCACHEDSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E882AC0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlCachedStream_TypeDefinitionIndex = 1949;

	class XmlCachedStream : public ::System::IO::MemoryStream
	{
	public:
		::System::Uri* uri; // 0x50

		::System::Void _ctor(::System::Uri* a1, ::System::IO::Stream* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCACHEDSTREAM__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
