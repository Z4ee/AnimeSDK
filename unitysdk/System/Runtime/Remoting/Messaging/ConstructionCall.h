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

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x163ACDD0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATIONTYPENAME_OFFSET UNITYSDK_OFFSET(0x163AC660)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATIONTYPE_OFFSET UNITYSDK_OFFSET(0x163AC610)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ACTIVATOR_OFFSET UNITYSDK_OFFSET(0x163AC670)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_CALLSITEACTIVATIONATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x163AC690)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_CONTEXTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x163AC6B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ISCONTEXTOK_OFFSET UNITYSDK_OFFSET(0x163AC5F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x163AD730)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_SOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x163AD790)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_INITDICTIONARY_OFFSET UNITYSDK_OFFSET(0x163AC490)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_INITMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x163AC710)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SETACTIVATIONATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x163AC6A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_ACTIVATOR_OFFSET UNITYSDK_OFFSET(0x163AC680)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_ISCONTEXTOK_OFFSET UNITYSDK_OFFSET(0x163AC600)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_SOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x163AD7A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x163AC390)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x163AC340)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ConstructionCall_TypeDefinitionIndex = 1297;

	class ConstructionCall : public ::System::Runtime::Remoting::Messaging::MethodCall
	{
	public:
		::System::Runtime::Remoting::Activation::IActivator* _activator; // 0x70
		::System::Collections::IList* _contextProperties; // 0x78
		::System::String* _activationTypeName; // 0x80
		::System::Type* _activationType; // 0x88
		::System::Runtime::Remoting::Proxies::RemotingProxy* _sourceProxy; // 0x90
		::Il2CppArray<::System::Object*>* _activationAttributes; // 0x98
		::System::Boolean _isContextOk; // 0xA0

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL__CTOR_OFFSET))(this, type);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Void InitDictionary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_INITDICTIONARY_OFFSET))(this);
		}

		::System::Boolean get_IsContextOk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_ISCONTEXTOK_OFFSET))(this);
		}

		::System::Void set_IsContextOk(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_ISCONTEXTOK_OFFSET))(this, value);
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

		::System::Void set_Activator(::System::Runtime::Remoting::Activation::IActivator* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Activation::IActivator*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_ACTIVATOR_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Object*>* get_CallSiteActivationAttributes()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_CALLSITEACTIVATIONATTRIBUTES_OFFSET))(this);
		}

		::System::Void SetActivationAttributes(::Il2CppArray<::System::Object*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SETACTIVATIONATTRIBUTES_OFFSET))(this, attributes);
		}

		::System::Collections::IList* get_ContextProperties()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_CONTEXTPROPERTIES_OFFSET))(this);
		}

		::System::Void InitMethodProperty(::System::String* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_INITMETHODPROPERTY_OFFSET))(this, key, value);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Runtime::Remoting::Proxies::RemotingProxy* get_SourceProxy()
		{
			return ((::System::Runtime::Remoting::Proxies::RemotingProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_GET_SOURCEPROXY_OFFSET))(this);
		}

		::System::Void set_SourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Proxies::RemotingProxy*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALL_SET_SOURCEPROXY_OFFSET))(this, value);
		}
	};
}
