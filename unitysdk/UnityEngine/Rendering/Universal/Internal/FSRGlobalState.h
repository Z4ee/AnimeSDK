#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/FSRContext.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALSTATE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1B07DC00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B07DC50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B07DC40)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FSRGlobalState_TypeDefinitionIndex = 30328;

	class FSRGlobalState : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::FSRContext* StaticGet_s_Context()
		{
			return (::UnityEngine::Rendering::FSRContext*)Il2CppClass::FromTypeDefinitionIndex(FSRGlobalState_TypeDefinitionIndex)->GetStaticField(0x61D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALSTATE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::FSRContext& get_Context()
		{
			return ((::UnityEngine::Rendering::FSRContext&(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FSRGLOBALSTATE_GET_CONTEXT_OFFSET))();
		}
	};
}
