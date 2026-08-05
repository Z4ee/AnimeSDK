#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Experimental::Rendering { class RayTracingAccelerationStructure; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER_ACCSTRUCT_OFFSET UNITYSDK_OFFSET(0x1EB60CC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER_CLEARCACHEDACCELERATIONSTRUCTURES_OFFSET UNITYSDK_OFFSET(0x1EB60F50)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER_REQUESTRESETONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB60EF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EB610F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER_WAITFORUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB61A90)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB60630)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB605A0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXRenderer_RTXAccManager_TypeDefinitionIndex = 5791;

	class RTXRenderer_RTXAccManager : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::RTXRenderer_RTXAccManager** StaticGet_instance()
		{
			return (::UnityEngine::NAPRenderPipeline0::RTXRenderer_RTXAccManager**)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXAccManager_TypeDefinitionIndex)->GetStaticField(0x4FA0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet__RTXSolidAngleCullingMinAngle()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXAccManager_TypeDefinitionIndex)->GetStaticField(0x4FA8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet__RTXEnableSolidAngleCulling()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXAccManager_TypeDefinitionIndex)->GetStaticField(0x4FB0);
		}
		static ::System::Boolean* StaticGet_s_ResetAccelerationStructuresOnNextUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RTXRenderer_RTXAccManager_TypeDefinitionIndex)->GetStaticField(0x2790);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*>* rayTracingAccelerationStructures; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* AccStruct(::System::Int32 layer)
		{
			return ((::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER_ACCSTRUCT_OFFSET))(layer);
		}

		static ::System::Void RequestResetOnNextUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER_REQUESTRESETONNEXTUPDATE_OFFSET))();
		}

		static ::System::Void ClearCachedAccelerationStructures()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER_CLEARCACHEDACCELERATIONSTRUCTURES_OFFSET))();
		}

		static ::System::Void Update(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* acc, ::System::Boolean useAsyncCompute)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER_UPDATE_OFFSET))(context, acc, useAsyncCompute);
		}

		static ::System::Void WaitForUpdate(::UnityEngine::Rendering::CommandBuffer* cb, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure* acc)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Experimental::Rendering::RayTracingAccelerationStructure*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER_WAITFORUPDATE_OFFSET))(cb, acc);
		}
	};
}
