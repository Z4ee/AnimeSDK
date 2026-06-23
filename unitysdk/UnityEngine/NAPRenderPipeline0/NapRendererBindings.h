#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1D66E420)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1D66E450)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1D66E3F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1D66E410)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETTEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x1D66E470)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1D66E460)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D66E430)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1D66E440)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1D66E400)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapRendererBindings_TypeDefinitionIndex = 6125;

	class NapRendererBindings : public ::System::Object
	{
	public:
		static ::System::Void Internal_SetFloat(::System::IntPtr rendererHandle, ::System::Int32 propertyId, ::System::Single value, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETFLOAT_OFFSET))(rendererHandle, propertyId, value, materialIndex);
		}

		static ::System::Void Internal_SetVector(::System::IntPtr rendererHandle, ::System::Int32 propertyId, ::UnityEngine::Vector4& value, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector4&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETVECTOR_OFFSET))(rendererHandle, propertyId, value, materialIndex);
		}

		static ::System::Void Internal_SetMatrix(::System::IntPtr rendererHandle, ::System::Int32 propertyId, ::UnityEngine::Matrix4x4& value, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Matrix4x4&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETMATRIX_OFFSET))(rendererHandle, propertyId, value, materialIndex);
		}

		static ::System::Void Internal_SetColor(::System::IntPtr rendererHandle, ::System::Int32 propertyId, ::UnityEngine::Color& value, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Color&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETCOLOR_OFFSET))(rendererHandle, propertyId, value, materialIndex);
		}

		static ::System::Void Internal_SetTexture(::System::IntPtr rendererHandle, ::System::Int32 propertyId, ::UnityEngine::Texture* texture, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETTEXTURE_OFFSET))(rendererHandle, propertyId, texture, materialIndex);
		}

		static ::System::Void Internal_SetVectorArray(::System::IntPtr rendererHandle, ::System::Int32 propertyId, ::Il2CppArray<::UnityEngine::Vector4>* values, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETVECTORARRAY_OFFSET))(rendererHandle, propertyId, values, materialIndex);
		}

		static ::System::Void Internal_SetFloatArray(::System::IntPtr rendererHandle, ::System::Int32 propertyId, ::Il2CppArray<::System::Single>* values, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETFLOATARRAY_OFFSET))(rendererHandle, propertyId, values, materialIndex);
		}

		static ::System::Void Internal_SetTextureScale(::System::IntPtr rendererHandle, ::System::Int32 propertyId, ::UnityEngine::Vector2& scale, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector2&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETTEXTURESCALE_OFFSET))(rendererHandle, propertyId, scale, materialIndex);
		}

		static ::System::Void Internal_SetTextureOffset(::System::IntPtr rendererHandle, ::System::Int32 propertyId, ::UnityEngine::Vector2& offset, ::System::Int32 materialIndex)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector2&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPRENDERERBINDINGS_INTERNAL_SETTEXTUREOFFSET_OFFSET))(rendererHandle, propertyId, offset, materialIndex);
		}
	};
}
