#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUTEXTUREPARAMS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E666130)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUTEXTUREPARAMS_FORCEDIRTY_OFFSET UNITYSDK_OFFSET(0x1E6662E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUTEXTUREPARAMS_PUSH_1_OFFSET UNITYSDK_OFFSET(0x1E666270)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUTEXTUREPARAMS_PUSH_OFFSET UNITYSDK_OFFSET(0x1E666180)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUTEXTUREPARAMS_SET_OFFSET UNITYSDK_OFFSET(0x1E665F90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUTEXTUREPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E665F70)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int CpuTextureParams_TypeDefinitionIndex = 27376;

	class CpuTextureParams : public ::System::Object
	{
	public:
		::UnityEngine::Texture* fallbackValue; // 0x10
		::UnityEngine::Texture* targetValue; // 0x18
		::System::Boolean isDirty; // 0x20
		::System::Int32 shaderId; // 0x24

		::System::Void _ctor(::UnityEngine::Texture* fallbackTex, ::System::Int32 shaderIds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUTEXTUREPARAMS__CTOR_OFFSET))(this, fallbackTex, shaderIds);
		}

		::UnityEngine::Rendering::Universal::Internal::CpuTextureParams* Set(::UnityEngine::Texture* tex)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::CpuTextureParams*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUTEXTUREPARAMS_SET_OFFSET))(this, tex);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUTEXTUREPARAMS_CLEAR_OFFSET))(this);
		}

		::System::Void Push(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUTEXTUREPARAMS_PUSH_OFFSET))(this, cmd);
		}

		::System::Void Push_1(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUTEXTUREPARAMS_PUSH_1_OFFSET))(this, mat);
		}

		::System::Void ForceDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CPUTEXTUREPARAMS_FORCEDIRTY_OFFSET))(this);
		}
	};
}
