#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/miHoYoEmotion/ClipShapeManager_CurveBinding_BindingType.h"
#include "unitysdk/miHoYoEmotion/ClipShapeManager_CurveBinding_BoneParamType.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MIHOYOEMOTION_CLIPSHAPECURVECELL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF1400)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipShapeCurveCell_TypeDefinitionIndex = 39329;

	class ClipShapeCurveCell : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10
		::UnityEngine::AnimationCurve* curve; // 0x18
		::System::String* blendShapeName; // 0x20
		::System::Int32 indexInModelBindingList; // 0x28
		::miHoYoEmotion::ClipShapeManager_CurveBinding_BindingType type; // 0x2C
		::miHoYoEmotion::ClipShapeManager_CurveBinding_BoneParamType boneParamType; // 0x30
		::System::String* boneName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPECURVECELL__CTOR_OFFSET))(this);
		}
	};
}
