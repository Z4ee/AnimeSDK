#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_NONVERSIONEDEDITSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AF6180)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_NONVERSIONEDEDITSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x3AF6150)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProBuilderMesh_NonVersionedEditScope_TypeDefinitionIndex = 43214;

	struct alignas(8) ProBuilderMesh_NonVersionedEditScope
	{
		::UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh; // 0x10
		::System::UInt16 m_VersionIndex; // 0x18

		::System::Void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_NONVERSIONEDEDITSCOPE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_NONVERSIONEDEDITSCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
