#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CustomYieldInstruction.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class Encoding; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_WWW_CREATETEXTUREFROMDOWNLOADEDDATA_OFFSET UNITYSDK_OFFSET(0x1FC68220)
#define UNITYENGINE_WWW_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FC68450)
#define UNITYENGINE_WWW_ESCAPEURL_1_OFFSET UNITYSDK_OFFSET(0x1FC67B30)
#define UNITYENGINE_WWW_ESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1FC67A60)
#define UNITYENGINE_WWW_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1FC67F30)
#define UNITYENGINE_WWW_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1FC68080)
#define UNITYENGINE_WWW_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0x1FC68420)
#define UNITYENGINE_WWW_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1FC683F0)
#define UNITYENGINE_WWW_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1FC680A0)
#define UNITYENGINE_WWW_GET_URL_OFFSET UNITYSDK_OFFSET(0x1FC68400)
#define UNITYENGINE_WWW_WAITUNTILDONEIFPOSSIBLE_OFFSET UNITYSDK_OFFSET(0x1FC68130)
#define UNITYENGINE_WWW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC67BF0)
#define UNITYENGINE_WWW__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC67B40)

namespace UnityEngine
{
	inline static constexpr unsigned int WWW_TypeDefinitionIndex = 7802;

	class WWW : public ::UnityEngine::CustomYieldInstruction
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* _uwr; // 0x10

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
