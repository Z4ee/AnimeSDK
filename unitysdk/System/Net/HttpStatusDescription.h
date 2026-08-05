#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTPSTATUSDESCRIPTION_GET_1_OFFSET UNITYSDK_OFFSET(0x1C880C20)
#define SYSTEM_NET_HTTPSTATUSDESCRIPTION_GET_OFFSET UNITYSDK_OFFSET(0x1C880C10)

namespace System::Net
{
	inline static constexpr unsigned int HttpStatusDescription_TypeDefinitionIndex = 3256;

	class HttpStatusDescription : public ::System::Object
	{
	public:
		static ::System::String* Get(::System::Net::HttpStatusCode code)
		{
			return ((::System::String*(*)(::System::Net::HttpStatusCode))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTATUSDESCRIPTION_GET_OFFSET))(code);
		}

		static ::System::String* Get_1(::System::Int32 code)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTATUSDESCRIPTION_GET_1_OFFSET))(code);
		}
	};
}
