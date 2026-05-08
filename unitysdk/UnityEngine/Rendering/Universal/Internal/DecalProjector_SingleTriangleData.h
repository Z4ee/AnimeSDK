#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/DecalProjector_Vertex.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalProjector_Triangle; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SINGLETRIANGLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x92E860)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalProjector_SingleTriangleData_TypeDefinitionIndex = 30344;

	struct alignas(8) DecalProjector_SingleTriangleData
	{
		::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex A; // 0x10
		::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex B; // 0x40
		::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex C; // 0x70
		::UnityEngine::Rendering::Universal::Internal::DecalProjector_Triangle* T; // 0xA0

		/*
		::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* tempTriangles, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* tempVertices, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* tempOriginalUVs, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* tempNormals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tempTangents, ::System::Int32 t, ::System::Int32 indexOffsetA, ::System::Int32 indexOffsetB, ::System::Int32 indexOffsetC, ::UnityEngine::Transform* thisTransform, ::UnityEngine::Transform* sourceTransform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SINGLETRIANGLEDATA__CTOR_OFFSET))(this, tempTriangles, tempVertices, tempOriginalUVs, tempNormals, tempTangents, t, indexOffsetA, indexOffsetB, indexOffsetC, thisTransform, sourceTransform);
		}
		*/
	};
}
