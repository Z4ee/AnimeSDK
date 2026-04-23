#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityChan/SpringManager_BoneTag.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define UNITYCHAN_SPRINGMANAGER_SPRINGBONECLASS__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A62F0)

namespace UnityChan
{
	inline static constexpr unsigned int SpringManager_SpringBoneClass_TypeDefinitionIndex = 44439;

	class SpringManager_SpringBoneClass : public ::System::Object
	{
	public:
		::UnityChan::SpringManager_BoneTag boneTag; // 0x10
		::System::Single rootOffsetBlend; // 0x14
		::UnityEngine::AnimationCurve* rootOffsetBlendCurve; // 0x18
		::UnityEngine::AnimationCurve* dynamicRatioCurve; // 0x20
		::System::Single dynamicRatio; // 0x28
		::UnityEngine::AnimationCurve* stiffnessCurve; // 0x30
		::System::Single stiffnessForce; // 0x38
		::UnityEngine::AnimationCurve* dragCurve; // 0x40
		::System::Single dragForce; // 0x48
		::Il2CppArray<::UnityEngine::Transform*>* rootArray; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_SPRINGBONECLASS__CTOR_OFFSET))(this);
		}
	};
}
