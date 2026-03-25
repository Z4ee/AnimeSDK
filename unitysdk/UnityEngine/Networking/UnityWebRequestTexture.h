#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTTEXTURE_GETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x18B839F0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTTEXTURE_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x18B83910)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UnityWebRequestTexture_TypeDefinitionIndex = 5984;

	class UnityWebRequestTexture : public ::System::Object
	{
	public:
		static ::UnityEngine::Networking::UnityWebRequest* GetTexture(::System::String* uri)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTTEXTURE_GETTEXTURE_OFFSET))(uri);
		}

		static ::UnityEngine::Networking::UnityWebRequest* GetTexture_1(::System::String* uri, ::System::Boolean nonReadable)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTTEXTURE_GETTEXTURE_1_OFFSET))(uri, nonReadable);
		}
	};
}
