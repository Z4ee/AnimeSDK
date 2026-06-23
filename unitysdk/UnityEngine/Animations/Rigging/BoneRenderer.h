#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/Rigging/BoneRenderer_BoneShape.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define UNITYENGINE_ANIMATIONS_RIGGING_BONERENDERER_GET_TRANSFORMS_OFFSET UNITYSDK_OFFSET(0x19E38D80)
#define UNITYENGINE_ANIMATIONS_RIGGING_BONERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E38D90)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int BoneRenderer_TypeDefinitionIndex = 58219;

	class BoneRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animations::Rigging::BoneRenderer_BoneShape boneShape; // 0x18
		::System::Boolean drawBones; // 0x1C
		::System::Boolean drawTripods; // 0x1D
		::System::Single boneSize; // 0x20
		::System::Single tripodSize; // 0x24
		::UnityEngine::Color boneColor; // 0x28
		::Il2CppArray<::UnityEngine::Transform*>* m_Transforms; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_BONERENDERER__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Transform*>* get_transforms()
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_BONERENDERER_GET_TRANSFORMS_OFFSET))(this);
		}
	};
}
