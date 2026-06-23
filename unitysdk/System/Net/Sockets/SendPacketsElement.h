#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1C8A52F0)
#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C8A5300)
#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_GET_ENDOFPACKET_OFFSET UNITYSDK_OFFSET(0x1C8A5320)
#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_GET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x1C8A52E0)
#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1C8A5310)
#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C8A5120)
#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8A4F90)
#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C8A5100)
#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C8A5010)
#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1C8A5140)
#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1C8A52C0)
#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1C8A51C0)
#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A4F80)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SendPacketsElement_TypeDefinitionIndex = 3662;

	class SendPacketsElement : public ::System::Object
	{
	public:
		::System::String* m_FilePath; // 0x10
		::Il2CppArray<::System::Byte>* m_Buffer; // 0x18
		::System::Boolean m_endOfPacket; // 0x20
		::System::Int32 m_Offset; // 0x24
		::System::Int32 m_Count; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* filepath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_1_OFFSET))(this, filepath);
		}

		::System::Void _ctor_2(::System::String* filepath, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_2_OFFSET))(this, filepath, offset, count);
		}

		::System::Void _ctor_3(::System::String* filepath, ::System::Int32 offset, ::System::Int32 count, ::System::Boolean endOfPacket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_3_OFFSET))(this, filepath, offset, count, endOfPacket);
		}

		::System::Void _ctor_4(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_4_OFFSET))(this, buffer);
		}

		::System::Void _ctor_5(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_5_OFFSET))(this, buffer, offset, count);
		}

		::System::Void _ctor_6(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Boolean endOfPacket)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT__CTOR_6_OFFSET))(this, buffer, offset, count, endOfPacket);
		}

		::System::Void Initialize(::System::String* filePath, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Boolean endOfPacket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_INITIALIZE_OFFSET))(this, filePath, buffer, offset, count, endOfPacket);
		}

		::System::String* get_FilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_GET_FILEPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Buffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_GET_BUFFER_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_Offset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_GET_OFFSET_OFFSET))(this);
		}

		::System::Boolean get_EndOfPacket()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_GET_ENDOFPACKET_OFFSET))(this);
		}
	};
}
