#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1943DF90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_FREENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x19439BD0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_DATASTORE_OFFSET UNITYSDK_OFFSET(0x1943DE70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HASUSERDATA_OFFSET UNITYSDK_OFFSET(0x1943DF00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HOSTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1943DEE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_SET_HOSTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1943DEF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1943E540)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int IllogicalCallContext_TypeDefinitionIndex = 1291;

	class IllogicalCallContext : public ::System::Object
	{
	public:
		::System::Object* m_HostContext; // 0x10
		::System::Collections::Hashtable* m_Datastore; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Collections::Hashtable* get_Datastore()
		{
			return ((::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_DATASTORE_OFFSET))(this);
		}

		::System::Object* get_HostContext()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HOSTCONTEXT_OFFSET))(this);
		}

		::System::Void set_HostContext(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_SET_HOSTCONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasUserData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HASUSERDATA_OFFSET))(this);
		}

		::System::Void FreeNamedDataSlot(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_FREENAMEDDATASLOT_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IllogicalCallContext* CreateCopy()
		{
			return ((::System::Runtime::Remoting::Messaging::IllogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_CREATECOPY_OFFSET))(this);
		}
	};
}
