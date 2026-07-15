#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting::Activation { class IActivator; }
namespace System::Runtime::Remoting::Activation { class IConstructionCallMessage; }
namespace System::Runtime::Remoting::Messaging { class ConstructionCall; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Proxies { class RemotingProxy; }

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A828010)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ALLOCATEUNINITIALIZEDCLASSINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A829E50)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATECONSTRUCTIONCALL_OFFSET UNITYSDK_OFFSET(0x1A8288B0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEINSTANCEFROMMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A829C80)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEPROXYFORTYPE_OFFSET UNITYSDK_OFFSET(0x1A829EE0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ENABLEPROXYACTIVATION_OFFSET UNITYSDK_OFFSET(0x1A82A0E0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_GET_CONSTRUCTIONACTIVATOR_OFFSET UNITYSDK_OFFSET(0x1A827F90)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_REMOTEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A828710)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int ActivationServices_TypeDefinitionIndex = 1270;

	class ActivationServices : public ::System::Object
	{
	public:
		static ::System::Runtime::Remoting::Activation::IActivator** StaticGet__constructionActivator()
		{
			return (::System::Runtime::Remoting::Activation::IActivator**)Il2CppClass::FromTypeDefinitionIndex(ActivationServices_TypeDefinitionIndex)->GetStaticField(0x10C10);
		}

		static ::System::Runtime::Remoting::Activation::IActivator* get_ConstructionActivator()
		{
			return ((::System::Runtime::Remoting::Activation::IActivator*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_GET_CONSTRUCTIONACTIVATOR_OFFSET))();
		}

		static ::System::Runtime::Remoting::Messaging::IMessage* Activate(::System::Runtime::Remoting::Proxies::RemotingProxy* a1, ::System::Runtime::Remoting::Messaging::ConstructionCall* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Proxies::RemotingProxy*, ::System::Runtime::Remoting::Messaging::ConstructionCall*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ACTIVATE_OFFSET))(a1, a2);
		}

		static ::System::Runtime::Remoting::Messaging::IMessage* RemoteActivate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_REMOTEACTIVATE_OFFSET))(a1);
		}

		static ::System::Runtime::Remoting::Messaging::ConstructionCall* CreateConstructionCall(::System::Type* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Runtime::Remoting::Messaging::ConstructionCall*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATECONSTRUCTIONCALL_OFFSET))(a1, a2, a3);
		}

		static ::System::Runtime::Remoting::Messaging::IMessage* CreateInstanceFromMessage(::System::Runtime::Remoting::Activation::IConstructionCallMessage* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEINSTANCEFROMMESSAGE_OFFSET))(a1);
		}

		static ::System::Object* CreateProxyForType(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEPROXYFORTYPE_OFFSET))(a1);
		}

		static ::System::Object* AllocateUninitializedClassInstance(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ALLOCATEUNINITIALIZEDCLASSINSTANCE_OFFSET))(a1);
		}

		static ::System::Void EnableProxyActivation(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ENABLEPROXYACTIVATION_OFFSET))(a1, a2);
		}
	};
}
