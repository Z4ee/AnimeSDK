#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Net { class IPEndPoint; }

#define SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x742CE0)
#define SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0x985590)
#define SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x985540)
#define SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x246290)
#define SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_GET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C8A55B0)
#define SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C8A5640)
#define SYSTEM_NET_SOCKETS_UDPRECEIVERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x985530)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int UdpReceiveResult_TypeDefinitionIndex = 3677;

	struct alignas(8) UdpReceiveResult
	{
		::Il2CppArray<::System::Byte>* m_buffer; // 0x10
		::System::Net::IPEndPoint* m_remoteEndPoint; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* buffer, ::System::Net::IPEndPoint* remoteEndPoint)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPRECEIVERESULT__CTOR_OFFSET))(this, buffer, remoteEndPoint);
		}

		::Il2CppArray<::System::Byte>* get_Buffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_GET_BUFFER_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_RemoteEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_GET_REMOTEENDPOINT_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Net::Sockets::UdpReceiveResult other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Sockets::UdpReceiveResult))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::System::Net::Sockets::UdpReceiveResult left, ::System::Net::Sockets::UdpReceiveResult right)
		{
			return ((::System::Boolean(*)(::System::Net::Sockets::UdpReceiveResult, ::System::Net::Sockets::UdpReceiveResult))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Net::Sockets::UdpReceiveResult left, ::System::Net::Sockets::UdpReceiveResult right)
		{
			return ((::System::Boolean(*)(::System::Net::Sockets::UdpReceiveResult, ::System::Net::Sockets::UdpReceiveResult))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPRECEIVERESULT_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
