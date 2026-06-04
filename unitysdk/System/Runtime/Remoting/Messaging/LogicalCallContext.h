#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Runtime::Remoting::Messaging { class CallContextRemotingData; }
namespace System::Runtime::Remoting::Messaging { class CallContextSecurityData; }
namespace System::Runtime::Remoting::Messaging { class Header; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_CLONE_OFFSET UNITYSDK_OFFSET(0x1878D450)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GETDATA_OFFSET UNITYSDK_OFFSET(0x1878E150)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1878CF30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_DATASTORE_OFFSET UNITYSDK_OFFSET(0x1878CEC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_HASINFO_OFFSET UNITYSDK_OFFSET(0x187879D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_HASUSERDATA_OFFSET UNITYSDK_OFFSET(0x1878D420)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_MERGE_OFFSET UNITYSDK_OFFSET(0x1878DE00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_SETDATA_OFFSET UNITYSDK_OFFSET(0x18788D70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1878E1D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1878CB00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1878CAF0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int LogicalCallContext_TypeDefinitionIndex = 1283;

	class LogicalCallContext : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_s_callContextType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(LogicalCallContext_TypeDefinitionIndex)->GetStaticField(0xBE30);
		}
		::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* _recvHeaders; // 0x10
		::System::Collections::Hashtable* m_Datastore; // 0x18
		::System::Runtime::Remoting::Messaging::CallContextRemotingData* m_RemotingData; // 0x20
		::System::Object* m_HostContext; // 0x28
		::System::Runtime::Remoting::Messaging::CallContextSecurityData* m_SecurityData; // 0x30
		::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* _sendHeaders; // 0x38
		::System::Boolean m_IsCorrelationMgr; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT__CCTOR_OFFSET))();
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_CLONE_OFFSET))(this);
		}

		::System::Void Merge(::System::Runtime::Remoting::Messaging::LogicalCallContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::LogicalCallContext*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_MERGE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_HASINFO_OFFSET))(this);
		}

		::System::Boolean get_HasUserData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_HASUSERDATA_OFFSET))(this);
		}

		::System::Collections::Hashtable* get_Datastore()
		{
			return ((::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_DATASTORE_OFFSET))(this);
		}

		::System::Object* GetData(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GETDATA_OFFSET))(this, a1);
		}

		::System::Void SetData(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_SETDATA_OFFSET))(this, a1, a2);
		}
	};
}
