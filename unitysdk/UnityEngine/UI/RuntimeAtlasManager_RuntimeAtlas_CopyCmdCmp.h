#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_COPYCMDCMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x22FBC40)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_COPYCMDCMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22FBC50)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_RuntimeAtlas_CopyCmdCmp_TypeDefinitionIndex = 5698;

	struct alignas(1) RuntimeAtlasManager_RuntimeAtlas_CopyCmdCmp
	{
		/*
		::System::Boolean Equals(::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd a, ::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd, ::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_COPYCMDCMP_EQUALS_OFFSET))(this, a, b);
		}
		*/

		/*
		::System::Int32 GetHashCode(::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd a)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_COPYCMDCMP_GETHASHCODE_OFFSET))(this, a);
		}
		*/
	};
}
