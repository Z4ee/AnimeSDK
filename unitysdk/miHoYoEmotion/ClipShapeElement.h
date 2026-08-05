#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/ShapeElement.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace miHoYoEmotion { class ClipShapeCurveGrp; }

#define MIHOYOEMOTION_CLIPSHAPEELEMENT_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1D034BB0)
#define MIHOYOEMOTION_CLIPSHAPEELEMENT_GET_POSTDURATION_OFFSET UNITYSDK_OFFSET(0x1D034C20)
#define MIHOYOEMOTION_CLIPSHAPEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D034C90)
#define MIHOYOEMOTION_CLIPSHAPEELEMENT___BASE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1D034CB0)
#define MIHOYOEMOTION_CLIPSHAPEELEMENT___BASE_GET_POSTDURATION_OFFSET UNITYSDK_OFFSET(0x1D034CD0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipShapeElement_TypeDefinitionIndex = 40071;

	class ClipShapeElement : public ::miHoYoEmotion::ShapeElement
	{
	public:
		::UnityEngine::AnimationClip* mainClip; // 0x18
		::miHoYoEmotion::ClipShapeCurveGrp* mainCurveGrp; // 0x20
		::UnityEngine::AnimationClip* postClip; // 0x28
		::miHoYoEmotion::ClipShapeCurveGrp* postCurveGrp; // 0x30
		::UnityEngine::AnimationClip* blinkClip; // 0x38
		::miHoYoEmotion::ClipShapeCurveGrp* blinkCurveGrp; // 0x40
		::System::Single postBlendTime; // 0x48
		::System::Boolean isPost; // 0x4C
		::Il2CppArray<::System::String*>* noPost; // 0x50
		::System::Boolean isToFinal; // 0x58
		::Il2CppArray<::System::String*>* toFinal; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEELEMENT__CTOR_OFFSET))(this);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEELEMENT_GET_DURATION_OFFSET))(this);
		}

		::System::Single get_postDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEELEMENT_GET_POSTDURATION_OFFSET))(this);
		}

		::System::Single __base_get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEELEMENT___BASE_GET_DURATION_OFFSET))(this);
		}

		::System::Single __base_get_postDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEELEMENT___BASE_GET_POSTDURATION_OFFSET))(this);
		}
	};
}
