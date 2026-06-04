#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTASYNCOPERATION_SET_WEBREQUEST_OFFSET UNITYSDK_OFFSET(0x1B4095C0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTASYNCOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4095D0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UnityWebRequestAsyncOperation_TypeDefinitionIndex = 5354;

	class UnityWebRequestAsyncOperation : public ::UnityEngine::AsyncOperation
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* _webRequest_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTASYNCOPERATION__CTOR_OFFSET))(this);
		}

		::System::Void set_webRequest(::UnityEngine::Networking::UnityWebRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::UnityWebRequest*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTASYNCOPERATION_SET_WEBREQUEST_OFFSET))(this, a1);
		}
	};
}
