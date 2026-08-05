#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NAPGlobalMaterials.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_ENSUREINTERNALOBJECTS_OFFSET UNITYSDK_OFFSET(0x1E7CB2B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_GETMATERIALWITHINDEX_OFFSET UNITYSDK_OFFSET(0x1E7CB270)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E7CB260)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETCOMPUTESHADERS_OFFSET UNITYSDK_OFFSET(0x1E7CB290)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETMATERIALS_OFFSET UNITYSDK_OFFSET(0x1E7CB250)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETMESHES_OFFSET UNITYSDK_OFFSET(0x1E7CB2A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETTEXTURES_OFFSET UNITYSDK_OFFSET(0x1E7CB280)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETUPBLUENOISE16LTEX_OFFSET UNITYSDK_OFFSET(0x1E7CB2C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CB2D0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GlobalResources_TypeDefinitionIndex = 5708;

	class GlobalResources : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES__CTOR_OFFSET))(this);
		}

		static ::System::Void SetMaterials(::Il2CppArray<::System::Int32>* instanceIds)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETMATERIALS_OFFSET))(instanceIds);
		}

		static ::UnityEngine::Material* GetMaterial(::UnityEngine::NAPRenderPipeline0::NAPGlobalMaterials tp)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::NAPRenderPipeline0::NAPGlobalMaterials))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_GETMATERIAL_OFFSET))(tp);
		}

		static ::UnityEngine::Material* GetMaterialWithIndex(::System::Int32 index)
		{
			return ((::UnityEngine::Material*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_GETMATERIALWITHINDEX_OFFSET))(index);
		}

		static ::System::Void SetTextures(::Il2CppArray<::System::Int32>* instanceIds)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETTEXTURES_OFFSET))(instanceIds);
		}

		static ::System::Void SetComputeShaders(::Il2CppArray<::System::Int32>* instanceIds)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETCOMPUTESHADERS_OFFSET))(instanceIds);
		}

		static ::System::Void SetMeshes(::Il2CppArray<::System::Int32>* instanceIds)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETMESHES_OFFSET))(instanceIds);
		}

		static ::System::Void EnsureInternalObjects()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_ENSUREINTERNALOBJECTS_OFFSET))();
		}

		static ::System::Void SetupBlueNoise16LTex(::Il2CppArray<::UnityEngine::Texture2D*>* inBlueNoise16Tex, ::Il2CppArray<::UnityEngine::Vector2Int>* inBlueNoise16TexSize)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALRESOURCES_SETUPBLUENOISE16LTEX_OFFSET))(inBlueNoise16Tex, inBlueNoise16TexSize);
		}
	};
}
