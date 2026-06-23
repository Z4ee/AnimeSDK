#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Security::Authentication::ExtendedProtection { class ServiceNameCollection; }

#define SYSTEM_NET_SERVICENAMESTORE_ADDSINGLESERVICENAME_OFFSET UNITYSDK_OFFSET(0x1C2EF340)
#define SYSTEM_NET_SERVICENAMESTORE_ADD_OFFSET UNITYSDK_OFFSET(0x1C2EF3E0)
#define SYSTEM_NET_SERVICENAMESTORE_BUILDSERVICENAMES_OFFSET UNITYSDK_OFFSET(0x1C2EF4D0)
#define SYSTEM_NET_SERVICENAMESTORE_BUILDSIMPLESERVICENAME_OFFSET UNITYSDK_OFFSET(0x1C2EF9F0)
#define SYSTEM_NET_SERVICENAMESTORE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C2EFA40)
#define SYSTEM_NET_SERVICENAMESTORE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C2EF3C0)
#define SYSTEM_NET_SERVICENAMESTORE_EXTRACTHOSTNAME_OFFSET UNITYSDK_OFFSET(0x1C2EFA90)
#define SYSTEM_NET_SERVICENAMESTORE_GET_SERVICENAMES_OFFSET UNITYSDK_OFFSET(0x1C2E8820)
#define SYSTEM_NET_SERVICENAMESTORE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C2EF920)
#define SYSTEM_NET_SERVICENAMESTORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E8400)

namespace System::Net
{
	inline static constexpr unsigned int ServiceNameStore_TypeDefinitionIndex = 3393;

	class ServiceNameStore : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* serviceNames; // 0x10
		::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* serviceNameCollection; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICENAMESTORE__CTOR_OFFSET))(this);
		}

		::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* get_ServiceNames()
		{
			return ((::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICENAMESTORE_GET_SERVICENAMES_OFFSET))(this);
		}

		::System::Boolean AddSingleServiceName(::System::String* spn)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICENAMESTORE_ADDSINGLESERVICENAME_OFFSET))(this, spn);
		}

		::System::Boolean Add(::System::String* uriPrefix)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICENAMESTORE_ADD_OFFSET))(this, uriPrefix);
		}

		::System::Boolean Remove(::System::String* uriPrefix)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICENAMESTORE_REMOVE_OFFSET))(this, uriPrefix);
		}

		::System::Boolean Contains(::System::String* newServiceName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICENAMESTORE_CONTAINS_OFFSET))(this, newServiceName);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICENAMESTORE_CLEAR_OFFSET))(this);
		}

		::System::String* ExtractHostname(::System::String* uriPrefix, ::System::Boolean allowInvalidUriStrings)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICENAMESTORE_EXTRACTHOSTNAME_OFFSET))(this, uriPrefix, allowInvalidUriStrings);
		}

		::System::String* BuildSimpleServiceName(::System::String* uriPrefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICENAMESTORE_BUILDSIMPLESERVICENAME_OFFSET))(this, uriPrefix);
		}

		::Il2CppArray<::System::String*>* BuildServiceNames(::System::String* uriPrefix)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICENAMESTORE_BUILDSERVICENAMES_OFFSET))(this, uriPrefix);
		}
	};
}
