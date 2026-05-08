#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::UI { class AnimationTriggers; }

#define UNITYENGINE_UI_EXTENSION_ANIMATIONTRIGGERSEX_PRESSEDUPANIMNAME_OFFSET UNITYSDK_OFFSET(0x1AE4A8E0)
#define UNITYENGINE_UI_EXTENSION_ANIMATIONTRIGGERSEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE4A970)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int AnimationTriggersEx_TypeDefinitionIndex = 82918;

	class AnimationTriggersEx : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_kDefaultPressedUpAnimName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimationTriggersEx_TypeDefinitionIndex)->GetStaticField(0x3B1D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ANIMATIONTRIGGERSEX__CCTOR_OFFSET))();
		}

		static ::System::String* PressedUpAnimName(::UnityEngine::UI::AnimationTriggers* animTriggers)
		{
			return ((::System::String*(*)(::UnityEngine::UI::AnimationTriggers*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_ANIMATIONTRIGGERSEX_PRESSEDUPANIMNAME_OFFSET))(animTriggers);
		}
	};
}
