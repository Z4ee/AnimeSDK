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

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_ALLOCATEDATASLOT_OFFSET UNITYSDK_OFFSET(0x18780D10)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_ALLOCATENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x18780D90)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATEENVOYSINK_OFFSET UNITYSDK_OFFSET(0x18780850)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATENEWCONTEXT_OFFSET UNITYSDK_OFFSET(0x18775330)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATESERVEROBJECTSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x1877B400)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x18780A60)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1877ED60)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FREENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x18780E10)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FREEZE_OFFSET UNITYSDK_OFFSET(0x187805B0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETCLIENTCONTEXTSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x18773400)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETDATA_OFFSET UNITYSDK_OFFSET(0x18780F10)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETDYNAMICPROPERTYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1877F050)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETNAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x18780E90)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x18780220)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETSERVERCONTEXTSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x18774E50)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_CONTEXTID_OFFSET UNITYSDK_OFFSET(0x1877EE20)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_CONTEXTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1877EE30)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_DEFAULTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1877EDF0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x187801E0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASEXITSINKS_OFFSET UNITYSDK_OFFSET(0x18773330)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASGLOBALDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x187800A0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_ISDEFAULTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1877EE90)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_MYLOCALSTORE_OFFSET UNITYSDK_OFFSET(0x18780B80)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_NEEDSCONTEXTSINK_OFFSET UNITYSDK_OFFSET(0x1877EEA0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x18780170)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYGLOBALDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x1877F810)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_REGISTERCONTEXT_OFFSET UNITYSDK_OFFSET(0x1877ECC0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_REGISTERDYNAMICPROPERTY_OFFSET UNITYSDK_OFFSET(0x1877EFD0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_RELEASECONTEXT_OFFSET UNITYSDK_OFFSET(0x1877ECD0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SETDATA_OFFSET UNITYSDK_OFFSET(0x18780F70)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x18780420)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SWITCHTOCONTEXT_OFFSET UNITYSDK_OFFSET(0x187753D0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18780770)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_UNREGISTERDYNAMICPROPERTY_OFFSET UNITYSDK_OFFSET(0x1877F540)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18780FE0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1877ECE0)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int Context_TypeDefinitionIndex = 1237;

	class Context : public ::System::Object
	{
	public:
		static ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection** StaticGet_global_dynamic_properties()
		{
			return (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection**)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0xB230);
		}
		static ::System::LocalDataStoreMgr** StaticGet__localDataStoreMgr()
		{
			return (::System::LocalDataStoreMgr**)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0xB238);
		}
		static ::System::Runtime::Remoting::Messaging::IMessageSink** StaticGet_default_server_context_sink()
		{
			return (::System::Runtime::Remoting::Messaging::IMessageSink**)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0xB240);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_local_slots()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0xB248);
		}
		static ::System::Int32* StaticGet_global_count()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Context_TypeDefinitionIndex)->GetStaticField(0x4630);
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

		static ::System::Void RegisterContext(::System::Runtime::Remoting::Contexts::Context* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_REGISTERCONTEXT_OFFSET))(a1);
		}

		static ::System::Void ReleaseContext(::System::Runtime::Remoting::Contexts::Context* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_RELEASECONTEXT_OFFSET))(a1);
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

		static ::System::Boolean RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty* a1, ::System::ContextBoundObject* a2, ::System::Runtime::Remoting::Contexts::Context* a3)
		{
			return ((::System::Boolean(*)(::System::Runtime::Remoting::Contexts::IDynamicProperty*, ::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_REGISTERDYNAMICPROPERTY_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnregisterDynamicProperty(::System::String* a1, ::System::ContextBoundObject* a2, ::System::Runtime::Remoting::Contexts::Context* a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_UNREGISTERDYNAMICPROPERTY_OFFSET))(a1, a2, a3);
		}

		static ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* GetDynamicPropertyCollection(::System::ContextBoundObject* a1, ::System::Runtime::Remoting::Contexts::Context* a2)
		{
			return ((::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*(*)(::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETDYNAMICPROPERTYCOLLECTION_OFFSET))(a1, a2);
		}

		static ::System::Void NotifyGlobalDynamicSinks(::System::Boolean a1, ::System::Runtime::Remoting::Messaging::IMessage* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYGLOBALDYNAMICSINKS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean get_HasGlobalDynamicSinks()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASGLOBALDYNAMICSINKS_OFFSET))();
		}

		::System::Void NotifyDynamicSinks(::System::Boolean a1, ::System::Runtime::Remoting::Messaging::IMessage* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYDYNAMICSINKS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_HasDynamicSinks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASDYNAMICSINKS_OFFSET))(this);
		}

		::System::Boolean get_HasExitSinks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASEXITSINKS_OFFSET))(this);
		}

		::System::Runtime::Remoting::Contexts::IContextProperty* GetProperty(::System::String* a1)
		{
			return ((::System::Runtime::Remoting::Contexts::IContextProperty*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETPROPERTY_OFFSET))(this, a1);
		}

		::System::Void SetProperty(::System::Runtime::Remoting::Contexts::IContextProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Contexts::IContextProperty*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SETPROPERTY_OFFSET))(this, a1);
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

		::System::Runtime::Remoting::Messaging::IMessageSink* CreateServerObjectSinkChain(::System::MarshalByRefObject* a1, ::System::Boolean a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID, ::System::MarshalByRefObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATESERVEROBJECTSINKCHAIN_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* CreateEnvoySink(::System::MarshalByRefObject* a1)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID, ::System::MarshalByRefObject*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATEENVOYSINK_OFFSET))(this, a1);
		}

		static ::System::Runtime::Remoting::Contexts::Context* SwitchToContext(::System::Runtime::Remoting::Contexts::Context* a1)
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)(::System::Runtime::Remoting::Contexts::Context*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SWITCHTOCONTEXT_OFFSET))(a1);
		}

		static ::System::Runtime::Remoting::Contexts::Context* CreateNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* a1)
		{
			return ((::System::Runtime::Remoting::Contexts::Context*(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATENEWCONTEXT_OFFSET))(a1);
		}

		::System::Void DoCallBack(::System::Runtime::Remoting::Contexts::CrossContextDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Contexts::CrossContextDelegate*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_DOCALLBACK_OFFSET))(this, a1);
		}

		::System::LocalDataStore* get_MyLocalStore()
		{
			return ((::System::LocalDataStore*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_MYLOCALSTORE_OFFSET))(this);
		}

		static ::System::LocalDataStoreSlot* AllocateDataSlot()
		{
			return ((::System::LocalDataStoreSlot*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_ALLOCATEDATASLOT_OFFSET))();
		}

		static ::System::LocalDataStoreSlot* AllocateNamedDataSlot(::System::String* a1)
		{
			return ((::System::LocalDataStoreSlot*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_ALLOCATENAMEDDATASLOT_OFFSET))(a1);
		}

		static ::System::Void FreeNamedDataSlot(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FREENAMEDDATASLOT_OFFSET))(a1);
		}

		static ::System::LocalDataStoreSlot* GetNamedDataSlot(::System::String* a1)
		{
			return ((::System::LocalDataStoreSlot*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETNAMEDDATASLOT_OFFSET))(a1);
		}

		static ::System::Object* GetData(::System::LocalDataStoreSlot* a1)
		{
			return ((::System::Object*(*)(::System::LocalDataStoreSlot*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETDATA_OFFSET))(a1);
		}

		static ::System::Void SetData(::System::LocalDataStoreSlot* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::LocalDataStoreSlot*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SETDATA_OFFSET))(a1, a2);
		}
	};
}
