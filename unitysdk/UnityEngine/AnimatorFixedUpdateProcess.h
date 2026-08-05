#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace UnityEngine { class OnAnimatorFixedUpdate; }

#define UNITYENGINE_ANIMATORFIXEDUPDATEPROCESS_CREATE_OFFSET UNITYSDK_OFFSET(0x1FC5FA60)
#define UNITYENGINE_ANIMATORFIXEDUPDATEPROCESS_DESTROY_OFFSET UNITYSDK_OFFSET(0x1FC5FA90)
#define UNITYENGINE_ANIMATORFIXEDUPDATEPROCESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FC5FA70)
#define UNITYENGINE_ANIMATORFIXEDUPDATEPROCESS_INVOKEONANIMATORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC5FAA0)
#define UNITYENGINE_ANIMATORFIXEDUPDATEPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC5FA30)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorFixedUpdateProcess_TypeDefinitionIndex = 6634;

	class AnimatorFixedUpdateProcess : public ::System::Object
	{
	public:
		::System::IntPtr m_Handle; // 0x10
		::UnityEngine::OnAnimatorFixedUpdate* m_OnAnimatorFixedUpdateCallback; // 0x18

		::System::Void _ctor(::UnityEngine::OnAnimatorFixedUpdate* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::OnAnimatorFixedUpdate*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORFIXEDUPDATEPROCESS__CTOR_OFFSET))(this, callback);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORFIXEDUPDATEPROCESS_DISPOSE_OFFSET))(this);
		}

		static ::System::IntPtr Create(::UnityEngine::AnimatorFixedUpdateProcess* az)
		{
			return ((::System::IntPtr(*)(::UnityEngine::AnimatorFixedUpdateProcess*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORFIXEDUPDATEPROCESS_CREATE_OFFSET))(az);
		}

		static ::System::Void Destroy(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORFIXEDUPDATEPROCESS_DESTROY_OFFSET))(handle);
		}

		static ::System::Void InvokeOnAnimatorFixedUpdate(::UnityEngine::AnimatorFixedUpdateProcess* p, ::Unity::Jobs::JobHandle& dependsOn, ::Unity::Jobs::JobHandle& jobFence)
		{
			return ((::System::Void(*)(::UnityEngine::AnimatorFixedUpdateProcess*, ::Unity::Jobs::JobHandle&, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORFIXEDUPDATEPROCESS_INVOKEONANIMATORFIXEDUPDATE_OFFSET))(p, dependsOn, jobFence);
		}
	};
}
