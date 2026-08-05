#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_SPOTMESHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB57FB0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderingUtils_SpotMeshData_TypeDefinitionIndex = 5991;

	class RenderingUtils_SpotMeshData : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10
		::System::Int32 angle; // 0x18

		::System::Void _ctor(::System::Int32 angle, ::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERINGUTILS_SPOTMESHDATA__CTOR_OFFSET))(this, angle, mesh);
		}
	};
}
