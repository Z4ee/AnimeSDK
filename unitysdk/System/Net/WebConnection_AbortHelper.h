#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System::Net { class WebConnection; }

#define SYSTEM_NET_WEBCONNECTION_ABORTHELPER_ABORT_OFFSET UNITYSDK_OFFSET(0x187246C0)
#define SYSTEM_NET_WEBCONNECTION_ABORTHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1871D000)

namespace System::Net
{
	inline static constexpr unsigned int WebConnection_AbortHelper_TypeDefinitionIndex = 2872;

	class WebConnection_AbortHelper : public ::System::Object
	{
	public:
		::System::Net::WebConnection* Connection; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_ABORTHELPER__CTOR_OFFSET))(this);
		}

		::System::Void Abort(::System::Object* sender, ::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTION_ABORTHELPER_ABORT_OFFSET))(this, sender, args);
		}
	};
}
