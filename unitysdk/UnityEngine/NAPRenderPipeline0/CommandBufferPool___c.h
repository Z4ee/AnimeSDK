#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AA720)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AA760)
#define UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL___C___CCTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1E8AA770)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CommandBufferPool___c_TypeDefinitionIndex = 6035;

	class CommandBufferPool___c : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::CommandBufferPool___c** StaticGet___9()
		{
			return (::UnityEngine::NAPRenderPipeline0::CommandBufferPool___c**)Il2CppClass::FromTypeDefinitionIndex(CommandBufferPool___c_TypeDefinitionIndex)->GetStaticField(0x4EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__7_0(::UnityEngine::Rendering::CommandBuffer* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_COMMANDBUFFERPOOL___C___CCTOR_B__7_0_OFFSET))(this, x);
		}
	};
}
