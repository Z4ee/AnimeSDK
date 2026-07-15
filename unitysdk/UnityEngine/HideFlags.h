#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int HideFlags_TypeDefinitionIndex = 4347;

	enum class HideFlags : ::System::Int32
	{
		None = 0,
		HideInHierarchy = 1,
		HideInInspector = 2,
		DontSaveInEditor = 4,
		NotEditable = 8,
		DontSaveInBuild = 16,
		DontUnloadUnusedAsset = 32,
		DebugObject = 128,
		DontSave = 52,
		HideAndDontSave = 61,
		DebugAndDontSave = 156,
	};
}
