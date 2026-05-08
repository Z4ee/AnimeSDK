#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting::Activation { class IActivator; }
namespace System::Runtime::Remoting::Activation { class IConstructionCallMessage; }
namespace System::Runtime::Remoting::Messaging { class ConstructionCall; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ALLOCATEUNINITIALIZEDCLASSINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AC56900)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATECONSTRUCTIONCALL_OFFSET UNITYSDK_OFFSET(0x1AC55B10)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEINSTANCEFROMMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AC567E0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEPROXYFORTYPE_OFFSET UNITYSDK_OFFSET(0x1AC56910)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ENABLEPROXYACTIVATION_OFFSET UNITYSDK_OFFSET(0x1AC56B20)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_GET_CONSTRUCTIONACTIVATOR_OFFSET UNITYSDK_OFFSET(0x1AC55950)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_REMOTEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1AC559C0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC56B30)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int ActivationServices_TypeDefinitionIndex = 1310;

	class ActivationServices : public ::System::Object
	{
	public:
		static ::System::Runtime::Remoting::Activation::IActivator** StaticGet__constructionActivator()
		{
			return (::System::Runtime::Remoting::Activation::IActivator**)Il2CppClass::FromTypeDefinitionIndex(ActivationServices_TypeDefinitionIndex)->GetStaticField(0x1450);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES__CTOR_OFFSET))(this);
		}

		static ::System::Runtime::Remoting::Activation::IActivator* get_ConstructionActivator()
		{
			return ((::System::Runtime::Remoting::Activation::IActivator*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_GET_CONSTRUCTIONACTIVATOR_OFFSET))();
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
