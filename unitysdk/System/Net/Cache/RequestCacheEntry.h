#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Collections::Specialized { class StringCollection; }

#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_ENTRYMETADATA_OFFSET UNITYSDK_OFFSET(0x1C6D1610)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_EXPIRESUTC_OFFSET UNITYSDK_OFFSET(0x1C6D1510)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_HITCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6D15B0)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_ISPARTIALENTRY_OFFSET UNITYSDK_OFFSET(0x1C6D15F0)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_ISPRIVATEENTRY_OFFSET UNITYSDK_OFFSET(0x1C6D14D0)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_LASTACCESSEDUTC_OFFSET UNITYSDK_OFFSET(0x1C6D1530)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_LASTMODIFIEDUTC_OFFSET UNITYSDK_OFFSET(0x1C6D1550)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_LASTSYNCHRONIZEDUTC_OFFSET UNITYSDK_OFFSET(0x1C6D1570)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_MAXSTALE_OFFSET UNITYSDK_OFFSET(0x1C6D1590)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_STREAMSIZE_OFFSET UNITYSDK_OFFSET(0x1C6D14F0)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_SYSTEMMETADATA_OFFSET UNITYSDK_OFFSET(0x1C6D1630)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_USAGECOUNT_OFFSET UNITYSDK_OFFSET(0x1C6D15D0)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_ENTRYMETADATA_OFFSET UNITYSDK_OFFSET(0x1C6D1620)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_EXPIRESUTC_OFFSET UNITYSDK_OFFSET(0x1C6D1520)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_HITCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6D15C0)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_ISPARTIALENTRY_OFFSET UNITYSDK_OFFSET(0x1C6D1600)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_ISPRIVATEENTRY_OFFSET UNITYSDK_OFFSET(0x1C6D14E0)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_LASTACCESSEDUTC_OFFSET UNITYSDK_OFFSET(0x1C6D1540)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_LASTMODIFIEDUTC_OFFSET UNITYSDK_OFFSET(0x1C6D1560)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_LASTSYNCHRONIZEDUTC_OFFSET UNITYSDK_OFFSET(0x1C6D1580)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_MAXSTALE_OFFSET UNITYSDK_OFFSET(0x1C6D15A0)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_STREAMSIZE_OFFSET UNITYSDK_OFFSET(0x1C6D1500)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_SYSTEMMETADATA_OFFSET UNITYSDK_OFFSET(0x1C6D1640)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_USAGECOUNT_OFFSET UNITYSDK_OFFSET(0x1C6D15E0)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6D1650)
#define SYSTEM_NET_CACHE_REQUESTCACHEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D14B0)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheEntry_TypeDefinitionIndex = 3861;

	class RequestCacheEntry : public ::System::Object
	{
	public:
		::System::Collections::Specialized::StringCollection* m_SystemMetadata; // 0x10
		::System::Collections::Specialized::StringCollection* m_EntryMetadata; // 0x18
		::System::Int32 m_HitCount; // 0x20
		::System::DateTime m_ExpiresUtc; // 0x28
		::System::DateTime m_LastSynchronizedUtc; // 0x30
		::System::TimeSpan m_MaxStale; // 0x38
		::System::DateTime m_LastAccessedUtc; // 0x40
		::System::Int64 m_StreamSize; // 0x48
		::System::DateTime m_LastModifiedUtc; // 0x50
		::System::Boolean m_IsPartialEntry; // 0x58
		::System::Boolean m_IsPrivateEntry; // 0x59
		::System::Int32 m_UsageCount; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPrivateEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_ISPRIVATEENTRY_OFFSET))(this);
		}

		::System::Void set_IsPrivateEntry(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_ISPRIVATEENTRY_OFFSET))(this, value);
		}

		::System::Int64 get_StreamSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_STREAMSIZE_OFFSET))(this);
		}

		::System::Void set_StreamSize(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_STREAMSIZE_OFFSET))(this, value);
		}

		::System::DateTime get_ExpiresUtc()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_EXPIRESUTC_OFFSET))(this);
		}

		::System::Void set_ExpiresUtc(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_EXPIRESUTC_OFFSET))(this, value);
		}

		::System::DateTime get_LastAccessedUtc()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_LASTACCESSEDUTC_OFFSET))(this);
		}

		::System::Void set_LastAccessedUtc(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_LASTACCESSEDUTC_OFFSET))(this, value);
		}

		::System::DateTime get_LastModifiedUtc()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_LASTMODIFIEDUTC_OFFSET))(this);
		}

		::System::Void set_LastModifiedUtc(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_LASTMODIFIEDUTC_OFFSET))(this, value);
		}

		::System::DateTime get_LastSynchronizedUtc()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_LASTSYNCHRONIZEDUTC_OFFSET))(this);
		}

		::System::Void set_LastSynchronizedUtc(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_LASTSYNCHRONIZEDUTC_OFFSET))(this, value);
		}

		::System::TimeSpan get_MaxStale()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_MAXSTALE_OFFSET))(this);
		}

		::System::Void set_MaxStale(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_MAXSTALE_OFFSET))(this, value);
		}

		::System::Int32 get_HitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_HITCOUNT_OFFSET))(this);
		}

		::System::Void set_HitCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_HITCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_UsageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_USAGECOUNT_OFFSET))(this);
		}

		::System::Void set_UsageCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_USAGECOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsPartialEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_ISPARTIALENTRY_OFFSET))(this);
		}

		::System::Void set_IsPartialEntry(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_ISPARTIALENTRY_OFFSET))(this, value);
		}

		::System::Collections::Specialized::StringCollection* get_EntryMetadata()
		{
			return ((::System::Collections::Specialized::StringCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_ENTRYMETADATA_OFFSET))(this);
		}

		::System::Void set_EntryMetadata(::System::Collections::Specialized::StringCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::StringCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_ENTRYMETADATA_OFFSET))(this, value);
		}

		::System::Collections::Specialized::StringCollection* get_SystemMetadata()
		{
			return ((::System::Collections::Specialized::StringCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_GET_SYSTEMMETADATA_OFFSET))(this);
		}

		::System::Void set_SystemMetadata(::System::Collections::Specialized::StringCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::StringCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_SET_SYSTEMMETADATA_OFFSET))(this, value);
		}

		::System::String* ToString(::System::Boolean verbose)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEENTRY_TOSTRING_OFFSET))(this, verbose);
		}
	};
}
