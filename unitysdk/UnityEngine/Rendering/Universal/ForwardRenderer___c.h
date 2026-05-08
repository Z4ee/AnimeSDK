#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::NAPRenderPipeline0 { class ScriptableRenderPass; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2F66A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2F66E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___C__SETUP_B__271_0_OFFSET UNITYSDK_OFFSET(0x1A2F66F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRenderer___c_TypeDefinitionIndex = 29995;

	class ForwardRenderer___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*>** StaticGet___9__271_0()
		{
			return (::System::Predicate_1<::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*>**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer___c_TypeDefinitionIndex)->GetStaticField(0x24910);
		}
		static ::UnityEngine::Rendering::Universal::ForwardRenderer___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::Universal::ForwardRenderer___c**)Il2CppClass::FromTypeDefinitionIndex(ForwardRenderer___c_TypeDefinitionIndex)->GetStaticField(0x24918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Setup_b__271_0(::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER___C__SETUP_B__271_0_OFFSET))(this, x);
		}
	};
}
