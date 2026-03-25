#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Runtime::Remoting::Contexts { class IDynamicProperty; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_FINDPROPERTY_OFFSET UNITYSDK_OFFSET(0x163A3EC0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_GET_HASPROPERTIES_OFFSET UNITYSDK_OFFSET(0x163A16A0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_NOTIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x163A1FA0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_REGISTERDYNAMICPROPERTY_OFFSET UNITYSDK_OFFSET(0x163A1940)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_UNREGISTERDYNAMICPROPERTY_OFFSET UNITYSDK_OFFSET(0x163A1C40)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x163A1E40)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int DynamicPropertyCollection_TypeDefinitionIndex = 1237;

	class DynamicPropertyCollection : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* _properties; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasProperties()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_GET_HASPROPERTIES_OFFSET))(this);
		}

		::System::Boolean RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty* prop)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Remoting::Contexts::IDynamicProperty*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_REGISTERDYNAMICPROPERTY_OFFSET))(this, prop);
		}

		::System::Boolean UnregisterDynamicProperty(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_UNREGISTERDYNAMICPROPERTY_OFFSET))(this, name);
		}

		::System::Void NotifyMessage(::System::Boolean start, ::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Boolean client_site, ::System::Boolean async)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_NOTIFYMESSAGE_OFFSET))(this, start, msg, client_site, async);
		}

		::System::Int32 FindProperty(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_FINDPROPERTY_OFFSET))(this, name);
		}
	};
}
