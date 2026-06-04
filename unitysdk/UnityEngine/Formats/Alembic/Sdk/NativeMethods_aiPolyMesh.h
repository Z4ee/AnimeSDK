#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESH_AISCHEMAGETSAMPLE_OFFSET UNITYSDK_OFFSET(0x1B044890)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int NativeMethods_aiPolyMesh_TypeDefinitionIndex = 41615;

	struct alignas(1) NativeMethods_aiPolyMesh
	{
		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample aiSchemaGetSample(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOLYMESH_AISCHEMAGETSAMPLE_OFFSET))(a1);
		}
		*/
	};
}
