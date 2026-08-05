#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class FormatException; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Net { class WebProxyData; }

#define SYSTEM_NET_WEBPROXYDATABUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1D6C8E40)
#define SYSTEM_NET_WEBPROXYDATABUILDER_BYPASSSTRINGESCAPE_OFFSET UNITYSDK_OFFSET(0x1D6C9A60)
#define SYSTEM_NET_WEBPROXYDATABUILDER_CONVERTREGEXRESERVEDCHARS_OFFSET UNITYSDK_OFFSET(0x1D6C9F70)
#define SYSTEM_NET_WEBPROXYDATABUILDER_CREATEINVALIDPROXYSTRINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D6C98E0)
#define SYSTEM_NET_WEBPROXYDATABUILDER_PARSEBYPASSLIST_OFFSET UNITYSDK_OFFSET(0x1D6C9580)
#define SYSTEM_NET_WEBPROXYDATABUILDER_PARSEPROTOCOLPROXIES_OFFSET UNITYSDK_OFFSET(0x1D6C9170)
#define SYSTEM_NET_WEBPROXYDATABUILDER_PARSEPROXYURI_OFFSET UNITYSDK_OFFSET(0x1D6C8FE0)
#define SYSTEM_NET_WEBPROXYDATABUILDER_SETAUTODETECTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D6C98C0)
#define SYSTEM_NET_WEBPROXYDATABUILDER_SETAUTOPROXYURL_OFFSET UNITYSDK_OFFSET(0x1D6C9780)
#define SYSTEM_NET_WEBPROXYDATABUILDER_SETPROXYANDBYPASSLIST_OFFSET UNITYSDK_OFFSET(0x1D6C8E90)
#define SYSTEM_NET_WEBPROXYDATABUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CA1D0)

namespace System::Net
{
	inline static constexpr unsigned int WebProxyDataBuilder_TypeDefinitionIndex = 3404;

	class WebProxyDataBuilder : public ::System::Object
	{
	public:
		// static const ::System::Char addressListDelimiter; // 0x0
		// static const ::System::Char addressListSchemeValueDelimiter; // 0x0
		// static const ::System::Char bypassListDelimiter; // 0x0
		// static const ::System::String* regexReserved; // 0x0
		::System::Net::WebProxyData* m_Result; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXYDATABUILDER__CTOR_OFFSET))(this);
		}

		::System::Net::WebProxyData* Build()
		{
			return ((::System::Net::WebProxyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXYDATABUILDER_BUILD_OFFSET))(this);
		}

		::System::Void SetProxyAndBypassList(::System::String* addressString, ::System::String* bypassListString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXYDATABUILDER_SETPROXYANDBYPASSLIST_OFFSET))(this, addressString, bypassListString);
		}

		::System::Void SetAutoProxyUrl(::System::String* autoConfigUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXYDATABUILDER_SETAUTOPROXYURL_OFFSET))(this, autoConfigUrl);
		}

		::System::Void SetAutoDetectSettings(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXYDATABUILDER_SETAUTODETECTSETTINGS_OFFSET))(this, value);
		}

		static ::System::Uri* ParseProxyUri(::System::String* proxyString)
		{
			return ((::System::Uri*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXYDATABUILDER_PARSEPROXYURI_OFFSET))(proxyString);
		}

		static ::System::Collections::Hashtable* ParseProtocolProxies(::System::String* proxyListString)
		{
			return ((::System::Collections::Hashtable*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXYDATABUILDER_PARSEPROTOCOLPROXIES_OFFSET))(proxyListString);
		}

		static ::System::FormatException* CreateInvalidProxyStringException(::System::String* originalProxyString)
		{
			return ((::System::FormatException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXYDATABUILDER_CREATEINVALIDPROXYSTRINGEXCEPTION_OFFSET))(originalProxyString);
		}

		static ::System::String* BypassStringEscape(::System::String* rawString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXYDATABUILDER_BYPASSSTRINGESCAPE_OFFSET))(rawString);
		}

		static ::System::String* ConvertRegexReservedChars(::System::String* rawString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXYDATABUILDER_CONVERTREGEXRESERVEDCHARS_OFFSET))(rawString);
		}

		static ::System::Collections::ArrayList* ParseBypassList(::System::String* bypassListString, ::System::Boolean& bypassOnLocal)
		{
			return ((::System::Collections::ArrayList*(*)(::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXYDATABUILDER_PARSEBYPASSLIST_OFFSET))(bypassListString, bypassOnLocal);
		}
	};
}
