#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS_GET_DITHERREACTIVEVALUE_OFFSET UNITYSDK_OFFSET(0x1C14AEB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS_GET_REACTIVEMASKDITHER_OFFSET UNITYSDK_OFFSET(0x1C14AD80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS_GET_REACTIVEMASK_OFFSET UNITYSDK_OFFSET(0x1C14AB20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS_GET_REACTIVEVALUE_OFFSET UNITYSDK_OFFSET(0x1C14AC50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C14AFF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14AFE0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FSRGlobals_TypeDefinitionIndex = 26580;

	class FSRGlobals : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>** StaticGet_ExtraMipBias()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(FSRGlobals_TypeDefinitionIndex)->GetStaticField(0x217D0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_ForceReactiveMaskPass()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FSRGlobals_TypeDefinitionIndex)->GetStaticField(0x217D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_ReactiveMask()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS_GET_REACTIVEMASK_OFFSET))();
		}

		static ::System::Single get_ReactiveValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS_GET_REACTIVEVALUE_OFFSET))();
		}

		static ::System::Boolean get_ReactiveMaskDither()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS_GET_REACTIVEMASKDITHER_OFFSET))();
		}

		static ::System::Single get_DitherReactiveValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALS_GET_DITHERREACTIVEVALUE_OFFSET))();
		}
	};
}
