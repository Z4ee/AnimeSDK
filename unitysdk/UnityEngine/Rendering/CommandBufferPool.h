#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0x1A30C950)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_1_OFFSET UNITYSDK_OFFSET(0x1A30C8D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_OFFSET UNITYSDK_OFFSET(0x1A30C820)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A30C9D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A30CAA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBufferPool_TypeDefinitionIndex = 33381;

	class CommandBufferPool : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>** StaticGet_s_BufferPool()
		{
			return (::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>**)Il2CppClass::FromTypeDefinitionIndex(CommandBufferPool_TypeDefinitionIndex)->GetStaticField(0x67310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::CommandBuffer* Get()
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_OFFSET))();
		}

		static ::UnityEngine::Rendering::CommandBuffer* Get_1(::System::String* name)
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_1_OFFSET))(name);
		}

		static ::UnityEngine::Rendering::CommandBuffer* GetDefault()
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GETDEFAULT_OFFSET))();
		}

		static ::System::Void Release(::UnityEngine::Rendering::CommandBuffer* buffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_RELEASE_OFFSET))(buffer);
		}
	};
}
