#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Animations/TransformStreamHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x884530)
#define MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x8844B0)
#define MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x8844F0)
#define MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x8844A0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EyeKey_MouseShapeAnimationJob_TypeDefinitionIndex = 37721;

	struct alignas(8) EyeKey_MouseShapeAnimationJob
	{
		::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle> BoneHandler; // 0x10
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> OriginLocalPosition; // 0x20
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> OriginLocalRotation; // 0x30
		::Unity::Collections::NativeArray_1<::System::Int32> RecordBoneHash; // 0x40
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> DeltaLocalPosition; // 0x50
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> DeltaLocalRotation; // 0x60
		::Unity::Collections::NativeArray_1<::System::Int32> BoneHash; // 0x70

		::System::Void _ctor(::Il2CppArray<::UnityEngine::Animations::TransformStreamHandle>* boneHandlerList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Animations::TransformStreamHandle>*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB__CTOR_OFFSET))(this, boneHandlerList);
		}

		/*
		::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB_PROCESSANIMATION_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB_PROCESSROOTMOTION_OFFSET))(this, stream);
		}
		*/

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYEKEY_MOUSESHAPEANIMATIONJOB_DISPOSE_OFFSET))(this);
		}
	};
}
