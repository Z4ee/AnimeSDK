#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Net/Sockets/SocketFlags.h"
#include "unitysdk/System/Net/Sockets/SocketReceiveFromResult.h"
#include "unitysdk/System/Net/Sockets/SocketReceiveMessageFromResult.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class EndPoint; }
namespace System::Net { class IPAddress; }
namespace System::Net::Sockets { class Socket; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_ACCEPTASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C1D1660)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_ACCEPTASYNC_OFFSET UNITYSDK_OFFSET(0x1C1D1430)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_CONNECTASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C1D1B10)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_CONNECTASYNC_2_OFFSET UNITYSDK_OFFSET(0x1C1D1D80)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_CONNECTASYNC_3_OFFSET UNITYSDK_OFFSET(0x1C1D1FF0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_CONNECTASYNC_OFFSET UNITYSDK_OFFSET(0x1C1D18A0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_RECEIVEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C1D24C0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_RECEIVEASYNC_OFFSET UNITYSDK_OFFSET(0x1C1D2260)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_RECEIVEFROMASYNC_OFFSET UNITYSDK_OFFSET(0x1C1D2700)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_RECEIVEMESSAGEFROMASYNC_OFFSET UNITYSDK_OFFSET(0x1C1D2A60)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_SENDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C1D3060)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x1C1D2E00)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_SENDTOASYNC_OFFSET UNITYSDK_OFFSET(0x1C1D32A0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketTaskExtensions_TypeDefinitionIndex = 3689;

	class SocketTaskExtensions : public ::System::Object
	{
	public:
		static ::System::Threading::Tasks::Task_1<::System::Net::Sockets::Socket*>* AcceptAsync(::System::Net::Sockets::Socket* socket)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Sockets::Socket*>*(*)(::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_ACCEPTASYNC_OFFSET))(socket);
		}

		static ::System::Threading::Tasks::Task_1<::System::Net::Sockets::Socket*>* AcceptAsync_1(::System::Net::Sockets::Socket* socket, ::System::Net::Sockets::Socket* acceptSocket)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Sockets::Socket*>*(*)(::System::Net::Sockets::Socket*, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_ACCEPTASYNC_1_OFFSET))(socket, acceptSocket);
		}

		static ::System::Threading::Tasks::Task* ConnectAsync(::System::Net::Sockets::Socket* socket, ::System::Net::EndPoint* remoteEP)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Net::Sockets::Socket*, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_CONNECTASYNC_OFFSET))(socket, remoteEP);
		}

		static ::System::Threading::Tasks::Task* ConnectAsync_1(::System::Net::Sockets::Socket* socket, ::System::Net::IPAddress* address, ::System::Int32 port)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Net::Sockets::Socket*, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_CONNECTASYNC_1_OFFSET))(socket, address, port);
		}

		static ::System::Threading::Tasks::Task* ConnectAsync_2(::System::Net::Sockets::Socket* socket, ::Il2CppArray<::System::Net::IPAddress*>* addresses, ::System::Int32 port)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Net::Sockets::Socket*, ::Il2CppArray<::System::Net::IPAddress*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_CONNECTASYNC_2_OFFSET))(socket, addresses, port);
		}

		static ::System::Threading::Tasks::Task* ConnectAsync_3(::System::Net::Sockets::Socket* socket, ::System::String* host, ::System::Int32 port)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Net::Sockets::Socket*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_CONNECTASYNC_3_OFFSET))(socket, host, port);
		}

		static ::System::Threading::Tasks::Task_1<::System::Int32>* ReceiveAsync(::System::Net::Sockets::Socket* socket, ::System::ArraySegment_1<::System::Byte> buffer, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::System::Net::Sockets::Socket*, ::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_RECEIVEASYNC_OFFSET))(socket, buffer, socketFlags);
		}

		static ::System::Threading::Tasks::Task_1<::System::Int32>* ReceiveAsync_1(::System::Net::Sockets::Socket* socket, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::System::Net::Sockets::Socket*, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_RECEIVEASYNC_1_OFFSET))(socket, buffers, socketFlags);
		}

		static ::System::Threading::Tasks::Task_1<::System::Net::Sockets::SocketReceiveFromResult>* ReceiveFromAsync(::System::Net::Sockets::Socket* socket, ::System::ArraySegment_1<::System::Byte> buffer, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint* remoteEndPoint)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Sockets::SocketReceiveFromResult>*(*)(::System::Net::Sockets::Socket*, ::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_RECEIVEFROMASYNC_OFFSET))(socket, buffer, socketFlags, remoteEndPoint);
		}

		static ::System::Threading::Tasks::Task_1<::System::Net::Sockets::SocketReceiveMessageFromResult>* ReceiveMessageFromAsync(::System::Net::Sockets::Socket* socket, ::System::ArraySegment_1<::System::Byte> buffer, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint* remoteEndPoint)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Net::Sockets::SocketReceiveMessageFromResult>*(*)(::System::Net::Sockets::Socket*, ::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_RECEIVEMESSAGEFROMASYNC_OFFSET))(socket, buffer, socketFlags, remoteEndPoint);
		}

		static ::System::Threading::Tasks::Task_1<::System::Int32>* SendAsync(::System::Net::Sockets::Socket* socket, ::System::ArraySegment_1<::System::Byte> buffer, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::System::Net::Sockets::Socket*, ::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_SENDASYNC_OFFSET))(socket, buffer, socketFlags);
		}

		static ::System::Threading::Tasks::Task_1<::System::Int32>* SendAsync_1(::System::Net::Sockets::Socket* socket, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::System::Net::Sockets::Socket*, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_SENDASYNC_1_OFFSET))(socket, buffers, socketFlags);
		}

		static ::System::Threading::Tasks::Task_1<::System::Int32>* SendToAsync(::System::Net::Sockets::Socket* socket, ::System::ArraySegment_1<::System::Byte> buffer, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint* remoteEP)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::System::Net::Sockets::Socket*, ::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS_SENDTOASYNC_OFFSET))(socket, buffer, socketFlags, remoteEP);
		}
	};
}
