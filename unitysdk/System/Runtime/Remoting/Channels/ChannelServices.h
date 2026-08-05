#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IList; }
namespace System::Runtime::Remoting { class ChannelData; }
namespace System::Runtime::Remoting { class ProviderData; }
namespace System::Runtime::Remoting::Channels { class IChannel; }
namespace System::Runtime::Remoting::Channels { class IChannelSender; }
namespace System::Runtime::Remoting::Contexts { class CrossContextChannel; }
namespace System::Runtime::Remoting::Messaging { class IMessage; }
namespace System::Runtime::Remoting::Messaging { class IMessageSink; }
namespace System::Runtime::Remoting::Messaging { class ReturnMessage; }

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CHECKINCOMINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DCF8E60)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CHECKRETURNMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DCF9170)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATECLIENTCHANNELSINKCHAIN_1_OFFSET UNITYSDK_OFFSET(0x1DCF6CA0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATECLIENTCHANNELSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x1DCF60E0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1DCF89F0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_GETCURRENTCHANNELINFO_OFFSET UNITYSDK_OFFSET(0x1DCF9340)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNELCONFIG_OFFSET UNITYSDK_OFFSET(0x1DCF7410)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNEL_1_OFFSET UNITYSDK_OFFSET(0x1DCF6EA0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNEL_OFFSET UNITYSDK_OFFSET(0x1DCF6E40)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_SYNCDISPATCHMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DCF8D90)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCF97E0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF60D0)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int ChannelServices_TypeDefinitionIndex = 1294;

	class ChannelServices : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CrossContextUrl()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChannelServices_TypeDefinitionIndex)->GetStaticField(0x6D0);
		}
		static ::System::Collections::ArrayList** StaticGet_delayedClientChannels()
		{
			return (::System::Collections::ArrayList**)Il2CppClass::FromTypeDefinitionIndex(ChannelServices_TypeDefinitionIndex)->GetStaticField(0x6D8);
		}
		static ::System::Runtime::Remoting::Contexts::CrossContextChannel** StaticGet__crossContextSink()
		{
			return (::System::Runtime::Remoting::Contexts::CrossContextChannel**)Il2CppClass::FromTypeDefinitionIndex(ChannelServices_TypeDefinitionIndex)->GetStaticField(0x6E0);
		}
		static ::System::Collections::IList** StaticGet_oldStartModeTypes()
		{
			return (::System::Collections::IList**)Il2CppClass::FromTypeDefinitionIndex(ChannelServices_TypeDefinitionIndex)->GetStaticField(0x6E8);
		}
		static ::System::Collections::ArrayList** StaticGet_registeredChannels()
		{
			return (::System::Collections::ArrayList**)Il2CppClass::FromTypeDefinitionIndex(ChannelServices_TypeDefinitionIndex)->GetStaticField(0x6F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES__CCTOR_OFFSET))();
		}

		static ::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain(::System::String* url, ::System::Object* remoteChannelData, ::System::String*& objectUri)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::String*, ::System::Object*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATECLIENTCHANNELSINKCHAIN_OFFSET))(url, remoteChannelData, objectUri);
		}

		static ::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain_1(::System::Runtime::Remoting::Channels::IChannelSender* sender, ::System::String* url, ::Il2CppArray<::System::Object*>* channelDataArray, ::System::String*& objectUri)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::Runtime::Remoting::Channels::IChannelSender*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATECLIENTCHANNELSINKCHAIN_1_OFFSET))(sender, url, channelDataArray, objectUri);
		}

		static ::System::Void RegisterChannel(::System::Runtime::Remoting::Channels::IChannel* chnl)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::Channels::IChannel*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNEL_OFFSET))(chnl);
		}

		static ::System::Void RegisterChannel_1(::System::Runtime::Remoting::Channels::IChannel* chnl, ::System::Boolean ensureSecurity)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::Channels::IChannel*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNEL_1_OFFSET))(chnl, ensureSecurity);
		}

		static ::System::Void RegisterChannelConfig(::System::Runtime::Remoting::ChannelData* channel)
		{
			return ((::System::Void(*)(::System::Runtime::Remoting::ChannelData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_REGISTERCHANNELCONFIG_OFFSET))(channel);
		}

		static ::System::Object* CreateProvider(::System::Runtime::Remoting::ProviderData* prov)
		{
			return ((::System::Object*(*)(::System::Runtime::Remoting::ProviderData*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CREATEPROVIDER_OFFSET))(prov);
		}

		static ::System::Runtime::Remoting::Messaging::IMessage* SyncDispatchMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_SYNCDISPATCHMESSAGE_OFFSET))(msg);
		}

		static ::System::Runtime::Remoting::Messaging::ReturnMessage* CheckIncomingMessage(::System::Runtime::Remoting::Messaging::IMessage* msg)
		{
			return ((::System::Runtime::Remoting::Messaging::ReturnMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CHECKINCOMINGMESSAGE_OFFSET))(msg);
		}

		static ::System::Runtime::Remoting::Messaging::IMessage* CheckReturnMessage(::System::Runtime::Remoting::Messaging::IMessage* callMsg, ::System::Runtime::Remoting::Messaging::IMessage* retMsg)
		{
			return ((::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_CHECKRETURNMESSAGE_OFFSET))(callMsg, retMsg);
		}

		static ::Il2CppArray<::System::Object*>* GetCurrentChannelInfo()
		{
			return ((::Il2CppArray<::System::Object*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CHANNELSERVICES_GETCURRENTCHANNELINFO_OFFSET))();
		}
	};
}
