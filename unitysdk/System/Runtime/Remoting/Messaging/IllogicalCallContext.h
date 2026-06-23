#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1C1AD220)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_FREENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x1C1AD070)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_DATASTORE_OFFSET UNITYSDK_OFFSET(0x1C1AD140)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HASUSERDATA_OFFSET UNITYSDK_OFFSET(0x1C1AD1F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AD5C0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int IllogicalCallContext_TypeDefinitionIndex = 1324;

	class IllogicalCallContext : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* m_Datastore; // 0x10
		::System::Object* m_HostContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Collections::Hashtable* get_Datastore()
		{
			return ((::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_DATASTORE_OFFSET))(this);
		}

		::System::Boolean get_HasUserData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HASUSERDATA_OFFSET))(this);
		}

		::System::Void FreeNamedDataSlot(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_FREENAMEDDATASLOT_OFFSET))(this, name);
		}

		::System::Runtime::Remoting::Messaging::IllogicalCallContext* CreateCopy()
		{
			return ((::System::Runtime::Remoting::Messaging::IllogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_CREATECOPY_OFFSET))(this);
		}
	};
}
