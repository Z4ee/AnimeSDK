#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_FTPREQUESTCREATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1AF74E70)
#define SYSTEM_NET_FTPREQUESTCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF75000)

namespace System::Net
{
	inline static constexpr unsigned int FtpRequestCreator_TypeDefinitionIndex = 2830;

	class FtpRequestCreator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPREQUESTCREATOR__CTOR_OFFSET))(this);
		}

		::System::Net::WebRequest* Create(::System::Uri* a1)
		{
			return ((::System::Net::WebRequest*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPREQUESTCREATOR_CREATE_OFFSET))(this, a1);
		}
	};
}
