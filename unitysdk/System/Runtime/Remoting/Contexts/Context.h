#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class LocalDataStoreHolder; }
namespace System { class LocalDataStoreMgr; }
namespace System { class MarshalByRefObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::Remoting::Activation { class IConstructionCallMessage; }
namespace System::Runtime::Remoting::Contexts { class ContextCallbackObject; }
namespace System::Runtime::Remoting::Contexts { class DynamicPropertyCollection; }
namespace System::Runtime::Remoting::Contexts { class IContextProperty; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATEENVOYSINK_OFFSET UNITYSDK_OFFSET(0x1C8C63A0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATENEWCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C8C6560)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATESERVEROBJECTSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x1C8C61B0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C8C53B0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FREEZE_OFFSET UNITYSDK_OFFSET(0x1C8C5E80)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETCLIENTCONTEXTSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x1C8C58E0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C8C5AA0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETSERVERCONTEXTSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x1C8C5F90)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_DEFAULTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C8C5440)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x1C8C5700)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASEXITSINKS_OFFSET UNITYSDK_OFFSET(0x1C8C5740)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASGLOBALDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x1C8C55C0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x1C8C5690)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYGLOBALDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x1C8C5470)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_REGISTERCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C8C5310)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_RELEASECONTEXT_OFFSET UNITYSDK_OFFSET(0x1C8C5320)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C8C5D30)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SWITCHTOCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C8C6550)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8C5F30)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8C6600)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C5330)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int Context_TypeDefinitionIndex = 1281;

	class Context : public ::System::Object
	{
	public:
		static ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection** StaticGet_global_dynamic_properties()
		{
			return (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection**)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0xDF0);
		}
		static ::System::LocalDataStoreMgr** StaticGet__localDataStoreMgr()
		{
			return (::System::LocalDataStoreMgr**)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0xDF8);
		}
		static ::System::Runtime::Remoting::Messaging::IMessageSink** StaticGet_default_server_context_sink()
		{
			return (::System::Runtime::Remoting::Messaging::IMessageSink**)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0xE00);
		}
		static ::System::Int32* StaticGet_global_count()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0x3D0);
		}
		::System::Int32 domain_id; // 0x10
		::System::Int32 context_id; // 0x14
		::System::UIntPtr static_data; // 0x18
		::System::UIntPtr data; // 0x20
		::System::Runtime::Remoting::Messaging::IMessageSink* server_context_sink_chain; // 0x28
		::System::Runtime::Remoting::Messaging::IMessageSink* client_context_sink_chain; // 0x30
		::System::Collections::Generic::List_1<::System::Runtime::Remoting::Contexts::IContextProperty*>* context_properties; // 0x38
		::System::LocalDataStoreHolder* _localDataStore; // 0x40
		::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* context_dynamic_properties; // 0x48
		::System::Runtime::Remoting::Contexts::ContextCallbackObject* callback_object; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterContext(::System::Runtime::Remoting::Contexts::Context* ctx)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_REGISTERCONTEXT_OFFSET))(ctx);
		}

		static ::System::Void ReleaseContext(::System::Runtime::Remoting::Contexts::Context* ctx)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_RELEASECONTEXT_OFFSET))(ctx);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FINALIZE_OFFSET))(this);
		}

		static ::System::Runtime::Remoting::Contexts::Context* get_DefaultContext()
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_DEFAULTCONTEXT_OFFSET))();
		}

		static ::System::Void NotifyGlobalDynamicSinks(::System::Boolean start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, ::System::Boolean client_site, ::System::Boolean async)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYGLOBALDYNAMICSINKS_OFFSET))(start, req_msg, client_site, async);
		}

		static ::System::Boolean get_HasGlobalDynamicSinks()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASGLOBALDYNAMICSINKS_OFFSET))();
		}

		::System::Void NotifyDynamicSinks(::System::Boolean start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, ::System::Boolean client_site, ::System::Boolean async)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYDYNAMICSINKS_OFFSET))(this, start, req_msg, client_site, async);
		}

		::System::Boolean get_HasDynamicSinks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASDYNAMICSINKS_OFFSET))(this);
		}

		::System::Boolean get_HasExitSinks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASEXITSINKS_OFFSET))(this);
		}

		::System::Runtime::Remoting::Contexts::IContextProperty* GetProperty(::System::String* name)
		{
			return ((::System::Runtime::Remoting::Contexts::IContextProperty*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETPROPERTY_OFFSET))(this, name);
		}

		::System::Void SetProperty(::System::Runtime::Remoting::Contexts::IContextProperty* prop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Contexts::IContextProperty*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SETPROPERTY_OFFSET))(this, prop);
		}

		::System::Void Freeze()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FREEZE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_TOSTRING_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* GetServerContextSinkChain()
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETSERVERCONTEXTSINKCHAIN_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* GetClientContextSinkChain()
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETCLIENTCONTEXTSINKCHAIN_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* CreateServerObjectSinkChain(::System::MarshalByRefObject* obj, ::System::Boolean forceInternalExecute)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID, ::System::MarshalByRefObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATESERVEROBJECTSINKCHAIN_OFFSET))(this, obj, forceInternalExecute);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* CreateEnvoySink(::System::MarshalByRefObject* serverObject)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID, ::System::MarshalByRefObject*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATEENVOYSINK_OFFSET))(this, serverObject);
		}

		static ::System::Runtime::Remoting::Contexts::Context* SwitchToContext(::System::Runtime::Remoting::Contexts::Context* newContext)
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)(::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SWITCHTOCONTEXT_OFFSET))(newContext);
		}

		static ::System::Runtime::Remoting::Contexts::Context* CreateNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg)
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATENEWCONTEXT_OFFSET))(msg);
		}
	};
}
