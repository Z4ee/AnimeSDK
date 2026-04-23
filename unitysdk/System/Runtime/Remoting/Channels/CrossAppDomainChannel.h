#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_CREATEMESSAGESINK_OFFSET UNITYSDK_OFFSET(0x179C6C60)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_GET_CHANNELDATA_OFFSET UNITYSDK_OFFSET(0x179C9370)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_GET_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x179C7310)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_GET_CHANNELPRIORITY_OFFSET UNITYSDK_OFFSET(0x179C7350)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_REGISTERCROSSAPPDOMAINCHANNEL_OFFSET UNITYSDK_OFFSET(0x179C95A0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_STARTLISTENING_OFFSET UNITYSDK_OFFSET(0x179C7360)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x179C9A90)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x179C9730)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int CrossAppDomainChannel_TypeDefinitionIndex = 1256;

	class CrossAppDomainChannel : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CrossAppDomainChannel_TypeDefinitionIndex)->GetStaticField(0xBAB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterCrossAppDomainChannel()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_REGISTERCROSSAPPDOMAINCHANNEL_OFFSET))();
		}

		::System::String* get_ChannelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_GET_CHANNELNAME_OFFSET))(this);
		}

		::System::Int32 get_ChannelPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_GET_CHANNELPRIORITY_OFFSET))(this);
		}

		::System::Object* get_ChannelData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_GET_CHANNELDATA_OFFSET))(this);
		}

		::System::Void StartListening(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_STARTLISTENING_OFFSET))(this, data);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* CreateMessageSink(::System::String* url, ::System::Object* data, ::System::String*& uri)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID, ::System::String*, ::System::Object*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINCHANNEL_CREATEMESSAGESINK_OFFSET))(this, url, data, uri);
		}
	};
}
