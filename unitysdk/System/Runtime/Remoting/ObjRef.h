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

#define SYSTEM_RUNTIME_REMOTING_OBJREF_DESERIALIZEINTHECURRENTDOMAIN_OFFSET UNITYSDK_OFFSET(0x19437BB0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1944E3A0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x1944E570)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_CHANNELINFO_OFFSET UNITYSDK_OFFSET(0x1944E330)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_ENVOYINFO_OFFSET UNITYSDK_OFFSET(0x1944E340)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_ISREFERENCETOWELLKNOW_OFFSET UNITYSDK_OFFSET(0x1944E2D0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_SERVERTYPE_OFFSET UNITYSDK_OFFSET(0x1944E650)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x1944E360)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_URI_OFFSET UNITYSDK_OFFSET(0x1944E380)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_SERIALIZETYPE_OFFSET UNITYSDK_OFFSET(0x194397C0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_SET_ENVOYINFO_OFFSET UNITYSDK_OFFSET(0x1944E350)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x1944E370)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_SET_URI_OFFSET UNITYSDK_OFFSET(0x1944E390)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_UPDATECHANNELINFO_OFFSET UNITYSDK_OFFSET(0x1944D530)
#define SYSTEM_RUNTIME_REMOTING_OBJREF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1944E7B0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1944D5C0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1944D5D0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1944DDB0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1944D4A0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ObjRef_TypeDefinitionIndex = 1211;

	class ObjRef : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_MarshalledObjectRef()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObjRef_TypeDefinitionIndex)->GetStaticField(0x7D00);
		}
		static ::System::Int32* StaticGet_WellKnowObjectRef()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObjRef_TypeDefinitionIndex)->GetStaticField(0x7D04);
		}
		::System::Type* _serverType; // 0x10
		::System::Runtime::Remoting::IChannelInfo* channel_info; // 0x18
		::System::Runtime::Remoting::IEnvoyInfo* envoyInfo; // 0x20
		::System::String* uri; // 0x28
		::System::Runtime::Remoting::IRemotingTypeInfo* typeInfo; // 0x30
		::System::Int32 flags; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Runtime::Remoting::IChannelInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Runtime::Remoting::IChannelInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Type* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF__CTOR_3_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF__CCTOR_OFFSET))();
		}

		::System::Runtime::Remoting::ObjRef* DeserializeInTheCurrentDomain(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Runtime::Remoting::ObjRef*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_DESERIALIZEINTHECURRENTDOMAIN_OFFSET))(this, a1, a2);
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

		::System::Void set_EnvoyInfo(::System::Runtime::Remoting::IEnvoyInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::IEnvoyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_SET_ENVOYINFO_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::IRemotingTypeInfo* get_TypeInfo()
		{
			return ((::System::Runtime::Remoting::IRemotingTypeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::System::Runtime::Remoting::IRemotingTypeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::IRemotingTypeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_SET_TYPEINFO_OFFSET))(this, a1);
		}

		::System::String* get_URI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_URI_OFFSET))(this);
		}

		::System::Void set_URI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_SET_URI_OFFSET))(this, a1);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GETREALOBJECT_OFFSET))(this, a1);
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
