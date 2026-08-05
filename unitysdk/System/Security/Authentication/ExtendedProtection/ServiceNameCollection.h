#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ReadOnlyCollectionBase.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IEnumerable; }

#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_ADDIFNEW_OFFSET UNITYSDK_OFFSET(0x1D480FC0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1D482050)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D481C80)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_MATCH_OFFSET UNITYSDK_OFFSET(0x1D482030)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_MERGE_1_OFFSET UNITYSDK_OFFSET(0x1D481210)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_MERGE_OFFSET UNITYSDK_OFFSET(0x1D481070)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_NORMALIZESERVICENAME_OFFSET UNITYSDK_OFFSET(0x1D481690)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D480BC0)

namespace System::Security::Authentication::ExtendedProtection
{
	inline static constexpr unsigned int ServiceNameCollection_TypeDefinitionIndex = 3150;

	class ServiceNameCollection : public ::System::Collections::ReadOnlyCollectionBase
	{
	public:
		::System::Void _ctor(::System::Collections::ICollection* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION__CTOR_OFFSET))(this, items);
		}

		::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* Merge(::System::String* serviceName)
		{
			return ((::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_MERGE_OFFSET))(this, serviceName);
		}

		::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* Merge_1(::System::Collections::IEnumerable* serviceNames)
		{
			return ((::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*(*)(::PVOID, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_MERGE_1_OFFSET))(this, serviceNames);
		}

		static ::System::Void AddIfNew(::System::Collections::ArrayList* newServiceNames, ::System::String* serviceName)
		{
			return ((::System::Void(*)(::System::Collections::ArrayList*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_ADDIFNEW_OFFSET))(newServiceNames, serviceName);
		}

		static ::System::Boolean Contains(::System::String* searchServiceName, ::System::Collections::ICollection* serviceNames)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_CONTAINS_OFFSET))(searchServiceName, serviceNames);
		}

		::System::Boolean Contains_1(::System::String* searchServiceName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_CONTAINS_1_OFFSET))(this, searchServiceName);
		}

		static ::System::String* NormalizeServiceName(::System::String* inputServiceName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_NORMALIZESERVICENAME_OFFSET))(inputServiceName);
		}

		static ::System::Boolean Match(::System::String* serviceName1, ::System::String* serviceName2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_SERVICENAMECOLLECTION_MATCH_OFFSET))(serviceName1, serviceName2);
		}
	};
}
