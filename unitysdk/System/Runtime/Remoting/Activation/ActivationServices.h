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

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x16395960)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ALLOCATEUNINITIALIZEDCLASSINSTANCE_OFFSET UNITYSDK_OFFSET(0x16396EA0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATECONSTRUCTIONCALL_OFFSET UNITYSDK_OFFSET(0x16396090)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEINSTANCEFROMMESSAGE_OFFSET UNITYSDK_OFFSET(0x16396D40)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEPROXYFORTYPE_OFFSET UNITYSDK_OFFSET(0x16396EB0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ENABLEPROXYACTIVATION_OFFSET UNITYSDK_OFFSET(0x163970C0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_GET_CONSTRUCTIONACTIVATOR_OFFSET UNITYSDK_OFFSET(0x163958E0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_REMOTEACTIVATE_OFFSET UNITYSDK_OFFSET(0x16395F40)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int ActivationServices_TypeDefinitionIndex = 1267;

	class ActivationServices : public ::System::Object
	{
	public:
		static ::System::Runtime::Remoting::Activation::IActivator** StaticGet__constructionActivator()
		{
			return (::System::Runtime::Remoting::Activation::IActivator**)Il2CppClass::FromTypeDefinitionIndex(ActivationServices_TypeDefinitionIndex)->GetStaticField(0x6730);
		}

		static ::System::Runtime::Remoting::Activation::IActivator* get_ConstructionActivator()
		{
			return ((::System::Runtime::Remoting::Activation::IActivator*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_GET_CONSTRUCTIONACTIVATOR_OFFSET))();
		}

		static ::System::Runtime::Remoting::Messaging::IMessage* Activate(::System::Runtime::Remoting::Proxies::RemotingProxy* proxy, ::System::Runtime::Remoting::Messaging::ConstructionCall* ctorCall)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Proxies::RemotingProxy*, ::System::Runtime::Remoting::Messaging::ConstructionCall*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ACTIVATE_OFFSET))(proxy, ctorCall);
		}

		static ::System::Runtime::Remoting::Messaging::IMessage* RemoteActivate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_REMOTEACTIVATE_OFFSET))(ctorCall);
		}

		static ::System::Runtime::Remoting::Messaging::ConstructionCall* CreateConstructionCall(::System::Type* type, ::System::String* activationUrl, ::Il2CppArray<::System::Object*>* activationAttributes)
		{
			return ((::System::Runtime::Remoting::Messaging::ConstructionCall*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATECONSTRUCTIONCALL_OFFSET))(type, activationUrl, activationAttributes);
		}

		static ::System::Runtime::Remoting::Messaging::IMessage* CreateInstanceFromMessage(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEINSTANCEFROMMESSAGE_OFFSET))(ctorCall);
		}

		static ::System::Object* CreateProxyForType(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEPROXYFORTYPE_OFFSET))(type);
		}

		static ::System::Object* AllocateUninitializedClassInstance(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ALLOCATEUNINITIALIZEDCLASSINSTANCE_OFFSET))(type);
		}

		static ::System::Void EnableProxyActivation(::System::Type* type, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ENABLEPROXYACTIVATION_OFFSET))(type, enable);
		}
	};
}
