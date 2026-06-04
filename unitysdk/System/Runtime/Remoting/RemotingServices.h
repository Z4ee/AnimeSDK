#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Remoting/WellKnownObjectMode.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class MarshalByRefObject; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Runtime::Remoting { class ActivatedClientTypeEntry; }
namespace System::Runtime::Remoting { class ClientActivatedIdentity; }
namespace System::Runtime::Remoting { class ClientIdentity; }
namespace System::Runtime::Remoting { class Identity; }
namespace System::Runtime::Remoting { class ObjRef; }
namespace System::Runtime::Remoting { class ServerIdentity; }
namespace System::Runtime::Remoting { class WellKnownClientTypeEntry; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }
namespace System::Runtime::Remoting::Messaging { class IMethodCallMessage; }
namespace System::Runtime::Remoting::Messaging { class IMethodMessage; }
namespace System::Runtime::Remoting::Messaging { class IMethodReturnMessage; }
namespace System::Runtime::Remoting::Proxies { class RealProxy; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryFormatter; }

#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CONNECT_1_OFFSET UNITYSDK_OFFSET(0x187A0100)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CONNECT_OFFSET UNITYSDK_OFFSET(0x1879FF30)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTACTIVATEDSERVERIDENTITY_OFFSET UNITYSDK_OFFSET(0x187A1760)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXYFORCONTEXTBOUND_OFFSET UNITYSDK_OFFSET(0x187A1D70)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_1_OFFSET UNITYSDK_OFFSET(0x187A1B00)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_2_OFFSET UNITYSDK_OFFSET(0x187A1D00)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_OFFSET UNITYSDK_OFFSET(0x187A19F0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECONTEXTBOUNDOBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x187A25E0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATEWELLKNOWNSERVERIDENTITY_OFFSET UNITYSDK_OFFSET(0x1879DF70)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_DESERIALIZECALLDATA_OFFSET UNITYSDK_OFFSET(0x187A2930)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_DISPOSEIDENTITY_OFFSET UNITYSDK_OFFSET(0x1879C090)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_FINDINTERFACEMETHOD_OFFSET UNITYSDK_OFFSET(0x187A1830)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETCLIENTCHANNELSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x187A1C10)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETIDENTITYFORURI_OFFSET UNITYSDK_OFFSET(0x1879B330)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMESSAGETARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x18783C70)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMETHODBASEFROMMETHODMESSAGE_OFFSET UNITYSDK_OFFSET(0x18791540)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMETHODBASEFROMNAME_OFFSET UNITYSDK_OFFSET(0x18791210)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETNORMALIZEDURI_OFFSET UNITYSDK_OFFSET(0x187A1F10)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x18794530)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETORCREATECLIENTIDENTITY_OFFSET UNITYSDK_OFFSET(0x187A20A0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETPROXYFORREMOTEOBJECT_OFFSET UNITYSDK_OFFSET(0x18799710)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETREALPROXY_OFFSET UNITYSDK_OFFSET(0x187944E0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETREMOTEOBJECT_OFFSET UNITYSDK_OFFSET(0x187A0080)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETSERVERTYPEFORURI_OFFSET UNITYSDK_OFFSET(0x18790F70)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETVIRTUALMETHOD_OFFSET UNITYSDK_OFFSET(0x18791530)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_INTERNALEXECUTEMESSAGE_OFFSET UNITYSDK_OFFSET(0x187966C0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_INTERNALEXECUTE_OFFSET UNITYSDK_OFFSET(0x1879FF20)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_ISONEWAY_OFFSET UNITYSDK_OFFSET(0x18794120)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_ISTRANSPARENTPROXY_OFFSET UNITYSDK_OFFSET(0x18786B20)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_MARSHAL_1_OFFSET UNITYSDK_OFFSET(0x187A0900)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_MARSHAL_OFFSET UNITYSDK_OFFSET(0x18786B70)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_NEWURI_OFFSET UNITYSDK_OFFSET(0x187A0950)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REGISTERINTERNALCHANNELS_OFFSET UNITYSDK_OFFSET(0x1879FEC0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REGISTERSERVERIDENTITY_OFFSET UNITYSDK_OFFSET(0x187A0DD0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REMOVEAPPNAMEFROMURI_OFFSET UNITYSDK_OFFSET(0x187A1F60)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SERIALIZECALLDATA_OFFSET UNITYSDK_OFFSET(0x187A2720)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SERIALIZEEXCEPTIONDATA_OFFSET UNITYSDK_OFFSET(0x187A2BD0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SETMESSAGETARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x187A2CC0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UNMARSHAL_1_OFFSET UNITYSDK_OFFSET(0x187A01F0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UNMARSHAL_OFFSET UNITYSDK_OFFSET(0x187874A0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UPDATEOUTARGOBJECT_OFFSET UNITYSDK_OFFSET(0x1879B5D0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1879FB20)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int RemotingServices_TypeDefinitionIndex = 1209;

	class RemotingServices : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_FieldSetterMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0xC2C0);
		}
		static ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter** StaticGet__deserializationFormatter()
		{
			return (::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0xC2C8);
		}
		static ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter** StaticGet__serializationFormatter()
		{
			return (::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0xC2D0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_FieldGetterMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0xC2D8);
		}
		static ::System::Object** StaticGet_app_id_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0xC2E0);
		}
		static ::System::Collections::Hashtable** StaticGet_uri_hash()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0xC2E8);
		}
		static ::System::String** StaticGet_app_id()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0xC2F0);
		}
		static ::System::Int32* StaticGet_next_id()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0x4750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES__CCTOR_OFFSET))();
		}

		static ::System::Object* InternalExecute(::System::Reflection::MethodBase* a1, ::System::Object* a2, ::Il2CppArray<::System::Object*>* a3, ::Il2CppArray<::System::Object*>*& a4)
		{
			return ((::System::Object*(*)(::System::Reflection::MethodBase*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_INTERNALEXECUTE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Reflection::MethodBase* GetVirtualMethod(::System::Type* a1, ::System::Reflection::MethodBase* a2)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETVIRTUALMETHOD_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsTransparentProxy(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_ISTRANSPARENTPROXY_OFFSET))(a1);
		}

		static ::System::Runtime::Remoting::Messaging::IMethodReturnMessage* InternalExecuteMessage(::System::MarshalByRefObject* a1, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* a2)
		{
			return ((::System::Runtime::Remoting::Messaging::IMethodReturnMessage*(*)(::System::MarshalByRefObject*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_INTERNALEXECUTEMESSAGE_OFFSET))(a1, a2);
		}

		static ::System::Object* Connect(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CONNECT_OFFSET))(a1, a2);
		}

		static ::System::Object* Connect_1(::System::Type* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CONNECT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Type* GetServerTypeForUri(::System::String* a1)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETSERVERTYPEFORURI_OFFSET))(a1);
		}

		static ::System::Object* Unmarshal(::System::Runtime::Remoting::ObjRef* a1)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::ObjRef*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UNMARSHAL_OFFSET))(a1);
		}

		static ::System::Object* Unmarshal_1(::System::Runtime::Remoting::ObjRef* a1, ::System::Boolean a2)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::ObjRef*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UNMARSHAL_1_OFFSET))(a1, a2);
		}

		static ::System::Runtime::Remoting::ObjRef* Marshal(::System::MarshalByRefObject* a1)
		{
			return ((::System::Runtime::Remoting::ObjRef*(*)(::System::MarshalByRefObject*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_MARSHAL_OFFSET))(a1);
		}

		static ::System::Runtime::Remoting::ObjRef* Marshal_1(::System::MarshalByRefObject* a1, ::System::String* a2, ::System::Type* a3)
		{
			return ((::System::Runtime::Remoting::ObjRef*(*)(::System::MarshalByRefObject*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_MARSHAL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NewUri()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_NEWURI_OFFSET))();
		}

		static ::System::Runtime::Remoting::Proxies::RealProxy* GetRealProxy(::System::Object* a1)
		{
			return ((::System::Runtime::Remoting::Proxies::RealProxy*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETREALPROXY_OFFSET))(a1);
		}

		static ::System::Reflection::MethodBase* GetMethodBaseFromMethodMessage(::System::Runtime::Remoting::Messaging::IMethodMessage* a1)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::Runtime::Remoting::Messaging::IMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMETHODBASEFROMMETHODMESSAGE_OFFSET))(a1);
		}

		static ::System::Reflection::MethodBase* GetMethodBaseFromName(::System::Type* a1, ::System::String* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMETHODBASEFROMNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Reflection::MethodBase* FindInterfaceMethod(::System::Type* a1, ::System::String* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_FINDINTERFACEMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetObjectData(::System::Object* a1, ::System::Runtime::Serialization::SerializationInfo* a2, ::System::Runtime::Serialization::StreamingContext a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETOBJECTDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsOneWay(::System::Reflection::MethodBase* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_ISONEWAY_OFFSET))(a1);
		}

		static ::System::Object* CreateClientProxy(::System::Runtime::Remoting::ActivatedClientTypeEntry* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::ActivatedClientTypeEntry*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_OFFSET))(a1, a2);
		}

		static ::System::Object* CreateClientProxy_1(::System::Type* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* CreateClientProxy_2(::System::Runtime::Remoting::WellKnownClientTypeEntry* a1)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::WellKnownClientTypeEntry*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_2_OFFSET))(a1);
		}

		static ::System::Object* CreateClientProxyForContextBound(::System::Type* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXYFORCONTEXTBOUND_OFFSET))(a1, a2);
		}

		static ::System::Runtime::Remoting::Identity* GetIdentityForUri(::System::String* a1)
		{
			return ((::System::Runtime::Remoting::Identity*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETIDENTITYFORURI_OFFSET))(a1);
		}

		static ::System::String* RemoveAppNameFromUri(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REMOVEAPPNAMEFROMURI_OFFSET))(a1);
		}

		static ::System::Runtime::Remoting::ClientIdentity* GetOrCreateClientIdentity(::System::Runtime::Remoting::ObjRef* a1, ::System::Type* a2, ::System::Object*& a3)
		{
			return ((::System::Runtime::Remoting::ClientIdentity*(*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETORCREATECLIENTIDENTITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Runtime::Remoting::Messaging::IMessageSink* GetClientChannelSinkChain(::System::String* a1, ::System::Object* a2, ::System::String*& a3)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::String*, ::System::Object*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETCLIENTCHANNELSINKCHAIN_OFFSET))(a1, a2, a3);
		}

		static ::System::Runtime::Remoting::ClientActivatedIdentity* CreateContextBoundObjectIdentity(::System::Type* a1)
		{
			return ((::System::Runtime::Remoting::ClientActivatedIdentity*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECONTEXTBOUNDOBJECTIDENTITY_OFFSET))(a1);
		}

		static ::System::Runtime::Remoting::ClientActivatedIdentity* CreateClientActivatedServerIdentity(::System::MarshalByRefObject* a1, ::System::Type* a2, ::System::String* a3)
		{
			return ((::System::Runtime::Remoting::ClientActivatedIdentity*(*)(::System::MarshalByRefObject*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTACTIVATEDSERVERIDENTITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Runtime::Remoting::ServerIdentity* CreateWellKnownServerIdentity(::System::Type* a1, ::System::String* a2, ::System::Runtime::Remoting::WellKnownObjectMode a3)
		{
			return ((::System::Runtime::Remoting::ServerIdentity*(*)(::System::Type*, ::System::String*, ::System::Runtime::Remoting::WellKnownObjectMode))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATEWELLKNOWNSERVERIDENTITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RegisterServerIdentity(::System::Runtime::Remoting::ServerIdentity* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ServerIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REGISTERSERVERIDENTITY_OFFSET))(a1);
		}

		static ::System::Object* GetProxyForRemoteObject(::System::Runtime::Remoting::ObjRef* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETPROXYFORREMOTEOBJECT_OFFSET))(a1, a2);
		}

		static ::System::Object* GetRemoteObject(::System::Runtime::Remoting::ObjRef* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETREMOTEOBJECT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* SerializeCallData(::System::Object* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SERIALIZECALLDATA_OFFSET))(a1);
		}

		static ::System::Object* DeserializeCallData(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Object*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_DESERIALIZECALLDATA_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* SerializeExceptionData(::System::Exception* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SERIALIZEEXCEPTIONDATA_OFFSET))(a1);
		}

		static ::System::Void RegisterInternalChannels()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REGISTERINTERNALCHANNELS_OFFSET))();
		}

		static ::System::Void DisposeIdentity(::System::Runtime::Remoting::Identity* a1)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_DISPOSEIDENTITY_OFFSET))(a1);
		}

		static ::System::Runtime::Remoting::Identity* GetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* a1)
		{
			return ((::System::Runtime::Remoting::Identity*(*)(::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMESSAGETARGETIDENTITY_OFFSET))(a1);
		}

		static ::System::Void SetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* a1, ::System::Runtime::Remoting::Identity* a2)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SETMESSAGETARGETIDENTITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean UpdateOutArgObject(::System::Reflection::ParameterInfo* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::System::Reflection::ParameterInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UPDATEOUTARGOBJECT_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetNormalizedUri(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETNORMALIZEDURI_OFFSET))(a1);
		}
	};
}
