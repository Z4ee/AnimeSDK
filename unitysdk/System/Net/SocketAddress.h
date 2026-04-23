#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }

#define SYSTEM_NET_SOCKETADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A1448C0)
#define SYSTEM_NET_SOCKETADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A144950)
#define SYSTEM_NET_SOCKETADDRESS_GETIPADDRESS_OFFSET UNITYSDK_OFFSET(0x1A144450)
#define SYSTEM_NET_SOCKETADDRESS_GETIPENDPOINT_OFFSET UNITYSDK_OFFSET(0x1A144820)
#define SYSTEM_NET_SOCKETADDRESS_GET_FAMILY_OFFSET UNITYSDK_OFFSET(0x1A143D90)
#define SYSTEM_NET_SOCKETADDRESS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A143DF0)
#define SYSTEM_NET_SOCKETADDRESS_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A143DE0)
#define SYSTEM_NET_SOCKETADDRESS_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A143E80)
#define SYSTEM_NET_SOCKETADDRESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A144D70)
#define SYSTEM_NET_SOCKETADDRESS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A143FE0)
#define SYSTEM_NET_SOCKETADDRESS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A1443E0)
#define SYSTEM_NET_SOCKETADDRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A143F20)

namespace System::Net
{
	inline static constexpr unsigned int SocketAddress_TypeDefinitionIndex = 2745;

	class SocketAddress : public ::System::Object
	{
	public:
		::System::Int32 m_Size; // 0x10
		::Il2CppArray<::System::Byte>* m_Buffer; // 0x18
		::System::Boolean m_changed; // 0x20
		::System::Int32 m_hash; // 0x24

		::System::Void _ctor(::System::Net::Sockets::AddressFamily family, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::AddressFamily, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS__CTOR_OFFSET))(this, family, size);
		}

		::System::Void _ctor_1(::System::Net::IPAddress* ipAddress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS__CTOR_1_OFFSET))(this, ipAddress);
		}

		::System::Void _ctor_2(::System::Net::IPAddress* ipaddress, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS__CTOR_2_OFFSET))(this, ipaddress, port);
		}

		::System::Net::Sockets::AddressFamily get_Family()
		{
			return ((::System::Net::Sockets::AddressFamily(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GET_FAMILY_OFFSET))(this);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GET_SIZE_OFFSET))(this);
		}

		::System::Byte get_Item(::System::Int32 offset)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GET_ITEM_OFFSET))(this, offset);
		}

		::System::Void set_Item(::System::Int32 offset, ::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_SET_ITEM_OFFSET))(this, offset, value);
		}

		::System::Net::IPAddress* GetIPAddress()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GETIPADDRESS_OFFSET))(this);
		}

		::System::Net::IPEndPoint* GetIPEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GETIPENDPOINT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* comparand)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_EQUALS_OFFSET))(this, comparand);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_TOSTRING_OFFSET))(this);
		}
	};
}
