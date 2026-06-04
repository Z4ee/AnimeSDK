#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0x1B168300)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_1_OFFSET UNITYSDK_OFFSET(0x1B168280)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_OFFSET UNITYSDK_OFFSET(0x1B1681D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B168380)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B168430)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBufferPool_TypeDefinitionIndex = 33663;

	class CommandBufferPool : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>** StaticGet_s_BufferPool()
		{
			return (::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>**)Il2CppClass::FromTypeDefinitionIndex(CommandBufferPool_TypeDefinitionIndex)->GetStaticField(0x496F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::CommandBuffer* Get()
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_OFFSET))();
		}

		static ::UnityEngine::Rendering::CommandBuffer* Get_1(::System::String* a1)
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GET_1_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::CommandBuffer* GetDefault()
		{
			return ((::UnityEngine::Rendering::CommandBuffer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_GETDEFAULT_OFFSET))();
		}

		static ::System::Void Release(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL_RELEASE_OFFSET))(a1);
		}
	};
}
