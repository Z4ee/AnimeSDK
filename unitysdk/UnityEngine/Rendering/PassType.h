#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PassType_TypeDefinitionIndex = 6174;

	enum class PassType : ::System::Int32
	{
		Normal = 0,
		Vertex = 1,
		VertexLM = 2,
		VertexLMRGBM = 3,
		ForwardBase = 4,
		ForwardAdd = 5,
		LightPrePassBase = 6,
		LightPrePassFinal = 7,
		LightPrePassBaseMeshlet = 8,
		LightPrePassFinalMeshlet = 9,
		ShadowCaster = 10,
		ShadowCollector = 11,
		Deferred = 12,
		Meta = 13,
		MotionVectors = 14,
		ScriptableRenderPipeline = 15,
		ScriptableRenderPipelineDefaultUnlit = 16,
	};
}
