#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_NONVERSIONEDEDITSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x395BA00)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_NONVERSIONEDEDITSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x395B9D0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProBuilderMesh_NonVersionedEditScope_TypeDefinitionIndex = 41603;

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
