#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkAccess.h"
#include "unitysdk/System/Net/TransportType.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_NET_SOCKETPERMISSION_ADDPERMISSION_OFFSET UNITYSDK_OFFSET(0x18FC2020)
#define SYSTEM_NET_SOCKETPERMISSION_COPY_OFFSET UNITYSDK_OFFSET(0x18FC2190)
#define SYSTEM_NET_SOCKETPERMISSION_FROMXML_1_OFFSET UNITYSDK_OFFSET(0x18FC43C0)
#define SYSTEM_NET_SOCKETPERMISSION_FROMXML_OFFSET UNITYSDK_OFFSET(0x18FC3DD0)
#define SYSTEM_NET_SOCKETPERMISSION_GET_ACCEPTLIST_OFFSET UNITYSDK_OFFSET(0x18FC2130)
#define SYSTEM_NET_SOCKETPERMISSION_GET_CONNECTLIST_OFFSET UNITYSDK_OFFSET(0x18FC2160)
#define SYSTEM_NET_SOCKETPERMISSION_INTERSECTEMPTY_OFFSET UNITYSDK_OFFSET(0x18FC26D0)
#define SYSTEM_NET_SOCKETPERMISSION_INTERSECT_1_OFFSET UNITYSDK_OFFSET(0x18FC2740)
#define SYSTEM_NET_SOCKETPERMISSION_INTERSECT_OFFSET UNITYSDK_OFFSET(0x18FC2400)
#define SYSTEM_NET_SOCKETPERMISSION_ISSUBSETOF_1_OFFSET UNITYSDK_OFFSET(0x18FC31B0)
#define SYSTEM_NET_SOCKETPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x18FC3010)
#define SYSTEM_NET_SOCKETPERMISSION_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x18FC3860)
#define SYSTEM_NET_SOCKETPERMISSION_TOXML_1_OFFSET UNITYSDK_OFFSET(0x18FC39F0)
#define SYSTEM_NET_SOCKETPERMISSION_TOXML_OFFSET UNITYSDK_OFFSET(0x18FC3870)
#define SYSTEM_NET_SOCKETPERMISSION_UNION_OFFSET UNITYSDK_OFFSET(0x18FC4A60)
#define SYSTEM_NET_SOCKETPERMISSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18FC1DE0)
#define SYSTEM_NET_SOCKETPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC1CB0)

namespace System::Net
{
	inline static constexpr unsigned int SocketPermission_TypeDefinitionIndex = 3561;

	class SocketPermission : public ::System::Security::CodeAccessPermission
	{
	public:
		// static const ::System::Int32 AllPorts = 0xFFFFFFFF; // 0x0
		::System::Collections::ArrayList* m_acceptList; // 0x10
		::System::Collections::ArrayList* m_connectList; // 0x18
		::System::Boolean m_noRestriction; // 0x20

		::System::Void _ctor(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION__CTOR_OFFSET))(this, state);
		}

		::System::Void _ctor_1(::System::Net::NetworkAccess access, ::System::Net::TransportType transport, ::System::String* hostName, ::System::Int32 portNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkAccess, ::System::Net::TransportType, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION__CTOR_1_OFFSET))(this, access, transport, hostName, portNumber);
		}

		::System::Collections::IEnumerator* get_AcceptList()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_GET_ACCEPTLIST_OFFSET))(this);
		}

		::System::Collections::IEnumerator* get_ConnectList()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_GET_CONNECTLIST_OFFSET))(this);
		}

		::System::Void AddPermission(::System::Net::NetworkAccess access, ::System::Net::TransportType transport, ::System::String* hostName, ::System::Int32 portNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkAccess, ::System::Net::TransportType, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_ADDPERMISSION_OFFSET))(this, access, transport, hostName, portNumber);
		}

		::System::Security::IPermission* Copy()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_COPY_OFFSET))(this);
		}

		::System::Security::IPermission* Intersect(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_INTERSECT_OFFSET))(this, target);
		}

		::System::Boolean IntersectEmpty(::System::Net::SocketPermission* permission)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::SocketPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_INTERSECTEMPTY_OFFSET))(this, permission);
		}

		::System::Void Intersect_1(::System::Collections::ArrayList* list1, ::System::Collections::ArrayList* list2, ::System::Collections::ArrayList* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Collections::ArrayList*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_INTERSECT_1_OFFSET))(this, list1, list2, result);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_ISSUBSETOF_OFFSET))(this, target);
		}

		::System::Boolean IsSubsetOf_1(::System::Collections::ArrayList* list1, ::System::Collections::ArrayList* list2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_ISSUBSETOF_1_OFFSET))(this, list1, list2);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_TOXML_OFFSET))(this);
		}

		::System::Void ToXml_1(::System::Security::SecurityElement* root, ::System::String* childName, ::System::Collections::IEnumerator* enumerator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*, ::System::String*, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_TOXML_1_OFFSET))(this, root, childName, enumerator);
		}

		::System::Void FromXml(::System::Security::SecurityElement* securityElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_FROMXML_OFFSET))(this, securityElement);
		}

		::System::Void FromXml_1(::System::Collections::ArrayList* endpoints, ::System::Net::NetworkAccess access)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Net::NetworkAccess))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_FROMXML_1_OFFSET))(this, endpoints, access);
		}

		::System::Security::IPermission* Union(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETPERMISSION_UNION_OFFSET))(this, target);
		}
	};
}
