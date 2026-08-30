#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class GrowableBuffer; }

#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_INIT_OFFSET UNITYSDK_OFFSET(0x3BB1770)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_RESET_OFFSET UNITYSDK_OFFSET(0x3BB1800)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_SERIALIZESTORELOAD_OFFSET UNITYSDK_OFFSET(0x3BB1820)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x3BB1810)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_SET_OFFSET UNITYSDK_OFFSET(0x1020)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBufferExt_RenderCommandSetRTBuffers_TypeDefinitionIndex = 34892;

	struct alignas(8) CommandBufferExt_RenderCommandSetRTBuffers
	{
		::Il2CppArray<::System::UInt32>* colorID; // 0x10
		::Il2CppArray<::System::Int32>* colorBuiltin; // 0x18
		::Il2CppArray<::System::Int32>* colorName; // 0x20
		::Il2CppArray<::System::UInt32>* colorLoadAction; // 0x28
		::Il2CppArray<::System::UInt32>* colorStoreAction; // 0x30

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_INIT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_RESET_OFFSET))(this);
		}

		/*
		::System::Void Set(::System::Int32 a1, ::UnityEngine::Rendering::RenderTargetIdentifier& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_SET_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void Serialize(::UnityEngine::Rendering::GrowableBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::GrowableBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_SERIALIZE_OFFSET))(this, a1);
		}

		::System::Void SerializeStoreLoad(::UnityEngine::Rendering::GrowableBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::GrowableBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_SERIALIZESTORELOAD_OFFSET))(this, a1);
		}
	};
}
