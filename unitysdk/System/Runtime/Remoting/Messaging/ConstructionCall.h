#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/MethodCall.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::Runtime::Remoting::Activation { class IActivator; }
namespace System::Runtime::Remoting::Proxies { class RemotingProxy; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1878A1C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATIONTYPENAME_OFFSET UNITYSDK_OFFSET(0x18789A80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATIONTYPE_OFFSET UNITYSDK_OFFSET(0x18789A30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATOR_OFFSET UNITYSDK_OFFSET(0x18789A90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_CALLSITEACTIVATIONATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18789AB0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_CONTEXTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18789AD0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ISCONTEXTOK_OFFSET UNITYSDK_OFFSET(0x18789A10)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1878AB00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_SOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x1878AB60)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_INITDICTIONARY_OFFSET UNITYSDK_OFFSET(0x187898B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_INITMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x18789B30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SETACTIVATIONATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18789AC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_ACTIVATOR_OFFSET UNITYSDK_OFFSET(0x18789AA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_ISCONTEXTOK_OFFSET UNITYSDK_OFFSET(0x18789A20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_SOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x1878AB70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x187897B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x18789760)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ConstructionCall_TypeDefinitionIndex = 1298;

	class ConstructionCall : public ::System::Runtime::Remoting::Messaging::MethodCall
	{
	public:
		::System::Type* _activationType; // 0x70
		::System::Runtime::Remoting::Activation::IActivator* _activator; // 0x78
		::System::String* _activationTypeName; // 0x80
		::System::Runtime::Remoting::Proxies::RemotingProxy* _sourceProxy; // 0x88
		::System::Collections::IList* _contextProperties; // 0x90
		::Il2CppArray<::System::Object*>* _activationAttributes; // 0x98
		::System::Boolean _isContextOk; // 0xA0

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void InitDictionary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_INITDICTIONARY_OFFSET))(this);
		}

		::System::Boolean get_IsContextOk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ISCONTEXTOK_OFFSET))(this);
		}

		::System::Void set_IsContextOk(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_ISCONTEXTOK_OFFSET))(this, a1);
		}

		::System::Type* get_ActivationType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATIONTYPE_OFFSET))(this);
		}

		::System::String* get_ActivationTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATIONTYPENAME_OFFSET))(this);
		}

		::System::Runtime::Remoting::Activation::IActivator* get_Activator()
		{
			return ((::System::Runtime::Remoting::Activation::IActivator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATOR_OFFSET))(this);
		}

		::System::Void set_Activator(::System::Runtime::Remoting::Activation::IActivator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Activation::IActivator*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_ACTIVATOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* get_CallSiteActivationAttributes()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_CALLSITEACTIVATIONATTRIBUTES_OFFSET))(this);
		}

		::System::Void SetActivationAttributes(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SETACTIVATIONATTRIBUTES_OFFSET))(this, a1);
		}

		::System::Collections::IList* get_ContextProperties()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_CONTEXTPROPERTIES_OFFSET))(this);
		}

		::System::Void InitMethodProperty(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_INITMETHODPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Runtime::Remoting::Proxies::RemotingProxy* get_SourceProxy()
		{
			return ((::System::Runtime::Remoting::Proxies::RemotingProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_SOURCEPROXY_OFFSET))(this);
		}

		::System::Void set_SourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Proxies::RemotingProxy*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_SOURCEPROXY_OFFSET))(this, a1);
		}
	};
}
