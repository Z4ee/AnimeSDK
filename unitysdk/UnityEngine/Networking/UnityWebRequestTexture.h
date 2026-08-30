#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTTEXTURE_GETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1F013CC0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTTEXTURE_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F013BE0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UnityWebRequestTexture_TypeDefinitionIndex = 6023;

	class UnityWebRequestTexture : public ::System::Object
	{
	public:
		static ::UnityEngine::Networking::UnityWebRequest* GetTexture(::System::String* a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTTEXTURE_GETTEXTURE_OFFSET))(a1);
		}

		static ::UnityEngine::Networking::UnityWebRequest* GetTexture_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTTEXTURE_GETTEXTURE_1_OFFSET))(a1, a2);
		}
	};
}
