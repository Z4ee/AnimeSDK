#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Remoting { class IChannelInfo; }
namespace System::Runtime::Remoting { class IEnvoyInfo; }
namespace System::Runtime::Remoting { class IRemotingTypeInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_REMOTING_OBJREF_DESERIALIZEINTHECURRENTDOMAIN_OFFSET UNITYSDK_OFFSET(0x163A9DC0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x163BB7D0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x163BB9B0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_CHANNELINFO_OFFSET UNITYSDK_OFFSET(0x163BB760)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_ENVOYINFO_OFFSET UNITYSDK_OFFSET(0x163BB770)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_ISREFERENCETOWELLKNOW_OFFSET UNITYSDK_OFFSET(0x163BB700)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_SERVERTYPE_OFFSET UNITYSDK_OFFSET(0x163BBA90)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x163BB790)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_URI_OFFSET UNITYSDK_OFFSET(0x163BB7B0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_SERIALIZETYPE_OFFSET UNITYSDK_OFFSET(0x163AB2C0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_SET_ENVOYINFO_OFFSET UNITYSDK_OFFSET(0x163BB780)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x163BB7A0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_SET_URI_OFFSET UNITYSDK_OFFSET(0x163BB7C0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_UPDATECHANNELINFO_OFFSET UNITYSDK_OFFSET(0x163BAD70)
#define SYSTEM_RUNTIME_REMOTING_OBJREF__CCTOR_OFFSET UNITYSDK_OFFSET(0x163BBBA0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x163BAE00)
#define SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_2_OFFSET UNITYSDK_OFFSET(0x163BAE10)
#define SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_3_OFFSET UNITYSDK_OFFSET(0x163BB200)
#define SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_OFFSET UNITYSDK_OFFSET(0x163BACE0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ObjRef_TypeDefinitionIndex = 1201;

	class ObjRef : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_MarshalledObjectRef()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObjRef_TypeDefinitionIndex)->GetStaticField(0x3DD0);
		}
		static ::System::Int32* StaticGet_WellKnowObjectRef()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObjRef_TypeDefinitionIndex)->GetStaticField(0x3DD4);
		}
		::System::Runtime::Remoting::IChannelInfo* channel_info; // 0x10
		::System::Runtime::Remoting::IRemotingTypeInfo* typeInfo; // 0x18
		::System::Type* _serverType; // 0x20
		::System::Runtime::Remoting::IEnvoyInfo* envoyInfo; // 0x28
		::System::String* uri; // 0x30
		::System::Int32 flags; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* uri, ::System::Runtime::Remoting::IChannelInfo* cinfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Runtime::Remoting::IChannelInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_1_OFFSET))(this, uri, cinfo);
		}

		::System::Void _ctor_2(::System::Type* type, ::System::String* url, ::System::Object* remoteChannelData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_2_OFFSET))(this, type, url, remoteChannelData);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_3_OFFSET))(this, info, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF__CCTOR_OFFSET))();
		}

		::System::Runtime::Remoting::ObjRef* DeserializeInTheCurrentDomain(::System::Int32 domainId, ::Il2CppArray<::System::Byte>* tInfo)
		{
			return ((::System::Runtime::Remoting::ObjRef*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_DESERIALIZEINTHECURRENTDOMAIN_OFFSET))(this, domainId, tInfo);
		}

		::Il2CppArray<::System::Byte>* SerializeType()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_SERIALIZETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsReferenceToWellKnow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_ISREFERENCETOWELLKNOW_OFFSET))(this);
		}

		::System::Runtime::Remoting::IChannelInfo* get_ChannelInfo()
		{
			return ((::System::Runtime::Remoting::IChannelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_CHANNELINFO_OFFSET))(this);
		}

		::System::Runtime::Remoting::IEnvoyInfo* get_EnvoyInfo()
		{
			return ((::System::Runtime::Remoting::IEnvoyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_ENVOYINFO_OFFSET))(this);
		}

		::System::Void set_EnvoyInfo(::System::Runtime::Remoting::IEnvoyInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::IEnvoyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_SET_ENVOYINFO_OFFSET))(this, value);
		}

		::System::Runtime::Remoting::IRemotingTypeInfo* get_TypeInfo()
		{
			return ((::System::Runtime::Remoting::IRemotingTypeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::System::Runtime::Remoting::IRemotingTypeInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::IRemotingTypeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::String* get_URI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_URI_OFFSET))(this);
		}

		::System::Void set_URI(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_SET_URI_OFFSET))(this, value);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GETREALOBJECT_OFFSET))(this, context);
		}

		::System::Void UpdateChannelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_UPDATECHANNELINFO_OFFSET))(this);
		}

		::System::Type* get_ServerType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_SERVERTYPE_OFFSET))(this);
		}
	};
}
