#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERNAMES_ISSCENELITSHADER_OFFSET UNITYSDK_OFFSET(0x1ABA8420)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderNames_TypeDefinitionIndex = 29893;

	class ShaderNames : public ::System::Object
	{
	public:
		// static const ::System::String* kSceneLit; // 0x0
		// static const ::System::String* kSceneDecal; // 0x0
		// static const ::System::String* kSceneTransparentLit; // 0x0
		// static const ::System::String* kParticleDecal; // 0x0
		// static const ::System::String* kSceneLitTelevision; // 0x0
		// static const ::System::String* kAvatarScreen; // 0x0
		// static const ::System::String* kDefaultSceneLit; // 0x0
		// static const ::System::String* kLitCargo; // 0x0
		// static const ::System::String* kLitClearCoat; // 0x0
		// static const ::System::String* kLitAnistropic; // 0x0
		// static const ::System::String* kLitWorldTilling; // 0x0
		// static const ::System::String* kLitCustomLighting; // 0x0
		// static const ::System::String* kLitLego; // 0x0
		// static const ::System::String* kLitSpeedTree; // 0x0
		// static const ::System::String* kLitMoss; // 0x0
		// static const ::System::String* kLitTelevision; // 0x0

		static ::System::Boolean IsSceneLitShader(::System::String*& shaderName)
		{
			return ((::System::Boolean(*)(::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERNAMES_ISSCENELITSHADER_OFFSET))(shaderName);
		}
	};
}
