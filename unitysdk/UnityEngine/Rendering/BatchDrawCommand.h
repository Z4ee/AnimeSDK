#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/BatchDrawCommandFlags.h"
#include "unitysdk/UnityEngine/Rendering/BatchID.h"
#include "unitysdk/UnityEngine/Rendering/BatchMaterialID.h"
#include "unitysdk/UnityEngine/Rendering/BatchMeshID.h"

#define UNITYENGINE_RENDERING_BATCHDRAWCOMMAND_SET_USELODDISTANCECULL_OFFSET UNITYSDK_OFFSET(0xA12A50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchDrawCommand_TypeDefinitionIndex = 6218;

	struct alignas(4) BatchDrawCommand
	{
		::System::UInt32 visibleOffset; // 0x10
		::System::UInt32 visibleCount; // 0x14
		::UnityEngine::Rendering::BatchID batchID; // 0x18
		::UnityEngine::Rendering::BatchMaterialID materialID; // 0x1C
		::UnityEngine::Rendering::BatchMeshID meshID; // 0x20
		::System::UInt16 submeshIndex; // 0x24
		::System::UInt16 splitVisibilityMask; // 0x26
		::System::UInt16 lightmapIndex; // 0x28
		::System::UInt16 lightmapIndexDynamic; // 0x2A
		::UnityEngine::Rendering::BatchDrawCommandFlags flags; // 0x2C
		::System::Int32 sortingPosition; // 0x30
		::System::Single lodScreenRelativeMin; // 0x34
		::System::Single lodScreenRelativeMax; // 0x38
		::System::Int32 m_useLodDistanceCull; // 0x3C

		::System::Void set_useLodDistanceCull(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHDRAWCOMMAND_SET_USELODDISTANCECULL_OFFSET))(this, value);
		}
	};
}
