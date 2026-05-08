#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/Nap3DMapDecalEffect_DecalShapeType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT_DECALAREADATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1968C560)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT_DECALAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1968C630)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Nap3DMapDecalEffect_DecalAreaData_TypeDefinitionIndex = 30377;

	class Nap3DMapDecalEffect_DecalAreaData : public ::System::Object
	{
	public:
		::UnityEngine::Color FillColor; // 0x10
		::UnityEngine::Color LineColor; // 0x20
		::System::Single OverallOpacity; // 0x30
		::UnityEngine::AnimationCurve* FadeInOpacityCurve; // 0x38
		::System::Single FadeInDuration; // 0x40
		::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalShapeType DecalShape; // 0x44
		::System::Single Radius; // 0x48
		::System::Single RectWidth; // 0x4C
		::System::Single RectHeight; // 0x50
		::UnityEngine::Vector3 CenterPosition; // 0x54
		::System::Single YRotation; // 0x60
		::System::Single DecalHeightTop; // 0x64
		::System::Single DecalHeightBottom; // 0x68
		::System::Single DecalYFadeTop; // 0x6C
		::System::Single DecalYFadeBottom; // 0x70
		::System::Single ScanAngle; // 0x74
		::System::Single ScanSpeed; // 0x78
		::System::Single ScanAffectsInnerLine; // 0x7C
		::System::Single ScanAffectsOuterLine; // 0x80
		::System::Single StepDistance; // 0x84
		::System::Single LineWidth; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT_DECALAREADATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* decalAreaData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAP3DMAPDECALEFFECT_DECALAREADATA_COPYFROM_OFFSET))(this, decalAreaData);
		}
	};
}
