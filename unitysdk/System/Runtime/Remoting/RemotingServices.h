#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Remoting/WellKnownObjectMode.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class MarshalByRefObject; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
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

#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CONNECT_1_OFFSET UNITYSDK_OFFSET(0x1C6DE3B0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CONNECT_OFFSET UNITYSDK_OFFSET(0x1C6DE1E0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTACTIVATEDSERVERIDENTITY_OFFSET UNITYSDK_OFFSET(0x1C6DF960)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXYFORCONTEXTBOUND_OFFSET UNITYSDK_OFFSET(0x1C6E0790)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_1_OFFSET UNITYSDK_OFFSET(0x1C6E0520)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_2_OFFSET UNITYSDK_OFFSET(0x1C6E0720)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_OFFSET UNITYSDK_OFFSET(0x1C6E03D0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECONTEXTBOUNDOBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x1C6E1200)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATEWELLKNOWNSERVERIDENTITY_OFFSET UNITYSDK_OFFSET(0x1C6DD790)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_DISPOSEIDENTITY_OFFSET UNITYSDK_OFFSET(0x1C6E0FA0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_FINDINTERFACEMETHOD_OFFSET UNITYSDK_OFFSET(0x1C6E00D0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETCLIENTCHANNELSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x1C6E0630)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETIDENTITYFORURI_OFFSET UNITYSDK_OFFSET(0x1C6DE540)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMESSAGETARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x1C6E12D0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMETHODBASEFROMMETHODMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C6DFA30)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMETHODBASEFROMNAME_OFFSET UNITYSDK_OFFSET(0x1C6DFD60)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETNORMALIZEDURI_OFFSET UNITYSDK_OFFSET(0x1C6E0950)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C6E02A0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETORCREATECLIENTIDENTITY_OFFSET UNITYSDK_OFFSET(0x1C6E0A90)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETPROXYFORREMOTEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C6DEBC0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETREALPROXY_OFFSET UNITYSDK_OFFSET(0x1C6DEE00)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETREMOTEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C6DE330)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETSERVERTYPEFORURI_OFFSET UNITYSDK_OFFSET(0x1C6DE4A0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETVIRTUALMETHOD_OFFSET UNITYSDK_OFFSET(0x1C6DD8B0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_INTERNALEXECUTEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C6DD910)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_INTERNALEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C6DD8A0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_ISONEWAY_OFFSET UNITYSDK_OFFSET(0x1C6DD2D0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_ISTRANSPARENTPROXY_OFFSET UNITYSDK_OFFSET(0x1C6DD8C0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_MARSHAL_1_OFFSET UNITYSDK_OFFSET(0x1C6DEDB0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_MARSHAL_OFFSET UNITYSDK_OFFSET(0x1C6DED20)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_NEWURI_OFFSET UNITYSDK_OFFSET(0x1C6DEE50)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REGISTERINTERNALCHANNELS_OFFSET UNITYSDK_OFFSET(0x1C6DD730)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REGISTERSERVERIDENTITY_OFFSET UNITYSDK_OFFSET(0x1C6DF3A0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REMOVEAPPNAMEFROMURI_OFFSET UNITYSDK_OFFSET(0x1C6E09C0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SETMESSAGETARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x1C6E16C0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UNMARSHAL_1_OFFSET UNITYSDK_OFFSET(0x1C6DE860)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UNMARSHAL_OFFSET UNITYSDK_OFFSET(0x1C6DE800)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6DD380)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int RemotingServices_TypeDefinitionIndex = 1254;

	class RemotingServices : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_app_id_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0x1520);
		}
		static ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter** StaticGet__deserializationFormatter()
		{
			return (::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0x1528);
		}
		static ::System::String** StaticGet_app_id()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0x1530);
		}
		static ::System::Reflection::MethodInfo** StaticGet_FieldSetterMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0x1538);
		}
		static ::System::Collections::Hashtable** StaticGet_uri_hash()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0x1540);
		}
		static ::System::Reflection::MethodInfo** StaticGet_FieldGetterMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0x1548);
		}
		static ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter** StaticGet__serializationFormatter()
		{
			return (::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter**)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0x1550);
		}
		static ::System::Int32* StaticGet_next_id()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RemotingServices_TypeDefinitionIndex)->GetStaticField(0xDA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES__CCTOR_OFFSET))();
		}

		static ::System::Object* InternalExecute(::System::Reflection::MethodBase* method, ::System::Object* obj, ::Il2CppArray<::System::Object*>* parameters, ::Il2CppArray<::System::Object*>*& out_args)
		{
			return ((::System::Object*(*)(::System::Reflection::MethodBase*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_INTERNALEXECUTE_OFFSET))(method, obj, parameters, out_args);
		}

		static ::System::Reflection::MethodBase* GetVirtualMethod(::System::Type* type, ::System::Reflection::MethodBase* method)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETVIRTUALMETHOD_OFFSET))(type, method);
		}

		static ::System::Boolean IsTransparentProxy(::System::Object* proxy)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_ISTRANSPARENTPROXY_OFFSET))(proxy);
		}

		static ::System::Runtime::Remoting::Messaging::IMethodReturnMessage* InternalExecuteMessage(::System::MarshalByRefObject* target, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* reqMsg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMethodReturnMessage*(*)(::System::MarshalByRefObject*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_INTERNALEXECUTEMESSAGE_OFFSET))(target, reqMsg);
		}

		static ::System::Object* Connect(::System::Type* classToProxy, ::System::String* url)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CONNECT_OFFSET))(classToProxy, url);
		}

		static ::System::Object* Connect_1(::System::Type* classToProxy, ::System::String* url, ::System::Object* data)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CONNECT_1_OFFSET))(classToProxy, url, data);
		}

		static ::System::Type* GetServerTypeForUri(::System::String* URI)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETSERVERTYPEFORURI_OFFSET))(URI);
		}

		static ::System::Object* Unmarshal(::System::Runtime::Remoting::ObjRef* objectRef)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::ObjRef*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UNMARSHAL_OFFSET))(objectRef);
		}

		static ::System::Object* Unmarshal_1(::System::Runtime::Remoting::ObjRef* objectRef, ::System::Boolean fRefine)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::ObjRef*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UNMARSHAL_1_OFFSET))(objectRef, fRefine);
		}

		static ::System::Runtime::Remoting::ObjRef* Marshal(::System::MarshalByRefObject* Obj)
		{
			return ((::System::Runtime::Remoting::ObjRef*(*)(::System::MarshalByRefObject*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_MARSHAL_OFFSET))(Obj);
		}

		static ::System::Runtime::Remoting::ObjRef* Marshal_1(::System::MarshalByRefObject* Obj, ::System::String* ObjURI, ::System::Type* RequestedType)
		{
			return ((::System::Runtime::Remoting::ObjRef*(*)(::System::MarshalByRefObject*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_MARSHAL_1_OFFSET))(Obj, ObjURI, RequestedType);
		}

		static ::System::String* NewUri()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_NEWURI_OFFSET))();
		}

		static ::System::Runtime::Remoting::Proxies::RealProxy* GetRealProxy(::System::Object* proxy)
		{
			return ((::System::Runtime::Remoting::Proxies::RealProxy*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETREALPROXY_OFFSET))(proxy);
		}

		static ::System::Reflection::MethodBase* GetMethodBaseFromMethodMessage(::System::Runtime::Remoting::Messaging::IMethodMessage* msg)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::Runtime::Remoting::Messaging::IMethodMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMETHODBASEFROMMETHODMESSAGE_OFFSET))(msg);
		}

		static ::System::Reflection::MethodBase* GetMethodBaseFromName(::System::Type* type, ::System::String* methodName, ::Il2CppArray<::System::Type*>* signature)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMETHODBASEFROMNAME_OFFSET))(type, methodName, signature);
		}

		static ::System::Reflection::MethodBase* FindInterfaceMethod(::System::Type* type, ::System::String* methodName, ::Il2CppArray<::System::Type*>* signature)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_FINDINTERFACEMETHOD_OFFSET))(type, methodName, signature);
		}

		static ::System::Void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETOBJECTDATA_OFFSET))(obj, info, context);
		}

		static ::System::Boolean IsOneWay(::System::Reflection::MethodBase* method)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_ISONEWAY_OFFSET))(method);
		}

		static ::System::Object* CreateClientProxy(::System::Runtime::Remoting::ActivatedClientTypeEntry* entry, ::Il2CppArray<::System::Object*>* activationAttributes)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::ActivatedClientTypeEntry*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_OFFSET))(entry, activationAttributes);
		}

		static ::System::Object* CreateClientProxy_1(::System::Type* objectType, ::System::String* url, ::Il2CppArray<::System::Object*>* activationAttributes)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_1_OFFSET))(objectType, url, activationAttributes);
		}

		static ::System::Object* CreateClientProxy_2(::System::Runtime::Remoting::WellKnownClientTypeEntry* entry)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::WellKnownClientTypeEntry*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_2_OFFSET))(entry);
		}

		static ::System::Object* CreateClientProxyForContextBound(::System::Type* type, ::Il2CppArray<::System::Object*>* activationAttributes)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXYFORCONTEXTBOUND_OFFSET))(type, activationAttributes);
		}

		static ::System::Runtime::Remoting::Identity* GetIdentityForUri(::System::String* uri)
		{
			return ((::System::Runtime::Remoting::Identity*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETIDENTITYFORURI_OFFSET))(uri);
		}

		static ::System::String* RemoveAppNameFromUri(::System::String* uri)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REMOVEAPPNAMEFROMURI_OFFSET))(uri);
		}

		static ::System::Runtime::Remoting::ClientIdentity* GetOrCreateClientIdentity(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* proxyType, ::System::Object*& clientProxy)
		{
			return ((::System::Runtime::Remoting::ClientIdentity*(*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETORCREATECLIENTIDENTITY_OFFSET))(objRef, proxyType, clientProxy);
		}

		static ::System::Runtime::Remoting::Messaging::IMessageSink* GetClientChannelSinkChain(::System::String* url, ::System::Object* channelData, ::System::String*& objectUri)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::String*, ::System::Object*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETCLIENTCHANNELSINKCHAIN_OFFSET))(url, channelData, objectUri);
		}

		static ::System::Runtime::Remoting::ClientActivatedIdentity* CreateContextBoundObjectIdentity(::System::Type* objectType)
		{
			return ((::System::Runtime::Remoting::ClientActivatedIdentity*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECONTEXTBOUNDOBJECTIDENTITY_OFFSET))(objectType);
		}

		static ::System::Runtime::Remoting::ClientActivatedIdentity* CreateClientActivatedServerIdentity(::System::MarshalByRefObject* realObject, ::System::Type* objectType, ::System::String* objectUri)
		{
			return ((::System::Runtime::Remoting::ClientActivatedIdentity*(*)(::System::MarshalByRefObject*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTACTIVATEDSERVERIDENTITY_OFFSET))(realObject, objectType, objectUri);
		}

		static ::System::Runtime::Remoting::ServerIdentity* CreateWellKnownServerIdentity(::System::Type* objectType, ::System::String* objectUri, ::System::Runtime::Remoting::WellKnownObjectMode mode)
		{
			return ((::System::Runtime::Remoting::ServerIdentity*(*)(::System::Type*, ::System::String*, ::System::Runtime::Remoting::WellKnownObjectMode))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATEWELLKNOWNSERVERIDENTITY_OFFSET))(objectType, objectUri, mode);
		}

		static ::System::Void RegisterServerIdentity(::System::Runtime::Remoting::ServerIdentity* identity)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ServerIdentity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REGISTERSERVERIDENTITY_OFFSET))(identity);
		}

		static ::System::Object* GetProxyForRemoteObject(::System::Runtime::Remoting::ObjRef* objref, ::System::Type* classToProxy)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETPROXYFORREMOTEOBJECT_OFFSET))(objref, classToProxy);
		}

		static ::System::Object* GetRemoteObject(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* proxyType)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETREMOTEOBJECT_OFFSET))(objRef, proxyType);
		}

		static ::System::Void RegisterInternalChannels()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REGISTERINTERNALCHANNELS_OFFSET))();
		}

		static ::System::Void DisposeIdentity(::System::Runtime::Remoting::Identity* ident)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_DISPOSEIDENTITY_OFFSET))(ident);
		}

		static ::System::Runtime::Remoting::Identity* GetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Identity*(*)(::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMESSAGETARGETIDENTITY_OFFSET))(msg);
		}

		static ::System::Void SetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Identity* ident)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Identity*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SETMESSAGETARGETIDENTITY_OFFSET))(msg, ident);
		}

		static ::System::String* GetNormalizedUri(::System::String* uri)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETNORMALIZEDURI_OFFSET))(uri);
		}
	};
}
