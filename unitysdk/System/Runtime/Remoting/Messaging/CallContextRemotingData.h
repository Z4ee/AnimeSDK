#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x18788E90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA_GET_HASINFO_OFFSET UNITYSDK_OFFSET(0x18788E80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA_GET_LOGICALCALLID_OFFSET UNITYSDK_OFFSET(0x18788E60)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA_SET_LOGICALCALLID_OFFSET UNITYSDK_OFFSET(0x18788E70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18788EF0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CallContextRemotingData_TypeDefinitionIndex = 1286;

	class CallContextRemotingData : public ::System::Object
	{
	public:
		::System::String* _logicalCallID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_LogicalCallID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA_GET_LOGICALCALLID_OFFSET))(this);
		}

		::System::Void set_LogicalCallID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA_SET_LOGICALCALLID_OFFSET))(this, a1);
		}

		::System::Boolean get_HasInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA_GET_HASINFO_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA_CLONE_OFFSET))(this);
		}
	};
}
