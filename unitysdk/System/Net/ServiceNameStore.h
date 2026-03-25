#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Security::Authentication::ExtendedProtection { class ServiceNameCollection; }

#define SYSTEM_NET_SERVICENAMESTORE__CTOR_OFFSET UNITYSDK_OFFSET(0x187047F0)

namespace System::Net
{
	inline static constexpr unsigned int ServiceNameStore_TypeDefinitionIndex = 2771;

	class ServiceNameStore : public ::System::Object
	{
	public:
		::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* serviceNameCollection; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* serviceNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICENAMESTORE__CTOR_OFFSET))(this);
		}
	};
}
