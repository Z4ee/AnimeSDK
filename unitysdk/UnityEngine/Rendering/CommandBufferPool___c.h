#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A30CB40)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A30CB70)
#define UNITYENGINE_RENDERING_COMMANDBUFFERPOOL___C___CCTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A30CB80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBufferPool___c_TypeDefinitionIndex = 33382;

	class CommandBufferPool___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::CommandBufferPool___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::CommandBufferPool___c**)Il2CppClass::FromTypeDefinitionIndex(CommandBufferPool___c_TypeDefinitionIndex)->GetStaticField(0x67320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__5_0(::UnityEngine::Rendering::CommandBuffer* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFERPOOL___C___CCTOR_B__5_0_OFFSET))(this, x);
		}
	};
}
