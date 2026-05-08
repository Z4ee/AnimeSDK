#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GLOBALSETTER_SETINT_OFFSET UNITYSDK_OFFSET(0x19AB5A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GLOBALSETTER_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x19AB5BC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GLOBALSETTER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x19AB5AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GLOBALSETTER_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x19AB5D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GLOBALSETTER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x19AB5CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GLOBALSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB5A50)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_GlobalSetter_TypeDefinitionIndex = 30477;

	class LyraBakedDataManager_GlobalSetter : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::CommandBuffer* cb; // 0x10

		::System::Void _ctor(::UnityEngine::Rendering::CommandBuffer* inCb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GLOBALSETTER__CTOR_OFFSET))(this, inCb);
		}

		::System::Void SetInt(::System::Int32 id, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GLOBALSETTER_SETINT_OFFSET))(this, id, value);
		}

		::System::Void SetTexture(::System::Int32 id, ::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GLOBALSETTER_SETTEXTURE_OFFSET))(this, id, value);
		}

		::System::Void SetTexture_1(::System::Int32 id, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GLOBALSETTER_SETTEXTURE_1_OFFSET))(this, id, value);
		}

		::System::Void SetVector(::System::Int32 id, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GLOBALSETTER_SETVECTOR_OFFSET))(this, id, value);
		}

		::System::Void SetVectorArray(::System::Int32 id, ::Il2CppArray<::UnityEngine::Vector4>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_GLOBALSETTER_SETVECTORARRAY_OFFSET))(this, id, value);
		}
	};
}
