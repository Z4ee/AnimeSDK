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

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_CLONE_OFFSET UNITYSDK_OFFSET(0x163B0440)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GETDATA_OFFSET UNITYSDK_OFFSET(0x163B1110)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x163AFF10)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_DATASTORE_OFFSET UNITYSDK_OFFSET(0x163AFEA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_HASINFO_OFFSET UNITYSDK_OFFSET(0x163AA4C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_HASUSERDATA_OFFSET UNITYSDK_OFFSET(0x163B0410)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_MERGE_OFFSET UNITYSDK_OFFSET(0x163B0DC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_SETDATA_OFFSET UNITYSDK_OFFSET(0x163AB850)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x163B1190)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x163AFAF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x163AFAE0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int LogicalCallContext_TypeDefinitionIndex = 1282;

	class LogicalCallContext : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_s_callContextType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(LogicalCallContext_TypeDefinitionIndex)->GetStaticField(0x6B80);
		}
		::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* _recvHeaders; // 0x10
		::System::Runtime::Remoting::Messaging::CallContextSecurityData* m_SecurityData; // 0x18
		::System::Object* m_HostContext; // 0x20
		::System::Runtime::Remoting::Messaging::CallContextRemotingData* m_RemotingData; // 0x28
		::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* _sendHeaders; // 0x30
		::System::Collections::Hashtable* m_Datastore; // 0x38
		::System::Boolean m_IsCorrelationMgr; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT__CTOR_1_OFFSET))(this, info, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT__CCTOR_OFFSET))();
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_CLONE_OFFSET))(this);
		}

		::System::Void Merge(::System::Runtime::Remoting::Messaging::LogicalCallContext* lc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::LogicalCallContext*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_MERGE_OFFSET))(this, lc);
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

		::System::Object* GetData(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GETDATA_OFFSET))(this, name);
		}

		::System::Void SetData(::System::String* name, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_SETDATA_OFFSET))(this, name, data);
		}
	};
}
