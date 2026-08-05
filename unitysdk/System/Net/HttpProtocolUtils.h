#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTPPROTOCOLUTILS_DATE2STRING_OFFSET UNITYSDK_OFFSET(0x1DEC1380)
#define SYSTEM_NET_HTTPPROTOCOLUTILS_STRING2DATE_OFFSET UNITYSDK_OFFSET(0x1DEC1300)
#define SYSTEM_NET_HTTPPROTOCOLUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC12F0)

namespace System::Net
{
	inline static constexpr unsigned int HttpProtocolUtils_TypeDefinitionIndex = 3323;

	class HttpProtocolUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPPROTOCOLUTILS__CTOR_OFFSET))(this);
		}

		static ::System::DateTime string2date(::System::String* S)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPPROTOCOLUTILS_STRING2DATE_OFFSET))(S);
		}

		static ::System::String* date2string(::System::DateTime D)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPPROTOCOLUTILS_DATE2STRING_OFFSET))(D);
		}
	};
}
