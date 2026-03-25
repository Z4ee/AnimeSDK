#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class GrowableBuffer; }

#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_INIT_OFFSET UNITYSDK_OFFSET(0x210AD30)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_RESET_OFFSET UNITYSDK_OFFSET(0x210ADC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_SERIALIZESTORELOAD_OFFSET UNITYSDK_OFFSET(0x210AE20)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x210ADD0)
#define UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_SET_OFFSET UNITYSDK_OFFSET(0x1020)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBufferExt_RenderCommandSetRTBuffers_TypeDefinitionIndex = 27848;

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
		::System::Void Set(::System::Int32 index, ::UnityEngine::Rendering::RenderTargetIdentifier& rt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_SET_OFFSET))(this, index, rt);
		}
		*/

		::System::Void Serialize(::UnityEngine::Rendering::GrowableBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::GrowableBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_SERIALIZE_OFFSET))(this, buffer);
		}

		::System::Void SerializeStoreLoad(::UnityEngine::Rendering::GrowableBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::GrowableBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFEREXT_RENDERCOMMANDSETRTBUFFERS_SERIALIZESTORELOAD_OFFSET))(this, buffer);
		}
	};
}
