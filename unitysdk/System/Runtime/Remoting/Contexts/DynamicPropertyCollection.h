#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ArrayList; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_GET_HASPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AE52C00)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_NOTIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AE52C30)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE53330)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int DynamicPropertyCollection_TypeDefinitionIndex = 1282;

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

		::System::Void NotifyMessage(::System::Boolean start, ::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Boolean client_site, ::System::Boolean async)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_DYNAMICPROPERTYCOLLECTION_NOTIFYMESSAGE_OFFSET))(this, start, msg, client_site, async);
		}
	};
}
