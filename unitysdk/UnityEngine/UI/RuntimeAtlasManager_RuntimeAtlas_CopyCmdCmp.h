#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_COPYCMDCMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BD4AC0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_COPYCMDCMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BD4AD0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_RuntimeAtlas_CopyCmdCmp_TypeDefinitionIndex = 6810;

	struct alignas(1) RuntimeAtlasManager_RuntimeAtlas_CopyCmdCmp
	{
		/*
		::System::Boolean Equals(::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd a1, ::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd, ::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_COPYCMDCMP_EQUALS_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Int32 GetHashCode(::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_COPYCMDCMP_GETHASHCODE_OFFSET))(this, a1);
		}
		*/
	};
}
