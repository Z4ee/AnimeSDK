#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CustomYieldInstruction.h"

namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_WWW_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F0152D0)
#define UNITYENGINE_WWW_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1F015160)
#define UNITYENGINE_WWW_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1F015280)
#define UNITYENGINE_WWW_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0x1F0152A0)
#define UNITYENGINE_WWW__CTOR_OFFSET UNITYSDK_OFFSET(0x1F015120)

namespace UnityEngine
{
	inline static constexpr unsigned int WWW_TypeDefinitionIndex = 6026;

	class WWW : public ::UnityEngine::CustomYieldInstruction
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* _uwr; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_GET_ERROR_OFFSET))(this);
		}

		::System::Boolean get_isDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_GET_ISDONE_OFFSET))(this);
		}

		::System::Boolean get_keepWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_GET_KEEPWAITING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWW_DISPOSE_OFFSET))(this);
		}
	};
}
