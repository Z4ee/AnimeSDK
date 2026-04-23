#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_SPHERE_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1A2DC720)
#define UNITYENGINE_PROBUILDER_SHAPES_SPHERE_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1A2DC820)
#define UNITYENGINE_PROBUILDER_SHAPES_SPHERE_SUBDIVIDEICOSAHEDRON_OFFSET UNITYSDK_OFFSET(0x1A2DD690)
#define UNITYENGINE_PROBUILDER_SHAPES_SPHERE_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A2DC790)
#define UNITYENGINE_PROBUILDER_SHAPES_SPHERE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2DDC60)
#define UNITYENGINE_PROBUILDER_SHAPES_SPHERE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2DDC50)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Sphere_TypeDefinitionIndex = 40024;

	class Sphere : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_k_IcosphereTriangles()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Sphere_TypeDefinitionIndex)->GetStaticField(0x2E1B0);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_k_IcosphereVertices()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Sphere_TypeDefinitionIndex)->GetStaticField(0x2E1B8);
		}
		::System::Int32 m_Subdivisions; // 0x10
		::System::Int32 m_BottomMostVertexIndex; // 0x14
		::System::Boolean m_Smooth; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPHERE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPHERE__CCTOR_OFFSET))();
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPHERE_COPYSHAPE_OFFSET))(this, shape);
		}

		::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPHERE_UPDATEBOUNDS_OFFSET))(this, mesh, size, rotation, bounds);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPHERE_REBUILDMESH_OFFSET))(this, mesh, size, rotation);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* SubdivideIcosahedron(::Il2CppArray<::UnityEngine::Vector3>* vertices, ::System::Single radius)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPHERE_SUBDIVIDEICOSAHEDRON_OFFSET))(vertices, radius);
		}
	};
}
