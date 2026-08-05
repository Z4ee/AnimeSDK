#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_FTPREQUESTCREATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1D6229F0)
#define SYSTEM_NET_FTPREQUESTCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D622A40)

namespace System::Net
{
	inline static constexpr unsigned int FtpRequestCreator_TypeDefinitionIndex = 3514;

	class FtpRequestCreator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPREQUESTCREATOR__CTOR_OFFSET))(this);
		}

		::System::Net::WebRequest* Create(::System::Uri* uri)
		{
			return ((::System::Net::WebRequest*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPREQUESTCREATOR_CREATE_OFFSET))(this, uri);
		}
	};
}
