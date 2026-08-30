#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_HTTPREQUESTCREATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1B037760)
#define SYSTEM_NET_HTTPREQUESTCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B037750)

namespace System::Net
{
	inline static constexpr unsigned int HttpRequestCreator_TypeDefinitionIndex = 2855;

	class HttpRequestCreator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPREQUESTCREATOR__CTOR_OFFSET))(this);
		}

		::System::Net::WebRequest* Create(::System::Uri* a1)
		{
			return ((::System::Net::WebRequest*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPREQUESTCREATOR_CREATE_OFFSET))(this, a1);
		}
	};
}
