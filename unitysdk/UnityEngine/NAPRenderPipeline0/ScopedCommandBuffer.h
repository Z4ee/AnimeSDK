#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/CommandBuffer.h"

namespace System { class String; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SCOPEDCOMMANDBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E3185E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCOPEDCOMMANDBUFFER_GET_1_OFFSET UNITYSDK_OFFSET(0x1E317F10)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCOPEDCOMMANDBUFFER_GET_OFFSET UNITYSDK_OFFSET(0x1E31B7C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCOPEDCOMMANDBUFFER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E31B500)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCOPEDCOMMANDBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E31B780)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ScopedCommandBuffer_TypeDefinitionIndex = 6033;

	class ScopedCommandBuffer : public ::UnityEngine::Rendering::CommandBuffer
	{
	public:
		static ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::ScopedCommandBuffer*>** StaticGet_FreeList()
		{
			return (::Il2CppArray<::UnityEngine::NAPRenderPipeline0::ScopedCommandBuffer*>**)Il2CppClass::FromTypeDefinitionIndex(ScopedCommandBuffer_TypeDefinitionIndex)->GetStaticField(0x4F70);
		}
		static ::System::Int32* StaticGet_FreeListCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScopedCommandBuffer_TypeDefinitionIndex)->GetStaticField(0x25E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCOPEDCOMMANDBUFFER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCOPEDCOMMANDBUFFER__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::NAPRenderPipeline0::ScopedCommandBuffer* Get()
		{
			return ((::UnityEngine::NAPRenderPipeline0::ScopedCommandBuffer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCOPEDCOMMANDBUFFER_GET_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::ScopedCommandBuffer* Get_1(::System::String* name)
		{
			return ((::UnityEngine::NAPRenderPipeline0::ScopedCommandBuffer*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCOPEDCOMMANDBUFFER_GET_1_OFFSET))(name);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCOPEDCOMMANDBUFFER_DISPOSE_OFFSET))(this);
		}
	};
}
