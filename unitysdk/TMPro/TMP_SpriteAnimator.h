#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_SPRITEANIMATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EC579A0)
#define TMPRO_TMP_SPRITEANIMATOR_DOSPRITEANIMATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EC57BB0)
#define TMPRO_TMP_SPRITEANIMATOR_DOSPRITEANIMATION_OFFSET UNITYSDK_OFFSET(0x1EC57AC0)
#define TMPRO_TMP_SPRITEANIMATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EC57A40)
#define TMPRO_TMP_SPRITEANIMATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EC57A30)
#define TMPRO_TMP_SPRITEANIMATOR_STOPALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1EC57A50)
#define TMPRO_TMP_SPRITEANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC57C50)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteAnimator_TypeDefinitionIndex = 43441;

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

		::System::Void DoSpriteAnimation(::System::Int32 a1, ::TMPro::TMP_SpriteAsset* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_DOSPRITEANIMATION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::IEnumerator* DoSpriteAnimationInternal(::System::Int32 a1, ::TMPro::TMP_SpriteAsset* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_DOSPRITEANIMATIONINTERNAL_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
