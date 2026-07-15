#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GENERATELINESJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3A1FDD0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicCurvesRenderer_GenerateLinesJob_TypeDefinitionIndex = 42559;

	struct alignas(8) AlembicCurvesRenderer_GenerateLinesJob
	{
		::Unity::Collections::NativeArray_1<::System::Int32> indices; // 0x10
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> particleTangent; // 0x20
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> particleUV; // 0x30
		::Unity::Collections::NativeArray_1<::System::Int32> curveCounts; // 0x40
		::Unity::Collections::NativeArray_1<::System::Int32> strideArray; // 0x50
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> vertices; // 0x60

		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GENERATELINESJOB_EXECUTE_OFFSET))(this, a1);
		}
	};
}
