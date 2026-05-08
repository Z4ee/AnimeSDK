#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

namespace System { class Object; }
namespace System::Runtime::Remoting::Activation { class IActivator; }
namespace System::Runtime::Remoting::Activation { class IConstructionCallMessage; }
namespace System::Runtime::Remoting::Activation { class IConstructionReturnMessage; }

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATOR_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A981860)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATOR_GET_NEXTACTIVATOR_OFFSET UNITYSDK_OFFSET(0x1A981C00)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATOR_INITIALIZELIFETIMESERVICE_OFFSET UNITYSDK_OFFSET(0x1A981BC0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A981C50)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int RemoteActivator_TypeDefinitionIndex = 1318;

	class RemoteActivator : public ::System::MarshalByRefObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATOR__CTOR_OFFSET))(this);
		}

		::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg)
		{
			return ((::System::Runtime::Remoting::Activation::IConstructionReturnMessage*(*)(::PVOID, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATOR_ACTIVATE_OFFSET))(this, msg);
		}

		::System::Object* InitializeLifetimeService()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATOR_INITIALIZELIFETIMESERVICE_OFFSET))(this);
		}

		::System::Runtime::Remoting::Activation::IActivator* get_NextActivator()
		{
			return ((::System::Runtime::Remoting::Activation::IActivator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATOR_GET_NEXTACTIVATOR_OFFSET))(this);
		}
	};
}
