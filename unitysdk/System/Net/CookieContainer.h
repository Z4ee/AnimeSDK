#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HeaderVariantInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class Cookie; }
namespace System::Net { class CookieCollection; }
namespace System::Net { class PathList; }

#define SYSTEM_NET_COOKIECONTAINER_ADDREMOVEDOMAIN_OFFSET UNITYSDK_OFFSET(0x1AF5C8D0)
#define SYSTEM_NET_COOKIECONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x1AF5C9E0)
#define SYSTEM_NET_COOKIECONTAINER_AGECOOKIES_OFFSET UNITYSDK_OFFSET(0x1AF5D360)
#define SYSTEM_NET_COOKIECONTAINER_BUILDCOOKIECOLLECTIONFROMDOMAINMATCHES_OFFSET UNITYSDK_OFFSET(0x1AF62BE0)
#define SYSTEM_NET_COOKIECONTAINER_COOKIECUTTER_OFFSET UNITYSDK_OFFSET(0x1AF61EB0)
#define SYSTEM_NET_COOKIECONTAINER_EXPIRECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1AF61760)
#define SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_1_OFFSET UNITYSDK_OFFSET(0x1AF63DC0)
#define SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_OFFSET UNITYSDK_OFFSET(0x1AF63D40)
#define SYSTEM_NET_COOKIECONTAINER_INTERNALGETCOOKIES_OFFSET UNITYSDK_OFFSET(0x1AF62620)
#define SYSTEM_NET_COOKIECONTAINER_ISLOCALDOMAIN_OFFSET UNITYSDK_OFFSET(0x1AF619A0)
#define SYSTEM_NET_COOKIECONTAINER_MERGEUPDATECOLLECTIONS_OFFSET UNITYSDK_OFFSET(0x1AF63A40)
#define SYSTEM_NET_COOKIECONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF641A0)
#define SYSTEM_NET_COOKIECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF5C810)

namespace System::Net
{
	inline static constexpr unsigned int CookieContainer_TypeDefinitionIndex = 2793;

	class CookieContainer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Net::HeaderVariantInfo>** StaticGet_HeaderInfo()
		{
			return (::Il2CppArray<::System::Net::HeaderVariantInfo>**)Il2CppClass::FromTypeDefinitionIndex(CookieContainer_TypeDefinitionIndex)->GetStaticField(0x241F0);
		}
		::System::Collections::Hashtable* m_domainTable; // 0x10
		::System::String* m_fqdnMyDomain; // 0x18
		::System::Int32 m_maxCookies; // 0x20
		::System::Int32 m_maxCookieSize; // 0x24
		::System::Int32 m_count; // 0x28
		::System::Int32 m_maxCookiesPerDomain; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER__CCTOR_OFFSET))();
		}

		::System::Void AddRemoveDomain(::System::String* a1, ::System::Net::PathList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::PathList*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ADDREMOVEDOMAIN_OFFSET))(this, a1, a2);
		}

		::System::Void Add(::System::Net::Cookie* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cookie*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ADD_OFFSET))(this, a1, a2);
		}

		::System::Boolean AgeCookies(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_AGECOOKIES_OFFSET))(this, a1);
		}

		::System::Int32 ExpireCollection(::System::Net::CookieCollection* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::CookieCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_EXPIRECOLLECTION_OFFSET))(this, a1);
		}

		::System::Boolean IsLocalDomain(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ISLOCALDOMAIN_OFFSET))(this, a1);
		}

		::System::Net::CookieCollection* CookieCutter(::System::Uri* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Net::CookieCollection*(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_COOKIECUTTER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Net::CookieCollection* InternalGetCookies(::System::Uri* a1)
		{
			return ((::System::Net::CookieCollection*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_INTERNALGETCOOKIES_OFFSET))(this, a1);
		}

		::System::Void BuildCookieCollectionFromDomainMatches(::System::Uri* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Net::CookieCollection* a4, ::System::Collections::Generic::List_1<::System::String*>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Boolean, ::System::Int32, ::System::Net::CookieCollection*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_BUILDCOOKIECOLLECTIONFROMDOMAINMATCHES_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void MergeUpdateCollections(::System::Net::CookieCollection* a1, ::System::Net::CookieCollection* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieCollection*, ::System::Net::CookieCollection*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_MERGEUPDATECOLLECTIONS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* GetCookieHeader(::System::Uri* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_OFFSET))(this, a1);
		}

		::System::String* GetCookieHeader_1(::System::Uri* a1, ::System::String*& a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_1_OFFSET))(this, a1, a2);
		}
	};
}
