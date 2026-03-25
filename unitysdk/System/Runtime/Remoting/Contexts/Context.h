#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class ContextBoundObject; }
namespace System { class LocalDataStore; }
namespace System { class LocalDataStoreHolder; }
namespace System { class LocalDataStoreMgr; }
namespace System { class LocalDataStoreSlot; }
namespace System { class MarshalByRefObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::Remoting::Activation { class IConstructionCallMessage; }
namespace System::Runtime::Remoting::Contexts { class ContextCallbackObject; }
namespace System::Runtime::Remoting::Contexts { class CrossContextDelegate; }
namespace System::Runtime::Remoting::Contexts { class DynamicPropertyCollection; }
namespace System::Runtime::Remoting::Contexts { class IContextProperty; }
namespace System::Runtime::Remoting::Contexts { class IDynamicProperty; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_ALLOCATEDATASLOT_OFFSET UNITYSDK_OFFSET(0x163A3240)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_ALLOCATENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x163A3290)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATEENVOYSINK_OFFSET UNITYSDK_OFFSET(0x163A2DD0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATENEWCONTEXT_OFFSET UNITYSDK_OFFSET(0x16397A60)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATESERVEROBJECTSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x1639DB80)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x163A2FD0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x163A1440)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FREENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x163A32F0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FREEZE_OFFSET UNITYSDK_OFFSET(0x163A2B20)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETCLIENTCONTEXTSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x16395D50)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETDATA_OFFSET UNITYSDK_OFFSET(0x163A33B0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETDYNAMICPROPERTYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x163A1720)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETNAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x163A3350)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x163A27F0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETSERVERCONTEXTSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x16397620)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_CONTEXTID_OFFSET UNITYSDK_OFFSET(0x163A14E0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_CONTEXTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x163A14F0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_DEFAULTCONTEXT_OFFSET UNITYSDK_OFFSET(0x163A14B0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x163A27B0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASEXITSINKS_OFFSET UNITYSDK_OFFSET(0x16395C20)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASGLOBALDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x163A26A0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_ISDEFAULTCONTEXT_OFFSET UNITYSDK_OFFSET(0x163A15B0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_MYLOCALSTORE_OFFSET UNITYSDK_OFFSET(0x163A30F0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_NEEDSCONTEXTSINK_OFFSET UNITYSDK_OFFSET(0x163A15C0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x163A2740)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYGLOBALDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x163A1E90)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_REGISTERCONTEXT_OFFSET UNITYSDK_OFFSET(0x163A13D0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_REGISTERDYNAMICPROPERTY_OFFSET UNITYSDK_OFFSET(0x163A16D0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_RELEASECONTEXT_OFFSET UNITYSDK_OFFSET(0x163A13E0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SETDATA_OFFSET UNITYSDK_OFFSET(0x163A3410)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x163A29F0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SWITCHTOCONTEXT_OFFSET UNITYSDK_OFFSET(0x16397AE0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x163A2CE0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_UNREGISTERDYNAMICPROPERTY_OFFSET UNITYSDK_OFFSET(0x163A1BF0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x163A3480)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x163A13F0)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int Context_TypeDefinitionIndex = 1236;

	class Context : public ::System::Object
	{
	public:
		static ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection** StaticGet_global_dynamic_properties()
		{
			return (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection**)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0x67F0);
		}
		static ::System::LocalDataStoreMgr** StaticGet__localDataStoreMgr()
		{
			return (::System::LocalDataStoreMgr**)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0x67F8);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_local_slots()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0x6800);
		}
		static ::System::Runtime::Remoting::Messaging::IMessageSink** StaticGet_default_server_context_sink()
		{
			return (::System::Runtime::Remoting::Messaging::IMessageSink**)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0x6808);
		}
		static ::System::Int32* StaticGet_global_count()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0x3C70);
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

		::System::Int32 get_ContextID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_CONTEXTID_OFFSET))(this);
		}

		::Il2CppArray<::System::Runtime::Remoting::Contexts::IContextProperty*>* get_ContextProperties()
		{
			return ((::Il2CppArray<::System::Runtime::Remoting::Contexts::IContextProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_CONTEXTPROPERTIES_OFFSET))(this);
		}

		::System::Boolean get_IsDefaultContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_ISDEFAULTCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_NeedsContextSink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_NEEDSCONTEXTSINK_OFFSET))(this);
		}

		static ::System::Boolean RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty* prop, ::System::ContextBoundObject* obj, ::System::Runtime::Remoting::Contexts::Context* ctx)
		{
			return ((::System::Boolean(*)(::System::Runtime::Remoting::Contexts::IDynamicProperty*, ::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_REGISTERDYNAMICPROPERTY_OFFSET))(prop, obj, ctx);
		}

		static ::System::Boolean UnregisterDynamicProperty(::System::String* name, ::System::ContextBoundObject* obj, ::System::Runtime::Remoting::Contexts::Context* ctx)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_UNREGISTERDYNAMICPROPERTY_OFFSET))(name, obj, ctx);
		}

		static ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* GetDynamicPropertyCollection(::System::ContextBoundObject* obj, ::System::Runtime::Remoting::Contexts::Context* ctx)
		{
			return ((::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*(*)(::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETDYNAMICPROPERTYCOLLECTION_OFFSET))(obj, ctx);
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

		::System::Void DoCallBack(::System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Contexts::CrossContextDelegate*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_DOCALLBACK_OFFSET))(this, deleg);
		}

		::System::LocalDataStore* get_MyLocalStore()
		{
			return ((::System::LocalDataStore*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_MYLOCALSTORE_OFFSET))(this);
		}

		static ::System::LocalDataStoreSlot* AllocateDataSlot()
		{
			return ((::System::LocalDataStoreSlot*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_ALLOCATEDATASLOT_OFFSET))();
		}

		static ::System::LocalDataStoreSlot* AllocateNamedDataSlot(::System::String* name)
		{
			return ((::System::LocalDataStoreSlot*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_ALLOCATENAMEDDATASLOT_OFFSET))(name);
		}

		static ::System::Void FreeNamedDataSlot(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FREENAMEDDATASLOT_OFFSET))(name);
		}

		static ::System::LocalDataStoreSlot* GetNamedDataSlot(::System::String* name)
		{
			return ((::System::LocalDataStoreSlot*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETNAMEDDATASLOT_OFFSET))(name);
		}

		static ::System::Object* GetData(::System::LocalDataStoreSlot* slot)
		{
			return ((::System::Object*(*)(::System::LocalDataStoreSlot*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETDATA_OFFSET))(slot);
		}

		static ::System::Void SetData(::System::LocalDataStoreSlot* slot, ::System::Object* data)
		{
			return ((::System::Void(*)(::System::LocalDataStoreSlot*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SETDATA_OFFSET))(slot, data);
		}
	};
}
