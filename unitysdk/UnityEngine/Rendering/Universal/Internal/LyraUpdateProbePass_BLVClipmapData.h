#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/Vector4i.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_BLVCLIPMAPDATA_PACKDATA_OFFSET UNITYSDK_OFFSET(0x926AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_BLVCLIPMAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x926A40)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraUpdateProbePass_BLVClipmapData_TypeDefinitionIndex = 26446;

	struct alignas(8) LyraUpdateProbePass_BLVClipmapData
	{
		::Il2CppArray<::UnityEngine::Vector4>* WorldPosToVolumeCoord; // 0x10
		::Il2CppArray<::UnityEngine::Vector4>* VolumeCoordToWorldPos; // 0x18
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::Vector4i>* VolumeCoordShift; // 0x20
		::Il2CppArray<::UnityEngine::Vector4>* PackedData; // 0x28
		::System::Int32 m_BLVClipmapCount; // 0x30

		::System::Void _ctor(::System::Int32 clipmapCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_BLVCLIPMAPDATA__CTOR_OFFSET))(this, clipmapCount);
		}

		::System::Void PackData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_BLVCLIPMAPDATA_PACKDATA_OFFSET))(this);
		}
	};
}
