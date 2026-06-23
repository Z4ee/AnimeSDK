#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEDATAINTERPOLATORFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D135630)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEDATAINTERPOLATORFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D1356E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEDATAINTERPOLATORFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D134F20)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEDATAINTERPOLATORFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D134F00)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeDataInterpolatorFunc_TypeDefinitionIndex = 6066;

	class VolumeDataInterpolatorFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEDATAINTERPOLATORFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* interpolatedData, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEDATAINTERPOLATORFUNC_INVOKE_OFFSET))(this, interpolatedData, defaultComp, comps, weights, compCount);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* interpolatedData, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEDATAINTERPOLATORFUNC_BEGININVOKE_OFFSET))(this, interpolatedData, defaultComp, comps, weights, compCount, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEDATAINTERPOLATORFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
