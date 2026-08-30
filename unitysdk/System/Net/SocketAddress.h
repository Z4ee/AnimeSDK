#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/AddressFamily.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }

#define SYSTEM_NET_SOCKETADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B9642D0)
#define SYSTEM_NET_SOCKETADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B964380)
#define SYSTEM_NET_SOCKETADDRESS_GETIPADDRESS_OFFSET UNITYSDK_OFFSET(0x1B963FC0)
#define SYSTEM_NET_SOCKETADDRESS_GETIPENDPOINT_OFFSET UNITYSDK_OFFSET(0x1B964260)
#define SYSTEM_NET_SOCKETADDRESS_GET_FAMILY_OFFSET UNITYSDK_OFFSET(0x1B963A90)
#define SYSTEM_NET_SOCKETADDRESS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B963AD0)
#define SYSTEM_NET_SOCKETADDRESS_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B963AC0)
#define SYSTEM_NET_SOCKETADDRESS_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B963B50)
#define SYSTEM_NET_SOCKETADDRESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B964750)
#define SYSTEM_NET_SOCKETADDRESS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B963C80)
#define SYSTEM_NET_SOCKETADDRESS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B963F70)
#define SYSTEM_NET_SOCKETADDRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B963BE0)

namespace System::Net
{
	inline static constexpr unsigned int SocketAddress_TypeDefinitionIndex = 2756;

	class SocketAddress : public ::System::Object
	{
	public:
		::System::Int32 m_Size; // 0x10
		::Il2CppArray<::System::Byte>* m_Buffer; // 0x18
		::System::Boolean m_changed; // 0x20
		::System::Int32 m_hash; // 0x24

		::System::Void _ctor(::System::Net::Sockets::AddressFamily a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::AddressFamily, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Net::IPAddress* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Net::IPAddress* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Net::Sockets::AddressFamily get_Family()
		{
			return ((::System::Net::Sockets::AddressFamily(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GET_FAMILY_OFFSET))(this);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GET_SIZE_OFFSET))(this);
		}

		::System::Byte get_Item(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Net::IPAddress* GetIPAddress()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GETIPADDRESS_OFFSET))(this);
		}

		::System::Net::IPEndPoint* GetIPEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GETIPENDPOINT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_EQUALS_OFFSET))(this, a1);
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
