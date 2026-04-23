#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System { class Array; }

#define UNITYENGINE_RENDERING_SPATIALHASHUTILS_CALCULATEOFFSETTEXTUREDATA_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A481140)
#define UNITYENGINE_RENDERING_SPATIALHASHUTILS_CALCULATEOFFSETTEXTUREDATA_OFFSET UNITYSDK_OFFSET(0x1A481130)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SpatialHashUtils_TypeDefinitionIndex = 4624;

	class SpatialHashUtils : public ::System::Object
	{
	public:
		static ::System::Boolean CalculateOffsetTextureData(::Il2CppArray<::UnityEngine::Vector3Int>* indices, ::System::Int32 dataTableSize, ::System::Int32 offsetTableSize, ::Il2CppArray<::UnityEngine::Vector3Int>* outOffsets)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3Int>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3Int>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPATIALHASHUTILS_CALCULATEOFFSETTEXTUREDATA_OFFSET))(indices, dataTableSize, offsetTableSize, outOffsets);
		}

		static ::System::Boolean CalculateOffsetTextureData_Internal(::System::Array* indices, ::System::Int32 dataTableSize, ::System::Int32 offsetTableSize, ::System::Array* outOffsets)
		{
			return ((::System::Boolean(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPATIALHASHUTILS_CALCULATEOFFSETTEXTUREDATA_INTERNAL_OFFSET))(indices, dataTableSize, offsetTableSize, outOffsets);
		}
	};
}
