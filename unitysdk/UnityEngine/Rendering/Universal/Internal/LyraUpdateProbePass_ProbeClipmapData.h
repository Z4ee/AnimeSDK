#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/Vector4i.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_PROBECLIPMAPDATA_PACKDATA_OFFSET UNITYSDK_OFFSET(0x926EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_PROBECLIPMAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x926E60)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraUpdateProbePass_ProbeClipmapData_TypeDefinitionIndex = 26444;

	struct alignas(8) LyraUpdateProbePass_ProbeClipmapData
	{
		::Il2CppArray<::UnityEngine::Vector4>* WorldPosToProbeCoord; // 0x10
		::Il2CppArray<::UnityEngine::Vector4>* ProbeCoordToWorldPos; // 0x18
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::Vector4i>* ProbeCoordShift; // 0x20
		::Il2CppArray<::UnityEngine::Vector4>* PackedData; // 0x28
		::System::Int32 m_LyraProbeClipmapCount; // 0x30

		::System::Void _ctor(::System::Int32 _LyraProbeClipmapCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_PROBECLIPMAPDATA__CTOR_OFFSET))(this, _LyraProbeClipmapCount);
		}

		::System::Void PackData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_PROBECLIPMAPDATA_PACKDATA_OFFSET))(this);
		}
	};
}
