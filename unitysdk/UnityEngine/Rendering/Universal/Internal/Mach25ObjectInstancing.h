#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class ScopedCommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class Mach25ObjectInstancing_Mach25SceneObjInfo; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_CLEARMATRIXLIST_OFFSET UNITYSDK_OFFSET(0x1C9A07F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C9A0740)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_DRAWMACH25SCENEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1C9A0CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_DRAWMACH25SCENE_OFFSET UNITYSDK_OFFSET(0x1C9A0A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C9A0550)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_INIT_OFFSET UNITYSDK_OFFSET(0x1C9A05D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_REVERSEMATRIXLIST_OFFSET UNITYSDK_OFFSET(0x1C9A0900)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A05C0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Mach25ObjectInstancing_TypeDefinitionIndex = 27500;

	class Mach25ObjectInstancing : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::Internal::Mach25ObjectInstancing** StaticGet_instance()
		{
			return (::UnityEngine::Rendering::Universal::Internal::Mach25ObjectInstancing**)Il2CppClass::FromTypeDefinitionIndex(Mach25ObjectInstancing_TypeDefinitionIndex)->GetStaticField(0x231E0);
		}
		::Il2CppArray<::UnityEngine::Matrix4x4>* matricesForInstancing; // 0x10
		::UnityEngine::Rendering::Universal::Internal::Mach25ObjectInstancing_Mach25SceneObjInfo* tileInfo; // 0x18
		::UnityEngine::Rendering::Universal::Internal::Mach25ObjectInstancing_Mach25SceneObjInfo* pillarInfo; // 0x20
		::UnityEngine::Rendering::Universal::Internal::Mach25ObjectInstancing_Mach25SceneObjInfo* arrowInfo; // 0x28
		::System::Boolean drawMach25Scene; // 0x30
		::System::Boolean isMach25Cam; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::Universal::Internal::Mach25ObjectInstancing* get_Instance()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::Mach25ObjectInstancing*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_GET_INSTANCE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_INIT_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_DESTROY_OFFSET))(this);
		}

		::System::Void ClearMatrixList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_CLEARMATRIXLIST_OFFSET))(this);
		}

		::System::Void ReverseMatrixList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_REVERSEMATRIXLIST_OFFSET))(this);
		}

		::System::Void DrawMach25Scene(::UnityEngine::Rendering::Universal::Internal::Mach25ObjectInstancing_Mach25SceneObjInfo* info, ::UnityEngine::NAPRenderPipeline0::ScopedCommandBuffer* cmd, ::System::Int32 passIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Mach25ObjectInstancing_Mach25SceneObjInfo*, ::UnityEngine::NAPRenderPipeline0::ScopedCommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_DRAWMACH25SCENE_OFFSET))(this, info, cmd, passIndex);
		}

		::System::Void DrawMach25SceneObjects(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::UnityEngine::Rendering::ScriptableRenderContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MACH25OBJECTINSTANCING_DRAWMACH25SCENEOBJECTS_OFFSET))(this, cameraData, context);
		}
	};
}
