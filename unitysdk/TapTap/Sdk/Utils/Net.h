#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace UnityEngine { class WWW; }

#define TAPTAP_SDK_UTILS_NET_DICTTOQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x1BB6E0F0)
#define TAPTAP_SDK_UTILS_NET_GETASYNC_OFFSET UNITYSDK_OFFSET(0x1BB66B90)
#define TAPTAP_SDK_UTILS_NET_GETRESPONSECODE_OFFSET UNITYSDK_OFFSET(0x1BB6DE80)
#define TAPTAP_SDK_UTILS_NET_GET_OFFSET UNITYSDK_OFFSET(0x1BB6DDF0)
#define TAPTAP_SDK_UTILS_NET_PARSERESPONSECODE_OFFSET UNITYSDK_OFFSET(0x1BB6DFC0)
#define TAPTAP_SDK_UTILS_NET_PARSEURL_OFFSET UNITYSDK_OFFSET(0x1BB6E560)
#define TAPTAP_SDK_UTILS_NET_POSTASYNC_OFFSET UNITYSDK_OFFSET(0x1BB66C80)
#define TAPTAP_SDK_UTILS_NET_POST_OFFSET UNITYSDK_OFFSET(0x1BB6DD80)
#define TAPTAP_SDK_UTILS_NET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB6EAB0)

namespace TapTap::Sdk::Utils
{
	inline static constexpr unsigned int Net_TypeDefinitionIndex = 9489;

	class Net : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET__CTOR_OFFSET))(this);
		}

		::System::Void PostAsync(::System::String* url, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* queryParams, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* formParams, ::System::Action_1<::System::String*>* methodForResult, ::System::Action_2<::System::Int32, ::System::String*>* methodForError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_POSTASYNC_OFFSET))(this, url, queryParams, formParams, methodForResult, methodForError);
		}

		::System::Void GetAsync(::System::String* url, ::System::String* authorization, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* queryParams, ::System::Action_1<::System::String*>* methodForResult, ::System::Action_2<::System::Int32, ::System::String*>* methodForError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_GETASYNC_OFFSET))(this, url, authorization, queryParams, methodForResult, methodForError);
		}

		::System::Collections::IEnumerator* Get(::System::String* url, ::System::String* authorization, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* queryParams, ::System::Action_1<::System::String*>* methodForResult, ::System::Action_2<::System::Int32, ::System::String*>* methodForError)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_GET_OFFSET))(this, url, authorization, queryParams, methodForResult, methodForError);
		}

		::System::Collections::IEnumerator* Post(::System::String* url, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* queryParams, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* formParams, ::System::Action_1<::System::String*>* methodForResult, ::System::Action_2<::System::Int32, ::System::String*>* methodForError)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_POST_OFFSET))(this, url, queryParams, formParams, methodForResult, methodForError);
		}

		static ::System::Int32 GetResponseCode(::UnityEngine::WWW* request)
		{
			return ((::System::Int32(*)(::UnityEngine::WWW*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_GETRESPONSECODE_OFFSET))(request);
		}

		static ::System::Int32 ParseResponseCode(::System::String* statusLine)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_PARSERESPONSECODE_OFFSET))(statusLine);
		}

		static ::System::String* DictToQueryString(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* dict)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_DICTTOQUERYSTRING_OFFSET))(dict);
		}

		static ::System::Void ParseUrl(::System::String* url, ::System::String*& baseUrl, ::System::Collections::Specialized::NameValueCollection*& nvc)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::Collections::Specialized::NameValueCollection*&))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_PARSEURL_OFFSET))(url, baseUrl, nvc);
		}
	};
}
