#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A74970)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3A74920)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFAB480)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x3A74890)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x3A748A0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFAB460)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_OFFSET UNITYSDK_OFFSET(0x3A74880)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x3A74880)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x167710)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BFAB440)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x3A74870)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_OFFSET UNITYSDK_OFFSET(0x3A74870)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INITIALIZESORTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1BFAB420)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164FF0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ScriptableRenderContext_TypeDefinitionIndex = 4754;

	struct alignas(8) ScriptableRenderContext
	{
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT__CTOR_OFFSET))(this, a1);
		}

		/*
		static ::System::Void InitializeSortSettings(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::SortingSettings& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::SortingSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INITIALIZESORTSETTINGS_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetNumberOfCameras_Internal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_OFFSET))(this);
		}

		::UnityEngine::Camera* GetCamera_Internal(::System::Int32 a1)
		{
			return ((::UnityEngine::Camera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_OFFSET))(this, a1);
		}

		::System::Void ExecuteCommandBuffer_Internal(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_OFFSET))(this, a1);
		}

		::System::Int32 GetNumberOfCameras()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_OFFSET))(this);
		}

		::UnityEngine::Camera* GetCamera(::System::Int32 a1)
		{
			return ((::UnityEngine::Camera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_OFFSET))(this, a1);
		}

		::System::Void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::ScriptableRenderContext a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 GetNumberOfCameras_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_INJECTED_OFFSET))(a1);
		}

		static ::UnityEngine::Camera* GetCamera_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Camera*(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void ExecuteCommandBuffer_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_INJECTED_OFFSET))(a1, a2);
		}
	};
}
