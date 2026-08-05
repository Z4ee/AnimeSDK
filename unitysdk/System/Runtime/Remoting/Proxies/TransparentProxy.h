#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeRemoteClassHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Proxies { class RealProxy; }

#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1268C0)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int TransparentProxy_TypeDefinitionIndex = 1270;

	class TransparentProxy : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Proxies::RealProxy* _rp; // 0x10
		::Mono::RuntimeRemoteClassHandle _class; // 0x18
		::System::Boolean _custom_type_info; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY__CTOR_OFFSET))(this);
		}
	};
}
