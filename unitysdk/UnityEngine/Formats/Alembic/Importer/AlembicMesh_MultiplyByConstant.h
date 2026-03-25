#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_MULTIPLYBYCONSTANT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x21040A0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicMesh_MultiplyByConstant_TypeDefinitionIndex = 35023;

	struct alignas(8) AlembicMesh_MultiplyByConstant
	{
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> data; // 0x10
		::System::Single scalar; // 0x20

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_MULTIPLYBYCONSTANT_EXECUTE_OFFSET))(this, index);
		}
	};
}
