#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CustomYieldInstruction.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_WWW_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B40BCA0)
#define UNITYENGINE_WWW_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1B40B700)
#define UNITYENGINE_WWW_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1B40B820)
#define UNITYENGINE_WWW_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0x1B40BC70)
#define UNITYENGINE_WWW_GET_RESPONSEHEADERS_OFFSET UNITYSDK_OFFSET(0x1B40B840)
#define UNITYENGINE_WWW_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B40BAA0)
#define UNITYENGINE_WWW_GET_URL_OFFSET UNITYSDK_OFFSET(0x1B40BC50)
#define UNITYENGINE_WWW_WAITUNTILDONEIFPOSSIBLE_OFFSET UNITYSDK_OFFSET(0x1B40BB10)
#define UNITYENGINE_WWW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B40B460)
#define UNITYENGINE_WWW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B40B420)

namespace UnityEngine
{
	inline static constexpr unsigned int WWW_TypeDefinitionIndex = 6276;

	class WWW : public ::UnityEngine::CustomYieldInstruction
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* _uwr; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _responseHeaders; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW__CTOR_1_OFFSET))(this, a1, a2, a3);
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
