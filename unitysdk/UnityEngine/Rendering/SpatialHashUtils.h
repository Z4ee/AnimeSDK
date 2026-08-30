#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System { class Array; }

#define UNITYENGINE_RENDERING_SPATIALHASHUTILS_CALCULATEOFFSETTEXTUREDATA_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED5FD10)
#define UNITYENGINE_RENDERING_SPATIALHASHUTILS_CALCULATEOFFSETTEXTUREDATA_OFFSET UNITYSDK_OFFSET(0x1ED5FD00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SpatialHashUtils_TypeDefinitionIndex = 4813;

	class SpatialHashUtils : public ::System::Object
	{
	public:
		static ::System::Boolean CalculateOffsetTextureData(::Il2CppArray<::UnityEngine::Vector3Int>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::UnityEngine::Vector3Int>* a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3Int>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3Int>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPATIALHASHUTILS_CALCULATEOFFSETTEXTUREDATA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CalculateOffsetTextureData_Internal(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Array* a4)
		{
			return ((::System::Boolean(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPATIALHASHUTILS_CALCULATEOFFSETTEXTUREDATA_INTERNAL_OFFSET))(a1, a2, a3, a4);
		}
	};
}
