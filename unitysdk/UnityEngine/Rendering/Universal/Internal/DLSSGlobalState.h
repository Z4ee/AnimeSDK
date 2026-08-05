#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/DLSSContext.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DLSSGLOBALSTATE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1CC7B970)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DLSSGLOBALSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC9F590)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DLSSGLOBALSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9F580)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DLSSGlobalState_TypeDefinitionIndex = 27516;

	class DLSSGlobalState : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::DLSSContext* StaticGet_s_Context()
		{
			return (::UnityEngine::Rendering::DLSSContext*)Il2CppClass::FromTypeDefinitionIndex(DLSSGlobalState_TypeDefinitionIndex)->GetStaticField(0x6B00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DLSSGLOBALSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DLSSGLOBALSTATE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::DLSSContext& get_Context()
		{
			return ((::UnityEngine::Rendering::DLSSContext&(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DLSSGLOBALSTATE_GET_CONTEXT_OFFSET))();
		}
	};
}
