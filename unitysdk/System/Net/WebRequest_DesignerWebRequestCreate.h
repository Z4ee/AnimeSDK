#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_WEBREQUEST_DESIGNERWEBREQUESTCREATE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B98E210)
#define SYSTEM_NET_WEBREQUEST_DESIGNERWEBREQUESTCREATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B98C960)

namespace System::Net
{
	inline static constexpr unsigned int WebRequest_DesignerWebRequestCreate_TypeDefinitionIndex = 2767;

	class WebRequest_DesignerWebRequestCreate : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_DESIGNERWEBREQUESTCREATE__CTOR_OFFSET))(this);
		}

		::System::Net::WebRequest* Create(::System::Uri* a1)
		{
			return ((::System::Net::WebRequest*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_DESIGNERWEBREQUESTCREATE_CREATE_OFFSET))(this, a1);
		}
	};
}
