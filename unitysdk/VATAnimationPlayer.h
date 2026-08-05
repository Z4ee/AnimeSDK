#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/VATAnimationPlayer_AnimationStage.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define VATANIMATIONPLAYER_APPLYFRAMETORENDERERS_OFFSET UNITYSDK_OFFSET(0x1C3FA720)
#define VATANIMATIONPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C3FA510)
#define VATANIMATIONPLAYER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1C3FA620)
#define VATANIMATIONPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C3FAA30)
#define VATANIMATIONPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3FAC10)
#define VATANIMATIONPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FAB70)

inline static constexpr unsigned int VATAnimationPlayer_TypeDefinitionIndex = 80224;

class VATAnimationPlayer : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
{
public:
	static ::System::Int32* StaticGet__Frame()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VATAnimationPlayer_TypeDefinitionIndex)->GetStaticField(0x12F30);
	}
	::System::Boolean useUnifiedSpeed; // 0x58
	::System::Single playSpeed; // 0x5C
	::Il2CppArray<::VATAnimationPlayer_AnimationStage>* stages; // 0x60
	::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x68
	::UnityEngine::MaterialPropertyBlock* mpb; // 0x70
	::System::Int32 currentStage; // 0x78
	::System::Int32 targetStage; // 0x7C
	::System::Single currentFrame; // 0x80
	::System::Single targetFrame; // 0x84
	::System::Single targetSegmentSpeed; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VATANIMATIONPLAYER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VATANIMATIONPLAYER__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VATANIMATIONPLAYER_ONENABLE_OFFSET))(this);
	}

	::System::Void PlayAnimation(::System::Int32 stageIndex, ::System::Boolean forward)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + VATANIMATIONPLAYER_PLAYANIMATION_OFFSET))(this, stageIndex, forward);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VATANIMATIONPLAYER_UPDATE_OFFSET))(this);
	}

	::System::Void ApplyFrameToRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VATANIMATIONPLAYER_APPLYFRAMETORENDERERS_OFFSET))(this);
	}
};
