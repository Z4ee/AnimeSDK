#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/DecalProjector_Vertex.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_TRIANGLE_NEWQUAD_OFFSET UNITYSDK_OFFSET(0x19688D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_TRIANGLE_NEWTRIANGLE_OFFSET UNITYSDK_OFFSET(0x196889B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_TRIANGLE_SLICE_OFFSET UNITYSDK_OFFSET(0x19689180)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_TRIANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19688950)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalProjector_Triangle_TypeDefinitionIndex = 30343;

	class DecalProjector_Triangle : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_cubeSize()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_Triangle_TypeDefinitionIndex)->GetStaticField(0x12190);
		}
		::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex C; // 0x10
		::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex B; // 0x40
		::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex A; // 0x70

		::System::Void _ctor(::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex A, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex B, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_TRIANGLE__CTOR_OFFSET))(this, A, B, C);
		}

		::System::Void NewTriangle(::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex A, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex B, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex C, ::System::Single fA, ::System::Single fB, ::System::Single fC, ::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::Universal::Internal::DecalProjector_Triangle*>*& triangleList, ::System::Single normalL)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex, ::System::Single, ::System::Single, ::System::Single, ::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::Universal::Internal::DecalProjector_Triangle*>*&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_TRIANGLE_NEWTRIANGLE_OFFSET))(this, A, B, C, fA, fB, fC, triangleList, normalL);
		}

		::System::Void NewQuad(::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex A, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex B, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex C, ::System::Single fA, ::System::Single fB, ::System::Single fC, ::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::Universal::Internal::DecalProjector_Triangle*>*& triangleList, ::System::Single normalL)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex, ::System::Single, ::System::Single, ::System::Single, ::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::Universal::Internal::DecalProjector_Triangle*>*&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_TRIANGLE_NEWQUAD_OFFSET))(this, A, B, C, fA, fB, fC, triangleList, normalL);
		}

		::System::Boolean Slice(::UnityEngine::Vector3 normal, ::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::Universal::Internal::DecalProjector_Triangle*>*& triangleList)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::Universal::Internal::DecalProjector_Triangle*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_TRIANGLE_SLICE_OFFSET))(this, normal, triangleList);
		}
	};
}
