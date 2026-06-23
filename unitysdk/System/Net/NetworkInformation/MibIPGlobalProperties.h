#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/UnixIPGlobalProperties.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class StringDictionary; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::NetworkInformation { class IPGlobalStatistics; }
namespace System::Net::NetworkInformation { class IcmpV4Statistics; }
namespace System::Net::NetworkInformation { class IcmpV6Statistics; }
namespace System::Net::NetworkInformation { class TcpConnectionInformation; }
namespace System::Net::NetworkInformation { class TcpStatistics; }
namespace System::Net::NetworkInformation { class UdpStatistics; }

#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_CREATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C49EB20)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETACTIVETCPCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1C49F740)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETACTIVETCPLISTENERS_OFFSET UNITYSDK_OFFSET(0x1C49F9F0)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETACTIVEUDPLISTENERS_OFFSET UNITYSDK_OFFSET(0x1C49FA90)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETICMPV4STATISTICS_OFFSET UNITYSDK_OFFSET(0x1C49FB30)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETICMPV6STATISTICS_OFFSET UNITYSDK_OFFSET(0x1C49FB80)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETIPV4GLOBALSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1C49FBD0)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETIPV6GLOBALSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1C49FC20)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETLOCALADDRESSES_OFFSET UNITYSDK_OFFSET(0x1C49F0D0)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETPROPERTIES4_OFFSET UNITYSDK_OFFSET(0x1C49E4D0)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETPROPERTIES6_OFFSET UNITYSDK_OFFSET(0x1C49EC20)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETROWS_OFFSET UNITYSDK_OFFSET(0x1C49F450)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETTCPIPV4STATISTICS_OFFSET UNITYSDK_OFFSET(0x1C49FC70)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETTCPIPV6STATISTICS_OFFSET UNITYSDK_OFFSET(0x1C49FCC0)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETUDPIPV4STATISTICS_OFFSET UNITYSDK_OFFSET(0x1C49FD10)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETUDPIPV6STATISTICS_OFFSET UNITYSDK_OFFSET(0x1C49FD60)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_TOENDPOINT_OFFSET UNITYSDK_OFFSET(0x1C49F220)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C49FDB0)
#define SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49E420)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MibIPGlobalProperties_TypeDefinitionIndex = 3757;

	class MibIPGlobalProperties : public ::System::Net::NetworkInformation::UnixIPGlobalProperties
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_wsChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(MibIPGlobalProperties_TypeDefinitionIndex)->GetStaticField(0x29B0);
		}
		// static const ::System::String* ProcDir; // 0x0
		// static const ::System::String* CompatProcDir; // 0x0
		::System::String* TcpFile; // 0x10
		::System::String* Tcp6File; // 0x18
		::System::String* Udp6File; // 0x20
		::System::String* UdpFile; // 0x28
		::System::String* StatisticsFile; // 0x30
		::System::String* StatisticsFileIPv6; // 0x38

		::System::Void _ctor(::System::String* procDir)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES__CTOR_OFFSET))(this, procDir);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES__CCTOR_OFFSET))();
		}

		::System::Collections::Specialized::StringDictionary* GetProperties4(::System::String* item)
		{
			return ((::System::Collections::Specialized::StringDictionary*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETPROPERTIES4_OFFSET))(this, item);
		}

		::System::Collections::Specialized::StringDictionary* GetProperties6(::System::String* item)
		{
			return ((::System::Collections::Specialized::StringDictionary*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETPROPERTIES6_OFFSET))(this, item);
		}

		::System::Exception* CreateException(::System::String* file, ::System::String* msg)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_CREATEEXCEPTION_OFFSET))(this, file, msg);
		}

		::Il2CppArray<::System::Net::IPEndPoint*>* GetLocalAddresses(::System::Collections::Generic::List_1<::Il2CppArray<::System::String*>*>* list)
		{
			return ((::Il2CppArray<::System::Net::IPEndPoint*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Il2CppArray<::System::String*>*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETLOCALADDRESSES_OFFSET))(this, list);
		}

		::System::Net::IPEndPoint* ToEndpoint(::System::String* s)
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_TOENDPOINT_OFFSET))(this, s);
		}

		::System::Void GetRows(::System::String* file, ::System::Collections::Generic::List_1<::Il2CppArray<::System::String*>*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Il2CppArray<::System::String*>*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETROWS_OFFSET))(this, file, list);
		}

		::Il2CppArray<::System::Net::NetworkInformation::TcpConnectionInformation*>* GetActiveTcpConnections()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::TcpConnectionInformation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETACTIVETCPCONNECTIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::Net::IPEndPoint*>* GetActiveTcpListeners()
		{
			return ((::Il2CppArray<::System::Net::IPEndPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETACTIVETCPLISTENERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Net::IPEndPoint*>* GetActiveUdpListeners()
		{
			return ((::Il2CppArray<::System::Net::IPEndPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETACTIVEUDPLISTENERS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IcmpV4Statistics* GetIcmpV4Statistics()
		{
			return ((::System::Net::NetworkInformation::IcmpV4Statistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETICMPV4STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IcmpV6Statistics* GetIcmpV6Statistics()
		{
			return ((::System::Net::NetworkInformation::IcmpV6Statistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETICMPV6STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPGlobalStatistics* GetIPv4GlobalStatistics()
		{
			return ((::System::Net::NetworkInformation::IPGlobalStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETIPV4GLOBALSTATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPGlobalStatistics* GetIPv6GlobalStatistics()
		{
			return ((::System::Net::NetworkInformation::IPGlobalStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETIPV6GLOBALSTATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::TcpStatistics* GetTcpIPv4Statistics()
		{
			return ((::System::Net::NetworkInformation::TcpStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETTCPIPV4STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::TcpStatistics* GetTcpIPv6Statistics()
		{
			return ((::System::Net::NetworkInformation::TcpStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETTCPIPV6STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::UdpStatistics* GetUdpIPv4Statistics()
		{
			return ((::System::Net::NetworkInformation::UdpStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETUDPIPV4STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::UdpStatistics* GetUdpIPv6Statistics()
		{
			return ((::System::Net::NetworkInformation::UdpStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBIPGLOBALPROPERTIES_GETUDPIPV6STATISTICS_OFFSET))(this);
		}
	};
}
