#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_FILLVERTEXBUFFER_OFFSET UNITYSDK_OFFSET(0x2106C30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_GETSPLITSUMMARIES_OFFSET UNITYSDK_OFFSET(0x2106B20)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_GETSUBMESHSUMMARIES_OFFSET UNITYSDK_OFFSET(0x2106BB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_GETSUMMARY_OFFSET UNITYSDK_OFFSET(0x2106AA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x187A81F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x187A81E0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPolyMeshSample_TypeDefinitionIndex = 35001;

	struct alignas(8) aiPolyMeshSample
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_OP_IMPLICIT_OFFSET))(v);
		}

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiSample op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSample(*)(::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		/*
		::System::Void GetSummary(::UnityEngine::Formats::Alembic::Sdk::aiMeshSampleSummary& dst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSampleSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_GETSUMMARY_OFFSET))(this, dst);
		}
		*/

		/*
		::System::Void GetSplitSummaries(::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiMeshSplitSummary> dst)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiMeshSplitSummary>))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_GETSPLITSUMMARIES_OFFSET))(this, dst);
		}
		*/

		/*
		::System::Void GetSubmeshSummaries(::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiSubmeshSummary> dst)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiSubmeshSummary>))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_GETSUBMESHSUMMARIES_OFFSET))(this, dst);
		}
		*/

		/*
		::System::Void FillVertexBuffer(::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshData> vbs, ::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiSubmeshData> ibs)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshData>, ::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiSubmeshData>))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_FILLVERTEXBUFFER_OFFSET))(this, vbs, ibs);
		}
		*/
	};
}
