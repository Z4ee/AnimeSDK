#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/NapCharacterGILayer.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIWEATHER_GETLAYER_OFFSET UNITYSDK_OFFSET(0x1CF0B0B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIWEATHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0B140)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapCharacterGIWeather_TypeDefinitionIndex = 27355;

	class NapCharacterGIWeather : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::Il2CppArray<::UnityEngine::Rendering::Universal::NapCharacterGILayer>* postColor; // 0x18

		::System::Void _ctor(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIWEATHER__CTOR_OFFSET))(this, key);
		}

		::System::Boolean GetLayer(::System::Int32 index, ::UnityEngine::Rendering::Universal::NapCharacterGILayer& layer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::Universal::NapCharacterGILayer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPCHARACTERGIWEATHER_GETLAYER_OFFSET))(this, index, layer);
		}
	};
}
