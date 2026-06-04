#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_FILLVERTEXBUFFER_OFFSET UNITYSDK_OFFSET(0x38752A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_GETSPLITSUMMARIES_OFFSET UNITYSDK_OFFSET(0x3875190)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_GETSUBMESHSUMMARIES_OFFSET UNITYSDK_OFFSET(0x3875220)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_GETSUMMARY_OFFSET UNITYSDK_OFFSET(0x3875110)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B0467D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B0467C0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPolyMeshSample_TypeDefinitionIndex = 41655;

	struct alignas(8) aiPolyMeshSample
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_OP_IMPLICIT_OFFSET))(a1);
		}

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiSample op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSample(*)(::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		/*
		::System::Void GetSummary(::UnityEngine::Formats::Alembic::Sdk::aiMeshSampleSummary& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiMeshSampleSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_GETSUMMARY_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void GetSplitSummaries(::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiMeshSplitSummary> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiMeshSplitSummary>))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_GETSPLITSUMMARIES_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void GetSubmeshSummaries(::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiSubmeshSummary> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiSubmeshSummary>))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_GETSUBMESHSUMMARIES_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void FillVertexBuffer(::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshData> a1, ::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiSubmeshData> a2)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshData>, ::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiSubmeshData>))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOLYMESHSAMPLE_FILLVERTEXBUFFER_OFFSET))(this, a1, a2);
		}
		*/
	};
}
