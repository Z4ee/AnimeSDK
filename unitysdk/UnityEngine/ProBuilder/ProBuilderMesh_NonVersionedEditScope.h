#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_NONVERSIONEDEDITSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x22DB750)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_NONVERSIONEDEDITSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x22DB720)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProBuilderMesh_NonVersionedEditScope_TypeDefinitionIndex = 39961;

	struct alignas(8) ProBuilderMesh_NonVersionedEditScope
	{
		::UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh; // 0x10
		::System::UInt16 m_VersionIndex; // 0x18

		::System::Void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_NONVERSIONEDEDITSCOPE__CTOR_OFFSET))(this, mesh);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_NONVERSIONEDEDITSCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
