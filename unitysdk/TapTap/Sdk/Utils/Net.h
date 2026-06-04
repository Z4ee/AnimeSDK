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

#define TAPTAP_SDK_UTILS_NET_DICTTOQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x1B02AF00)
#define TAPTAP_SDK_UTILS_NET_GETASYNC_OFFSET UNITYSDK_OFFSET(0x1B023F70)
#define TAPTAP_SDK_UTILS_NET_GETRESPONSECODE_OFFSET UNITYSDK_OFFSET(0x1B02AAC0)
#define TAPTAP_SDK_UTILS_NET_GET_OFFSET UNITYSDK_OFFSET(0x1B02AA30)
#define TAPTAP_SDK_UTILS_NET_PARSERESPONSECODE_OFFSET UNITYSDK_OFFSET(0x1B02AD20)
#define TAPTAP_SDK_UTILS_NET_PARSEURL_OFFSET UNITYSDK_OFFSET(0x1B02B2E0)
#define TAPTAP_SDK_UTILS_NET_POSTASYNC_OFFSET UNITYSDK_OFFSET(0x1B024060)
#define TAPTAP_SDK_UTILS_NET_POST_OFFSET UNITYSDK_OFFSET(0x1B02A9C0)
#define TAPTAP_SDK_UTILS_NET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B02B840)

namespace TapTap::Sdk::Utils
{
	inline static constexpr unsigned int Net_TypeDefinitionIndex = 7086;

	class Net : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET__CTOR_OFFSET))(this);
		}

		::System::Void PostAsync(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3, ::System::Action_1<::System::String*>* a4, ::System::Action_2<::System::Int32, ::System::String*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_POSTASYNC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GetAsync(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3, ::System::Action_1<::System::String*>* a4, ::System::Action_2<::System::Int32, ::System::String*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_GETASYNC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::IEnumerator* Get(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3, ::System::Action_1<::System::String*>* a4, ::System::Action_2<::System::Int32, ::System::String*>* a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_GET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::IEnumerator* Post(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3, ::System::Action_1<::System::String*>* a4, ::System::Action_2<::System::Int32, ::System::String*>* a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_POST_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Int32 GetResponseCode(::UnityEngine::WWW* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::WWW*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_GETRESPONSECODE_OFFSET))(a1);
		}

		static ::System::Int32 ParseResponseCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_PARSERESPONSECODE_OFFSET))(a1);
		}

		static ::System::String* DictToQueryString(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_DICTTOQUERYSTRING_OFFSET))(a1);
		}

		static ::System::Void ParseUrl(::System::String* a1, ::System::String*& a2, ::System::Collections::Specialized::NameValueCollection*& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::Collections::Specialized::NameValueCollection*&))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_PARSEURL_OFFSET))(a1, a2, a3);
		}
	};
}
