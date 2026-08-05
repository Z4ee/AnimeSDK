#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Text::RegularExpressions { class Regex; }

#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_MAKEINITIALURL_OFFSET UNITYSDK_OFFSET(0x1F83ED20)
#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_MAKEURISTRING_OFFSET UNITYSDK_OFFSET(0x1F844260)
#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_REDIRECTTO_OFFSET UNITYSDK_OFFSET(0x1F8440A0)
#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_URLDECODE_OFFSET UNITYSDK_OFFSET(0x1F8447A0)
#define UNITYENGINEINTERNAL_WEBREQUESTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F844A20)

namespace UnityEngineInternal
{
	inline static constexpr unsigned int WebRequestUtils_TypeDefinitionIndex = 6706;

	class WebRequestUtils : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_domainRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(WebRequestUtils_TypeDefinitionIndex)->GetStaticField(0x5B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS__CCTOR_OFFSET))();
		}

		static ::System::String* RedirectTo(::System::String* baseUri, ::System::String* redirectUri)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_REDIRECTTO_OFFSET))(baseUri, redirectUri);
		}

		static ::System::String* MakeInitialUrl(::System::String* targetUrl, ::System::String* localUrl)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_MAKEINITIALURL_OFFSET))(targetUrl, localUrl);
		}

		static ::System::String* MakeUriString(::System::Uri* targetUri, ::System::String* targetUrl, ::System::Boolean prependProtocol)
		{
			return ((::System::String*(*)(::System::Uri*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_MAKEURISTRING_OFFSET))(targetUri, targetUrl, prependProtocol);
		}

		static ::System::String* URLDecode(::System::String* encoded)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_URLDECODE_OFFSET))(encoded);
		}
	};
}
