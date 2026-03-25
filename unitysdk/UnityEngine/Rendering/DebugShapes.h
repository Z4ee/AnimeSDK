#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDBOX_OFFSET UNITYSDK_OFFSET(0x188DDFF0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDCONE_OFFSET UNITYSDK_OFFSET(0x188DF1E0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDPYRAMID_OFFSET UNITYSDK_OFFSET(0x188E02C0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDSHAPES_OFFSET UNITYSDK_OFFSET(0x188E0BE0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDSPHERE_OFFSET UNITYSDK_OFFSET(0x188DD390)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x188DD310)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REBUILDRESOURCES_OFFSET UNITYSDK_OFFSET(0x188E0CE0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTBOXMESH_OFFSET UNITYSDK_OFFSET(0x188E0D90)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTCONEMESH_OFFSET UNITYSDK_OFFSET(0x188E0DF0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTPYRAMIDMESH_OFFSET UNITYSDK_OFFSET(0x188E0E50)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTSPHEREMESH_OFFSET UNITYSDK_OFFSET(0x188E0D30)
#define UNITYENGINE_RENDERING_DEBUGSHAPES__CTOR_OFFSET UNITYSDK_OFFSET(0x188DD380)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugShapes_TypeDefinitionIndex = 27809;

	class DebugShapes : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::DebugShapes** StaticGet_s_Instance()
		{
			return (::UnityEngine::Rendering::DebugShapes**)Il2CppClass::FromTypeDefinitionIndex(DebugShapes_TypeDefinitionIndex)->GetStaticField(0x1F530);
		}
		::UnityEngine::Mesh* m_pyramidMesh; // 0x10
		::UnityEngine::Mesh* m_boxMesh; // 0x18
		::UnityEngine::Mesh* m_coneMesh; // 0x20
		::UnityEngine::Mesh* m_sphereMesh; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::DebugShapes* get_instance()
		{
			return ((::UnityEngine::Rendering::DebugShapes*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_GET_INSTANCE_OFFSET))();
		}

		::System::Void BuildSphere(::UnityEngine::Mesh*& outputMesh, ::System::Single radius, ::System::UInt32 longSubdiv, ::System::UInt32 latSubdiv)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*&, ::System::Single, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDSPHERE_OFFSET))(this, outputMesh, radius, longSubdiv, latSubdiv);
		}

		::System::Void BuildBox(::UnityEngine::Mesh*& outputMesh, ::System::Single length, ::System::Single width, ::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDBOX_OFFSET))(this, outputMesh, length, width, height);
		}

		::System::Void BuildCone(::UnityEngine::Mesh*& outputMesh, ::System::Single height, ::System::Single topRadius, ::System::Single bottomRadius, ::System::Int32 nbSides)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*&, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDCONE_OFFSET))(this, outputMesh, height, topRadius, bottomRadius, nbSides);
		}

		::System::Void BuildPyramid(::UnityEngine::Mesh*& outputMesh, ::System::Single width, ::System::Single height, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDPYRAMID_OFFSET))(this, outputMesh, width, height, depth);
		}

		::System::Void BuildShapes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDSHAPES_OFFSET))(this);
		}

		::System::Void RebuildResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REBUILDRESOURCES_OFFSET))(this);
		}

		::UnityEngine::Mesh* RequestSphereMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTSPHEREMESH_OFFSET))(this);
		}

		::UnityEngine::Mesh* RequestBoxMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTBOXMESH_OFFSET))(this);
		}

		::UnityEngine::Mesh* RequestConeMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTCONEMESH_OFFSET))(this);
		}

		::UnityEngine::Mesh* RequestPyramidMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTPYRAMIDMESH_OFFSET))(this);
		}
	};
}
