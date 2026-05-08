#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"
#include "unitysdk/System/Net/NetworkInformation/Ping_cap_user_data_t.h"
#include "unitysdk/System/Net/NetworkInformation/Ping_cap_user_header_t.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class BackgroundWorker; }
namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class PingCompletedEventArgs; }
namespace System::Net::NetworkInformation { class PingCompletedEventHandler; }
namespace System::Net::NetworkInformation { class PingOptions; }
namespace System::Net::NetworkInformation { class PingReply; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_NETWORKINFORMATION_PING_ADD_PINGCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A7EC0B0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_BUILDPINGARGS_OFFSET UNITYSDK_OFFSET(0x1A7EDD60)
#define SYSTEM_NET_NETWORKINFORMATION_PING_CAPGET_OFFSET UNITYSDK_OFFSET(0x1A7EC3A0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_CHECKLINUXCAPABILITIES_OFFSET UNITYSDK_OFFSET(0x1A7EC430)
#define SYSTEM_NET_NETWORKINFORMATION_PING_ONPINGCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A7EC5B0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_REMOVE_PINGCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A7EC130)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNCCANCEL_OFFSET UNITYSDK_OFFSET(0x1A7EE530)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A7EE210)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_2_OFFSET UNITYSDK_OFFSET(0x1A7EE310)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_3_OFFSET UNITYSDK_OFFSET(0x1A7EE320)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_4_OFFSET UNITYSDK_OFFSET(0x1A7EE3D0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_5_OFFSET UNITYSDK_OFFSET(0x1A7EE430)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_6_OFFSET UNITYSDK_OFFSET(0x1A7EE4B0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_7_OFFSET UNITYSDK_OFFSET(0x1A7EE080)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x1A7EDFD0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A7EE890)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_2_OFFSET UNITYSDK_OFFSET(0x1A7EE990)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_3_OFFSET UNITYSDK_OFFSET(0x1A7EE9A0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_4_OFFSET UNITYSDK_OFFSET(0x1A7EEA50)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_5_OFFSET UNITYSDK_OFFSET(0x1A7EEAB0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_6_OFFSET UNITYSDK_OFFSET(0x1A7EEB30)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_7_OFFSET UNITYSDK_OFFSET(0x1A7EE6C0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_OFFSET UNITYSDK_OFFSET(0x1A7EE620)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDPRIVILEGED_OFFSET UNITYSDK_OFFSET(0x1A7ECBA0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SENDUNPRIVILEGED_OFFSET UNITYSDK_OFFSET(0x1A7ED530)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SEND_1_OFFSET UNITYSDK_OFFSET(0x1A7EC6E0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SEND_2_OFFSET UNITYSDK_OFFSET(0x1A7EC7B0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SEND_3_OFFSET UNITYSDK_OFFSET(0x1A7EC9A0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SEND_4_OFFSET UNITYSDK_OFFSET(0x1A7ECA20)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SEND_5_OFFSET UNITYSDK_OFFSET(0x1A7ECAA0)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SEND_6_OFFSET UNITYSDK_OFFSET(0x1A7ECB40)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SEND_7_OFFSET UNITYSDK_OFFSET(0x1A7EC820)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SEND_OFFSET UNITYSDK_OFFSET(0x1A7EC610)
#define SYSTEM_NET_NETWORKINFORMATION_PING_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7EC5A0)
#define SYSTEM_NET_NETWORKINFORMATION_PING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7EC1B0)
#define SYSTEM_NET_NETWORKINFORMATION_PING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EC2C0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Ping_TypeDefinitionIndex = 3819;

