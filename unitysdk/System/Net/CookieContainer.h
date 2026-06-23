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

#define SYSTEM_NET_COOKIECONTAINER_ADDREMOVEDOMAIN_OFFSET UNITYSDK_OFFSET(0x1BECB930)
#define SYSTEM_NET_COOKIECONTAINER_ADD_1_OFFSET UNITYSDK_OFFSET(0x1BECB010)
#define SYSTEM_NET_COOKIECONTAINER_ADD_2_OFFSET UNITYSDK_OFFSET(0x1BECBBE0)
#define SYSTEM_NET_COOKIECONTAINER_ADD_3_OFFSET UNITYSDK_OFFSET(0x1BECBF10)
#define SYSTEM_NET_COOKIECONTAINER_ADD_4_OFFSET UNITYSDK_OFFSET(0x1BECC0C0)
#define SYSTEM_NET_COOKIECONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x1BECA560)
#define SYSTEM_NET_COOKIECONTAINER_AGECOOKIES_OFFSET UNITYSDK_OFFSET(0x1BEC49C0)
#define SYSTEM_NET_COOKIECONTAINER_BUILDCOOKIECOLLECTIONFROMDOMAINMATCHES_OFFSET UNITYSDK_OFFSET(0x1BECD320)
#define SYSTEM_NET_COOKIECONTAINER_COOKIECUTTER_OFFSET UNITYSDK_OFFSET(0x1BECC540)
#define SYSTEM_NET_COOKIECONTAINER_EXPIRECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1BECBA40)
#define SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_1_OFFSET UNITYSDK_OFFSET(0x1BECE8D0)
#define SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_OFFSET UNITYSDK_OFFSET(0x1BECE830)
#define SYSTEM_NET_COOKIECONTAINER_GETCOOKIES_OFFSET UNITYSDK_OFFSET(0x1BECCD90)
#define SYSTEM_NET_COOKIECONTAINER_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1BEC4860)
#define SYSTEM_NET_COOKIECONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BECA430)
#define SYSTEM_NET_COOKIECONTAINER_GET_MAXCOOKIESIZE_OFFSET UNITYSDK_OFFSET(0x1BECA440)
#define SYSTEM_NET_COOKIECONTAINER_GET_PERDOMAINCAPACITY_OFFSET UNITYSDK_OFFSET(0x1BECA4C0)
#define SYSTEM_NET_COOKIECONTAINER_INTERNALGETCOOKIES_OFFSET UNITYSDK_OFFSET(0x1BECCE30)
#define SYSTEM_NET_COOKIECONTAINER_ISLOCALDOMAIN_OFFSET UNITYSDK_OFFSET(0x1BECAA50)
#define SYSTEM_NET_COOKIECONTAINER_MERGEUPDATECOLLECTIONS_OFFSET UNITYSDK_OFFSET(0x1BECE5E0)
#define SYSTEM_NET_COOKIECONTAINER_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0x1BECEC80)
#define SYSTEM_NET_COOKIECONTAINER_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1BEC4870)
#define SYSTEM_NET_COOKIECONTAINER_SET_MAXCOOKIESIZE_OFFSET UNITYSDK_OFFSET(0x1BECA450)
#define SYSTEM_NET_COOKIECONTAINER_SET_PERDOMAINCAPACITY_OFFSET UNITYSDK_OFFSET(0x1BECA4D0)
#define SYSTEM_NET_COOKIECONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BECED60)
#define SYSTEM_NET_COOKIECONTAINER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEC45F0)
#define SYSTEM_NET_COOKIECONTAINER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BEC4670)
#define SYSTEM_NET_COOKIECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC44B0)

namespace System::Net
{
	inline static constexpr unsigned int CookieContainer_TypeDefinitionIndex = 3423;

