#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_ENVOYINFO_GET_ENVOYSINKS_OFFSET UNITYSDK_OFFSET(0x1BDD1990)
#define SYSTEM_RUNTIME_REMOTING_ENVOYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD1980)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int EnvoyInfo_TypeDefinitionIndex = 1204;

	class EnvoyInfo : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* envoySinks; // 0x10

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMessageSink*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ENVOYINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySinks()
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ENVOYINFO_GET_ENVOYSINKS_OFFSET))(this);
		}
	};
}
