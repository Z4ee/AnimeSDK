#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_COMPUTESHADERSETTER_SETINT_OFFSET UNITYSDK_OFFSET(0x1C44F390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_COMPUTESHADERSETTER_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1C44F530)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_COMPUTESHADERSETTER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C44F400)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_COMPUTESHADERSETTER_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1C44F6E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_COMPUTESHADERSETTER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1C44F660)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_COMPUTESHADERSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C44D8F0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_ComputeShaderSetter_TypeDefinitionIndex = 26930;

	class LyraBakedDataManager_ComputeShaderSetter : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::CommandBuffer* cb; // 0x10
		::UnityEngine::ComputeShader* cs; // 0x18
		::System::Int32 kernel; // 0x20

		::System::Void _ctor(::UnityEngine::Rendering::CommandBuffer* inCb, ::UnityEngine::ComputeShader* inCs, ::System::Int32 inKernel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_COMPUTESHADERSETTER__CTOR_OFFSET))(this, inCb, inCs, inKernel);
		}

		::System::Void SetInt(::System::Int32 id, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_COMPUTESHADERSETTER_SETINT_OFFSET))(this, id, value);
		}

		::System::Void SetTexture(::System::Int32 id, ::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_COMPUTESHADERSETTER_SETTEXTURE_OFFSET))(this, id, value);
		}

		::System::Void SetTexture_1(::System::Int32 id, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_COMPUTESHADERSETTER_SETTEXTURE_1_OFFSET))(this, id, value);
		}

		::System::Void SetVector(::System::Int32 id, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_COMPUTESHADERSETTER_SETVECTOR_OFFSET))(this, id, value);
		}

		::System::Void SetVectorArray(::System::Int32 id, ::Il2CppArray<::UnityEngine::Vector4>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_COMPUTESHADERSETTER_SETVECTORARRAY_OFFSET))(this, id, value);
		}
	};
}
