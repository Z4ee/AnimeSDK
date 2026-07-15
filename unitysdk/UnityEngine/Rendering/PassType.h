#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PassType_TypeDefinitionIndex = 4692;

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
		ShadowCaster = 8,
		Deferred = 10,
		Meta = 11,
		MotionVectors = 12,
		ScriptableRenderPipeline = 13,
		ScriptableRenderPipelineDefaultUnlit = 14,
		MotionVectorsOutline = 15,
	};
}
