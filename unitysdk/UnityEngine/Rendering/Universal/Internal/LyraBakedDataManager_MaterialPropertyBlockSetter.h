#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_MATERIALPROPERTYBLOCKSETTER_SETINT_OFFSET UNITYSDK_OFFSET(0x1CEF9420)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_MATERIALPROPERTYBLOCKSETTER_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1CEF9500)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_MATERIALPROPERTYBLOCKSETTER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1CEF9490)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_MATERIALPROPERTYBLOCKSETTER_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1CEF95F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_MATERIALPROPERTYBLOCKSETTER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1CEF9570)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_MATERIALPROPERTYBLOCKSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF9410)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_MaterialPropertyBlockSetter_TypeDefinitionIndex = 26914;

	class LyraBakedDataManager_MaterialPropertyBlockSetter : public ::System::Object
	{
	public:
		::UnityEngine::MaterialPropertyBlock* materialPropertyBlock; // 0x10

		::System::Void _ctor(::UnityEngine::MaterialPropertyBlock* inMaterialPropertyBlock)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_MATERIALPROPERTYBLOCKSETTER__CTOR_OFFSET))(this, inMaterialPropertyBlock);
		}

		::System::Void SetInt(::System::Int32 id, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_MATERIALPROPERTYBLOCKSETTER_SETINT_OFFSET))(this, id, value);
		}

		::System::Void SetTexture(::System::Int32 id, ::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_MATERIALPROPERTYBLOCKSETTER_SETTEXTURE_OFFSET))(this, id, value);
		}

		::System::Void SetTexture_1(::System::Int32 id, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_MATERIALPROPERTYBLOCKSETTER_SETTEXTURE_1_OFFSET))(this, id, value);
		}

		::System::Void SetVector(::System::Int32 id, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_MATERIALPROPERTYBLOCKSETTER_SETVECTOR_OFFSET))(this, id, value);
		}

		::System::Void SetVectorArray(::System::Int32 id, ::Il2CppArray<::UnityEngine::Vector4>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_MATERIALPROPERTYBLOCKSETTER_SETVECTORARRAY_OFFSET))(this, id, value);
		}
	};
}
