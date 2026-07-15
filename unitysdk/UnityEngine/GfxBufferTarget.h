#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int GfxBufferTarget_TypeDefinitionIndex = 4365;

	enum class GfxBufferTarget : ::System::Int32
	{
		Vertex = 1,
		Index = 2,
		CopySource = 4,
		CopyDestination = 8,
		Structured = 16,
		Raw = 32,
		Append = 64,
		Counter = 128,
		IndirectArguments = 256,
		Constant = 512,
		RayTracingAccelerationStructure = 1024,
		RayTracingShaderTable = 2048,
		CpuRead = 4096,
		ComputeNeeded = 1520,
		TextureBufferWithFormatDimension = 8192,
	};
}
