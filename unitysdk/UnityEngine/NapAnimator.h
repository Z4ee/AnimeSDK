#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/NapAnimator_GenericCurveID.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Avatar; }

#define UNITYENGINE_NAPANIMATOR_ADDANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x1E87FB00)
#define UNITYENGINE_NAPANIMATOR_BATCHSAMPLECURVETHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1E87FB80)
#define UNITYENGINE_NAPANIMATOR_BATCHSAMPLENAPANIMATIONTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1E87FB70)
#define UNITYENGINE_NAPANIMATOR_GETBONEPARENTINDICES_1_OFFSET UNITYSDK_OFFSET(0x1E87FB40)
#define UNITYENGINE_NAPANIMATOR_GETBONEPARENTINDICES_OFFSET UNITYSDK_OFFSET(0x1E87FB20)
#define UNITYENGINE_NAPANIMATOR_GETBONESNUM_OFFSET UNITYSDK_OFFSET(0x1E87FB10)
#define UNITYENGINE_NAPANIMATOR_GETGENERICCURVEIDS_OFFSET UNITYSDK_OFFSET(0x1E87FB60)
#define UNITYENGINE_NAPANIMATOR_GETGENERICCURVENUM_OFFSET UNITYSDK_OFFSET(0x1E87FB50)
#define UNITYENGINE_NAPANIMATOR_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1E87FAE0)
#define UNITYENGINE_NAPANIMATOR_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1E87FAF0)
#define UNITYENGINE_NAPANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E87FB90)

namespace UnityEngine
{
	inline static constexpr unsigned int NapAnimator_TypeDefinitionIndex = 6648;

	class NapAnimator : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPANIMATOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Avatar* get_avatar()
		{
			return ((::UnityEngine::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPANIMATOR_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_avatar(::UnityEngine::Avatar* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPANIMATOR_SET_AVATAR_OFFSET))(this, value);
		}

		::System::Int32 AddAnimationClip(::UnityEngine::AnimationClip* animationClip)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPANIMATOR_ADDANIMATIONCLIP_OFFSET))(this, animationClip);
		}

		::System::Int32 GetBonesNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPANIMATOR_GETBONESNUM_OFFSET))(this);
		}

		::System::Boolean GetBoneParentIndices(::Unity::Collections::NativeSlice_1<::System::Int32> outParentIndices)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Collections::NativeSlice_1<::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPANIMATOR_GETBONEPARENTINDICES_OFFSET))(this, outParentIndices);
		}

		::System::Boolean GetBoneParentIndices_1(::System::Void* outParentIndicesPtr, ::System::Int32 outParentIndicesLen)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPANIMATOR_GETBONEPARENTINDICES_1_OFFSET))(this, outParentIndicesPtr, outParentIndicesLen);
		}

		::System::Int32 GetGenericCurveNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPANIMATOR_GETGENERICCURVENUM_OFFSET))(this);
		}

		::System::Void GetGenericCurveIDs(::UnityEngine::NapAnimator_GenericCurveID* outCurvesIDs, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapAnimator_GenericCurveID*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPANIMATOR_GETGENERICCURVEIDS_OFFSET))(this, outCurvesIDs, len);
		}

		static ::System::Void BatchSampleNapAnimationThreadSafe(::System::Int32 NapAnimatorInstanceID, ::System::IntPtr jobRequests, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPANIMATOR_BATCHSAMPLENAPANIMATIONTHREADSAFE_OFFSET))(NapAnimatorInstanceID, jobRequests, size);
		}

		static ::System::Void BatchSampleCurveThreadSafe(::System::Int32 NapAnimatorInstanceID, ::System::IntPtr jobRequests, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPANIMATOR_BATCHSAMPLECURVETHREADSAFE_OFFSET))(NapAnimatorInstanceID, jobRequests, size);
		}
	};
}