	class Ping : public ::System::ComponentModel::Component
	{
	public:
		static ::System::String** StaticGet_PingBinPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Ping_TypeDefinitionIndex)->GetStaticField(0x2850);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_default_buffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Ping_TypeDefinitionIndex)->GetStaticField(0x2858);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_PingBinPaths()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Ping_TypeDefinitionIndex)->GetStaticField(0x2860);
		}
		static ::System::Boolean* StaticGet_canSendPrivileged()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Ping_TypeDefinitionIndex)->GetStaticField(0x1060);
		}
		// static const ::System::Int32 DefaultCount = 0x1; // 0x0
		// static const ::System::Int32 default_timeout = 0xFA0; // 0x0
		// static const ::System::UInt32 _LINUX_CAPABILITY_VERSION_1 = 0x19980330; // 0x0
		::System::Threading::CancellationTokenSource* cts; // 0x28
		::System::ComponentModel::BackgroundWorker* worker; // 0x30
		::System::Net::NetworkInformation::PingCompletedEventHandler* PingCompleted; // 0x38
		::System::Object* user_async_state; // 0x40
		::System::UInt16 identifier; // 0x48

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING__CTOR_OFFSET))(this);
		}

		::System::Void add_PingCompleted(::System::Net::NetworkInformation::PingCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::PingCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_ADD_PINGCOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_PingCompleted(::System::Net::NetworkInformation::PingCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::PingCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_REMOVE_PINGCOMPLETED_OFFSET))(this, value);
		}

		static ::System::Int32 capget(::System::Net::NetworkInformation::Ping_cap_user_header_t& header, ::System::Net::NetworkInformation::Ping_cap_user_data_t& data)
		{
			return ((::System::Int32(*)(::System::Net::NetworkInformation::Ping_cap_user_header_t&, ::System::Net::NetworkInformation::Ping_cap_user_data_t&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_CAPGET_OFFSET))(header, data);
		}

		static ::System::Void CheckLinuxCapabilities()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_CHECKLINUXCAPABILITIES_OFFSET))();
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnPingCompleted(::System::Net::NetworkInformation::PingCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::PingCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_ONPINGCOMPLETED_OFFSET))(this, e);
		}

		::System::Net::NetworkInformation::PingReply* Send(::System::Net::IPAddress* address)
		{
			return ((::System::Net::NetworkInformation::PingReply*(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SEND_OFFSET))(this, address);
		}

		::System::Net::NetworkInformation::PingReply* Send_1(::System::Net::IPAddress* address, ::System::Int32 timeout)
		{
			return ((::System::Net::NetworkInformation::PingReply*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SEND_1_OFFSET))(this, address, timeout);
		}

		::System::Net::NetworkInformation::PingReply* Send_2(::System::Net::IPAddress* address, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Net::NetworkInformation::PingReply*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SEND_2_OFFSET))(this, address, timeout, buffer);
		}

		::System::Net::NetworkInformation::PingReply* Send_3(::System::String* hostNameOrAddress)
		{
			return ((::System::Net::NetworkInformation::PingReply*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SEND_3_OFFSET))(this, hostNameOrAddress);
		}

		::System::Net::NetworkInformation::PingReply* Send_4(::System::String* hostNameOrAddress, ::System::Int32 timeout)
		{
			return ((::System::Net::NetworkInformation::PingReply*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SEND_4_OFFSET))(this, hostNameOrAddress, timeout);
		}

		::System::Net::NetworkInformation::PingReply* Send_5(::System::String* hostNameOrAddress, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Net::NetworkInformation::PingReply*(*)(::PVOID, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SEND_5_OFFSET))(this, hostNameOrAddress, timeout, buffer);
		}

		::System::Net::NetworkInformation::PingReply* Send_6(::System::String* hostNameOrAddress, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer, ::System::Net::NetworkInformation::PingOptions* options)
		{
			return ((::System::Net::NetworkInformation::PingReply*(*)(::PVOID, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Net::NetworkInformation::PingOptions*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SEND_6_OFFSET))(this, hostNameOrAddress, timeout, buffer, options);
		}

		::System::Net::NetworkInformation::PingReply* Send_7(::System::Net::IPAddress* address, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer, ::System::Net::NetworkInformation::PingOptions* options)
		{
			return ((::System::Net::NetworkInformation::PingReply*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Net::NetworkInformation::PingOptions*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SEND_7_OFFSET))(this, address, timeout, buffer, options);
		}

		::System::Net::NetworkInformation::PingReply* SendPrivileged(::System::Net::IPAddress* address, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer, ::System::Net::NetworkInformation::PingOptions* options)
		{
			return ((::System::Net::NetworkInformation::PingReply*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Net::NetworkInformation::PingOptions*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDPRIVILEGED_OFFSET))(this, address, timeout, buffer, options);
		}

		::System::Net::NetworkInformation::PingReply* SendUnprivileged(::System::Net::IPAddress* address, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer, ::System::Net::NetworkInformation::PingOptions* options)
		{
			return ((::System::Net::NetworkInformation::PingReply*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Net::NetworkInformation::PingOptions*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDUNPRIVILEGED_OFFSET))(this, address, timeout, buffer, options);
		}

		::System::Void SendAsync(::System::Net::IPAddress* address, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_OFFSET))(this, address, timeout, buffer, userToken);
		}

		::System::Void SendAsync_1(::System::Net::IPAddress* address, ::System::Int32 timeout, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_1_OFFSET))(this, address, timeout, userToken);
		}

		::System::Void SendAsync_2(::System::Net::IPAddress* address, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_2_OFFSET))(this, address, userToken);
		}

		::System::Void SendAsync_3(::System::String* hostNameOrAddress, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_3_OFFSET))(this, hostNameOrAddress, timeout, buffer, userToken);
		}

		::System::Void SendAsync_4(::System::String* hostNameOrAddress, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer, ::System::Net::NetworkInformation::PingOptions* options, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Net::NetworkInformation::PingOptions*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_4_OFFSET))(this, hostNameOrAddress, timeout, buffer, options, userToken);
		}

		::System::Void SendAsync_5(::System::String* hostNameOrAddress, ::System::Int32 timeout, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_5_OFFSET))(this, hostNameOrAddress, timeout, userToken);
		}

		::System::Void SendAsync_6(::System::String* hostNameOrAddress, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_6_OFFSET))(this, hostNameOrAddress, userToken);
		}

		::System::Void SendAsync_7(::System::Net::IPAddress* address, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer, ::System::Net::NetworkInformation::PingOptions* options, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Net::NetworkInformation::PingOptions*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNC_7_OFFSET))(this, address, timeout, buffer, options, userToken);
		}

		::System::Void SendAsyncCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDASYNCCANCEL_OFFSET))(this);
		}

		::System::String* BuildPingArgs(::System::Net::IPAddress* address, ::System::Int32 timeout, ::System::Net::NetworkInformation::PingOptions* options)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32, ::System::Net::NetworkInformation::PingOptions*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_BUILDPINGARGS_OFFSET))(this, address, timeout, options);
		}

		::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>* SendPingAsync(::System::Net::IPAddress* address, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_OFFSET))(this, address, timeout, buffer);
		}

		::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>* SendPingAsync_1(::System::Net::IPAddress* address, ::System::Int32 timeout)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_1_OFFSET))(this, address, timeout);
		}

		::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>* SendPingAsync_2(::System::Net::IPAddress* address)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>*(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_2_OFFSET))(this, address);
		}

		::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>* SendPingAsync_3(::System::String* hostNameOrAddress, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>*(*)(::PVOID, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_3_OFFSET))(this, hostNameOrAddress, timeout, buffer);
		}

		::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>* SendPingAsync_4(::System::String* hostNameOrAddress, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer, ::System::Net::NetworkInformation::PingOptions* options)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>*(*)(::PVOID, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Net::NetworkInformation::PingOptions*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_4_OFFSET))(this, hostNameOrAddress, timeout, buffer, options);
		}

		::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>* SendPingAsync_5(::System::String* hostNameOrAddress, ::System::Int32 timeout)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_5_OFFSET))(this, hostNameOrAddress, timeout);
		}

		::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>* SendPingAsync_6(::System::String* hostNameOrAddress)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_6_OFFSET))(this, hostNameOrAddress);
		}

		::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>* SendPingAsync_7(::System::Net::IPAddress* address, ::System::Int32 timeout, ::Il2CppArray<::System::Byte>* buffer, ::System::Net::NetworkInformation::PingOptions* options)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::NetworkInformation::PingReply*>*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Net::NetworkInformation::PingOptions*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PING_SENDPINGASYNC_7_OFFSET))(this, address, timeout, buffer, options);
		}
	};
}
