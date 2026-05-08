#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CustomYieldInstruction.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class Encoding; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_WWW_CREATETEXTUREFROMDOWNLOADEDDATA_OFFSET UNITYSDK_OFFSET(0x1C556DC0)
#define UNITYENGINE_WWW_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C556FF0)
#define UNITYENGINE_WWW_ESCAPEURL_1_OFFSET UNITYSDK_OFFSET(0x1C556470)
#define UNITYENGINE_WWW_ESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1C5563A0)
#define UNITYENGINE_WWW_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1C556870)
#define UNITYENGINE_WWW_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1C5569C0)
#define UNITYENGINE_WWW_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0x1C556FC0)
#define UNITYENGINE_WWW_GET_RESPONSEHEADERS_OFFSET UNITYSDK_OFFSET(0x1C5569E0)
#define UNITYENGINE_WWW_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1C556F90)
#define UNITYENGINE_WWW_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1C556C40)
#define UNITYENGINE_WWW_GET_URL_OFFSET UNITYSDK_OFFSET(0x1C556FA0)
#define UNITYENGINE_WWW_WAITUNTILDONEIFPOSSIBLE_OFFSET UNITYSDK_OFFSET(0x1C556CD0)
#define UNITYENGINE_WWW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C556530)
#define UNITYENGINE_WWW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C556480)

namespace UnityEngine
{
	inline static constexpr unsigned int WWW_TypeDefinitionIndex = 7689;

	class WWW : public ::UnityEngine::CustomYieldInstruction
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* _uwr; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _responseHeaders; // 0x18

		::System::Void _ctor(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW__CTOR_OFFSET))(this, url);
		}

		::System::Void _ctor_1(::System::String* url, ::Il2CppArray<::System::Byte>* postData, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW__CTOR_1_OFFSET))(this, url, postData, headers);
		}

		static ::System::String* EscapeURL(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_ESCAPEURL_OFFSET))(s);
		}

		static ::System::String* EscapeURL_1(::System::String* s, ::System::Text::Encoding* e)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_ESCAPEURL_1_OFFSET))(s, e);
		}

		::System::String* get_error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_GET_ERROR_OFFSET))(this);
		}

		::System::Boolean get_isDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_GET_ISDONE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_responseHeaders()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_GET_RESPONSEHEADERS_OFFSET))(this);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_GET_TEXT_OFFSET))(this);
		}

		::UnityEngine::Texture2D* CreateTextureFromDownloadedData(::System::Boolean markNonReadable)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_CREATETEXTUREFROMDOWNLOADEDDATA_OFFSET))(this, markNonReadable);
		}

		::UnityEngine::Texture2D* get_texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_GET_TEXTURE_OFFSET))(this);
		}

		::System::String* get_url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_GET_URL_OFFSET))(this);
		}

		::System::Boolean get_keepWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_GET_KEEPWAITING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_DISPOSE_OFFSET))(this);
		}

		::System::Boolean WaitUntilDoneIfPossible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_WAITUNTILDONEIFPOSSIBLE_OFFSET))(this);
		}
	};
}
