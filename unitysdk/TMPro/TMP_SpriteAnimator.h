#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_SPRITEANIMATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x18940B80)
#define TMPRO_TMP_SPRITEANIMATOR_DOSPRITEANIMATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x18940DA0)
#define TMPRO_TMP_SPRITEANIMATOR_DOSPRITEANIMATION_OFFSET UNITYSDK_OFFSET(0x18940CA0)
#define TMPRO_TMP_SPRITEANIMATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18940C10)
#define TMPRO_TMP_SPRITEANIMATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18940C00)
#define TMPRO_TMP_SPRITEANIMATOR_STOPALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0x18940C20)
#define TMPRO_TMP_SPRITEANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18940E40)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteAnimator_TypeDefinitionIndex = 34369;

	class TMP_SpriteAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* m_animations; // 0x18
		::TMPro::TMP_Text* m_TextComponent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void StopAllAnimations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_STOPALLANIMATIONS_OFFSET))(this);
		}

		::System::Void DoSpriteAnimation(::System::Int32 currentCharacter, ::TMPro::TMP_SpriteAsset* spriteAsset, ::System::Int32 start, ::System::Int32 end, ::System::Int32 framerate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_DOSPRITEANIMATION_OFFSET))(this, currentCharacter, spriteAsset, start, end, framerate);
		}

		::System::Collections::IEnumerator* DoSpriteAnimationInternal(::System::Int32 currentCharacter, ::TMPro::TMP_SpriteAsset* spriteAsset, ::System::Int32 start, ::System::Int32 end, ::System::Int32 framerate)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_DOSPRITEANIMATIONINTERNAL_OFFSET))(this, currentCharacter, spriteAsset, start, end, framerate);
		}
	};
}
