#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class FaceRebuildData; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTFACEREBUILDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0DA3F0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ConnectFaceRebuildData_TypeDefinitionIndex = 40866;

	class ConnectFaceRebuildData : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::FaceRebuildData* faceRebuildData; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* newVertexIndexes; // 0x18

		::System::Void _ctor(::UnityEngine::ProBuilder::FaceRebuildData* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTFACEREBUILDDATA__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
