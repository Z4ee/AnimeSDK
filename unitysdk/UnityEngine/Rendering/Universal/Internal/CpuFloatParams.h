#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUFLOATPARAMS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C99D350)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUFLOATPARAMS_FORCEDIRTY_OFFSET UNITYSDK_OFFSET(0x1C99D480)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUFLOATPARAMS_PUSH_1_OFFSET UNITYSDK_OFFSET(0x1C99D410)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUFLOATPARAMS_PUSH_OFFSET UNITYSDK_OFFSET(0x1C99D3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUFLOATPARAMS_SET_OFFSET UNITYSDK_OFFSET(0x1C99D2F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUFLOATPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C99D2D0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int CpuFloatParams_TypeDefinitionIndex = 27709;

	class CpuFloatParams : public ::System::Object
	{
	public:
		::System::Boolean isDirty; // 0x10
		::System::Single targetValue; // 0x14
		::System::Single fallbackValue; // 0x18
		::System::Int32 targetShaderId; // 0x1C

		::System::Void _ctor(::System::Single fallbackVec, ::System::Int32 shaderId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUFLOATPARAMS__CTOR_OFFSET))(this, fallbackVec, shaderId);
		}

		::UnityEngine::Rendering::Universal::Internal::CpuFloatParams* Set(::System::Single value)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::CpuFloatParams*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUFLOATPARAMS_SET_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUFLOATPARAMS_CLEAR_OFFSET))(this);
		}

		::System::Void Push(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUFLOATPARAMS_PUSH_OFFSET))(this, cmd);
		}

		::System::Void Push_1(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUFLOATPARAMS_PUSH_1_OFFSET))(this, mat);
		}

		::System::Void ForceDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUFLOATPARAMS_FORCEDIRTY_OFFSET))(this);
		}
	};
}
