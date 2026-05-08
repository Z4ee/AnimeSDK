#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Runtime::Remoting::Activation { class IActivator; }
namespace System::Runtime::Remoting::Activation { class IConstructionCallMessage; }
namespace System::Runtime::Remoting::Activation { class IConstructionReturnMessage; }

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_APPDOMAINLEVELACTIVATOR_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A6C04A0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_APPDOMAINLEVELACTIVATOR_GET_NEXTACTIVATOR_OFFSET UNITYSDK_OFFSET(0x1A6C0490)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_APPDOMAINLEVELACTIVATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6C0480)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int AppDomainLevelActivator_TypeDefinitionIndex = 1311;

	class AppDomainLevelActivator : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Activation::IActivator* _next; // 0x10
		::System::String* _activationUrl; // 0x18

		::System::Void _ctor(::System::String* activationUrl, ::System::Runtime::Remoting::Activation::IActivator* next)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Runtime::Remoting::Activation::IActivator*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_APPDOMAINLEVELACTIVATOR__CTOR_OFFSET))(this, activationUrl, next);
		}

		::System::Runtime::Remoting::Activation::IActivator* get_NextActivator()
		{
			return ((::System::Runtime::Remoting::Activation::IActivator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_APPDOMAINLEVELACTIVATOR_GET_NEXTACTIVATOR_OFFSET))(this);
		}

		::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall)
		{
			return ((::System::Runtime::Remoting::Activation::IConstructionReturnMessage*(*)(::PVOID, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_APPDOMAINLEVELACTIVATOR_ACTIVATE_OFFSET))(this, ctorCall);
		}
	};
}
