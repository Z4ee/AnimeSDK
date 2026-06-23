#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D49CAD0)
#define SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D49AF00)
#define SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D49D260)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpRequestException_TypeDefinitionIndex = 26120;

	class HttpRequestException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTEXCEPTION__CTOR_2_OFFSET))(this, message, inner);
		}
	};
}