	class CookieContainer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Net::HeaderVariantInfo>** StaticGet_HeaderInfo()
		{
			return (::Il2CppArray<::System::Net::HeaderVariantInfo>**)Il2CppClass::FromTypeDefinitionIndex(CookieContainer_TypeDefinitionIndex)->GetStaticField(0x3690);
		}
		// static const ::System::Int32 DefaultCookieLimit = 0x12C; // 0x0
		// static const ::System::Int32 DefaultPerDomainCookieLimit = 0x14; // 0x0
		// static const ::System::Int32 DefaultCookieLengthLimit = 0x1000; // 0x0
		::System::String* m_fqdnMyDomain; // 0x10
		::System::Collections::Hashtable* m_domainTable; // 0x18
		::System::Int32 m_maxCookies; // 0x20
		::System::Int32 m_maxCookiesPerDomain; // 0x24
		::System::Int32 m_maxCookieSize; // 0x28
		::System::Int32 m_count; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER__CTOR_1_OFFSET))(this, capacity);
		}

		::System::Void _ctor_2(::System::Int32 capacity, ::System::Int32 perDomainCapacity, ::System::Int32 maxCookieSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER__CTOR_2_OFFSET))(this, capacity, perDomainCapacity, maxCookieSize);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER__CCTOR_OFFSET))();
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_SET_CAPACITY_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_MaxCookieSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_GET_MAXCOOKIESIZE_OFFSET))(this);
		}

		::System::Void set_MaxCookieSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_SET_MAXCOOKIESIZE_OFFSET))(this, value);
		}

		::System::Int32 get_PerDomainCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_GET_PERDOMAINCAPACITY_OFFSET))(this);
		}

		::System::Void set_PerDomainCapacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_SET_PERDOMAINCAPACITY_OFFSET))(this, value);
		}

		::System::Void Add(::System::Net::Cookie* cookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cookie*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ADD_OFFSET))(this, cookie);
		}

		::System::Void AddRemoveDomain(::System::String* key, ::System::Net::PathList* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::PathList*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ADDREMOVEDOMAIN_OFFSET))(this, key, value);
		}

		::System::Void Add_1(::System::Net::Cookie* cookie, ::System::Boolean throwOnError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cookie*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ADD_1_OFFSET))(this, cookie, throwOnError);
		}

		::System::Boolean AgeCookies(::System::String* domain)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_AGECOOKIES_OFFSET))(this, domain);
		}

		::System::Int32 ExpireCollection(::System::Net::CookieCollection* cc)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Net::CookieCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_EXPIRECOLLECTION_OFFSET))(this, cc);
		}

		::System::Void Add_2(::System::Net::CookieCollection* cookies)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ADD_2_OFFSET))(this, cookies);
		}

		::System::Boolean IsLocalDomain(::System::String* host)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ISLOCALDOMAIN_OFFSET))(this, host);
		}

		::System::Void Add_3(::System::Uri* uri, ::System::Net::Cookie* cookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Net::Cookie*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ADD_3_OFFSET))(this, uri, cookie);
		}

		::System::Void Add_4(::System::Uri* uri, ::System::Net::CookieCollection* cookies)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Net::CookieCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ADD_4_OFFSET))(this, uri, cookies);
		}

		::System::Net::CookieCollection* CookieCutter(::System::Uri* uri, ::System::String* headerName, ::System::String* setCookieHeader, ::System::Boolean isThrow)
		{
			return ((::System::Net::CookieCollection*(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_COOKIECUTTER_OFFSET))(this, uri, headerName, setCookieHeader, isThrow);
		}

		::System::Net::CookieCollection* GetCookies(::System::Uri* uri)
		{
			return ((::System::Net::CookieCollection*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_GETCOOKIES_OFFSET))(this, uri);
		}

		::System::Net::CookieCollection* InternalGetCookies(::System::Uri* uri)
		{
			return ((::System::Net::CookieCollection*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_INTERNALGETCOOKIES_OFFSET))(this, uri);
		}

		::System::Void BuildCookieCollectionFromDomainMatches(::System::Uri* uri, ::System::Boolean isSecure, ::System::Int32 port, ::System::Net::CookieCollection* cookies, ::System::Collections::Generic::List_1<::System::String*>* domainAttribute, ::System::Boolean matchOnlyPlainCookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Boolean, ::System::Int32, ::System::Net::CookieCollection*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_BUILDCOOKIECOLLECTIONFROMDOMAINMATCHES_OFFSET))(this, uri, isSecure, port, cookies, domainAttribute, matchOnlyPlainCookie);
		}

		::System::Void MergeUpdateCollections(::System::Net::CookieCollection* destination, ::System::Net::CookieCollection* source, ::System::Int32 port, ::System::Boolean isSecure, ::System::Boolean isPlainOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieCollection*, ::System::Net::CookieCollection*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_MERGEUPDATECOLLECTIONS_OFFSET))(this, destination, source, port, isSecure, isPlainOnly);
		}

		::System::String* GetCookieHeader(::System::Uri* uri)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_OFFSET))(this, uri);
		}

		::System::String* GetCookieHeader_1(::System::Uri* uri, ::System::String*& optCookie2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_1_OFFSET))(this, uri, optCookie2);
		}

		::System::Void SetCookies(::System::Uri* uri, ::System::String* cookieHeader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_SETCOOKIES_OFFSET))(this, uri, cookieHeader);
		}
	};
}
